// Fill out your copyright notice in the Description page of Project Settings.

#include "SecComboComponent.h"

#include "SecComboActionData.h"
#include "GameFramework/Character.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimInstance.h"

// Sets default values for this component's properties
USecComboComponent::USecComboComponent()
{

	PrimaryComponentTick.bCanEverTick = false;

}

void USecComboComponent::StartCombo(UAnimMontage* OpeningMontage)
{
	// 直接调用通用函数，传入 Attack 优先级
	// 这样 Attack 遇到 Attack 会因为优先级相等（但不满足 >= HighAction）而被拒绝
	// 完美保留了之前的“防重复起手”功能
	StartAction(OpeningMontage, ESecActionPriority::Attack);
}


void USecComboComponent::StartAction(UAnimMontage* Montage, ESecActionPriority Priority)
{
	if (!Montage) return;

	// --- 优先级判断逻辑 ---
    
	// 1. 如果当前没有动作 (None)，允许播放
	bool bCanPlay = (CurrentActiveMontage == nullptr);

	// 2. 如果有动作，对比优先级
	if (!bCanPlay)
	{
		// 规则 A：高优先级 必定打断 低优先级 (比如 大招 打断 攻击)
		if (Priority > CurrentPriority)
		{
			bCanPlay = true;
		}
		// 规则 B：同级打断 (你提到的：闪避/技能/受击 可以互相覆盖)
		// 注意：我们通常不希望“攻击”打断“攻击”（起手防抖），所以排除 Attack
		else if (Priority == CurrentPriority && Priority >= ESecActionPriority::HighAction)
		{
			bCanPlay = true;
		}
	}

	// --- 没通过检查，直接拒绝 ---
	if (!bCanPlay)
	{
		return;
	}

	// --- 通过检查，开始执行 (逻辑复用之前的 StartCombo) ---
	ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());
	if (CharacterOwner)
	{
		BindToAnimInstance();

		// 置空策略 (防止回调自杀)
		UAnimMontage* OldMontage = CurrentActiveMontage;
		CurrentActiveMontage = nullptr;

		float Duration = CharacterOwner->PlayAnimMontage(Montage);

		if (Duration > 0.f)
		{
			CurrentActiveMontage = Montage;
			CurrentPhaseTag = FGameplayTag::EmptyTag;
			// 【关键】记录当前优先级
			CurrentPriority = Priority; 
		}
		else
		{
			// 失败回滚
			CurrentActiveMontage = OldMontage;
		}
	}
}

void USecComboComponent::SetComboPhase(FGameplayTag NewPhase)
{
	CurrentPhaseTag = NewPhase;
}

void USecComboComponent::ClearComboPhase(FGameplayTag PhaseToEnd)
{
	// 安全检查：只有当要结束的Tag等于当前Tag时才清除，防止时序错乱
	if (CurrentPhaseTag == PhaseToEnd)
	{
		CurrentPhaseTag = FGameplayTag::EmptyTag;
	}
}

void USecComboComponent::TryExecuteCombo()
{
	// 1. 基础检查：如果没有正在播放的动作，直接视为无法连招,或者执行起手逻辑
	if (!CurrentActiveMontage)
	{
		// 这里可以处理 idle -> attack_1 的逻辑，或者依赖外部传入起手逻辑
		// 简单示例：直接返回，等待外部调用 PlayAnimMontage 启动第一个动作
		return; 
	}

	// 2. 资源检查
	if (!ComboActionData)
	{
		UE_LOG(LogTemp, Warning, TEXT("SecCombo: DataAsset missing!"));
		return;
	}

	// 3. 查表：这一步 CurrentActiveMontage 必须有值！
	// 如果你在前摇期（Tag 不对或配置为空），这里会返回 nullptr
	UAnimMontage* NextMontage = ComboActionData->GetNextMontage(CurrentActiveMontage, CurrentPhaseTag);

	// 4. 只有查表成功（确认要切动画了），才进入执行流程
	if (NextMontage)
	{
		ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());
		if (CharacterOwner)
		{

			// 防御性绑定 (防止连招过程中 AnimInstance 发生变化，虽然很少见)
			BindToAnimInstance();

			// 【关键策略】：查表已完成，NextMontage 已拿到。
			// 现在把 CurrentActiveMontage 设为空。
			// 作用：紧接着调用 PlayAnimMontage 会打断旧动画，触发 OnMontageEnded(Old)。
			// OnMontageEnded 里的 if (Current == Old) 判断会失败（因为 Current 已经是 nullptr 了）。
			// 从而防止旧动画的回调误删了我们的状态。即防止自杀。
			CurrentActiveMontage = nullptr;
			
			// 5. 播放新动画
			float Duration = CharacterOwner->PlayAnimMontage(NextMontage);
            
			// 更新状态
			if (Duration > 0.f)
			{
				// 播放成功，立即更新为新状态
				CurrentActiveMontage = NextMontage;
				// 重置窗口，等待新蒙太奇的 ANS 触发新状态
				CurrentPhaseTag = FGameplayTag::EmptyTag;

				// 【新增补丁】连招衔接成功后，必须更新优先级！
				// 因为 ComboActionData 里配的大多是普通攻击连招
				// 所以这里通常要把优先级“降回”为 Attack。
				// 否则从大招/技能接回普攻后，优先级会卡在高位，导致后续无法正常起手。
				CurrentPriority = ESecActionPriority::Attack;
			}
			else
			{
				// 极罕见情况：播放失败（比如角色死了），可以考虑恢复状态或不做处理
				// CurrentActiveMontage = nullptr; // 保持为空或恢复为上一个有效状态
			}
		}
	}
}

void USecComboComponent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	// 安全检查：只有当结束的蒙太奇是当前正在播放的才清除状态
	if (CurrentActiveMontage == Montage)
	{
		CurrentActiveMontage = nullptr;
		CurrentPhaseTag = FGameplayTag::EmptyTag;
        
		// 【关键】动作自然结束，优先级归零，允许后续任何动作进入
		CurrentPriority = ESecActionPriority::None;
	}
}

void USecComboComponent::BindToAnimInstance()
{
	if (ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner()))
	{
		if (USkeletalMeshComponent* Mesh = CharacterOwner->GetMesh())
		{
			if (UAnimInstance* AnimInst = Mesh->GetAnimInstance())
			{
				// 检查是否已经绑定，防止重复 Remove/Add
				if (!AnimInst->OnMontageEnded.IsAlreadyBound(this, &USecComboComponent::OnMontageEnded))
				{
					AnimInst->OnMontageEnded.AddDynamic(this, &USecComboComponent::OnMontageEnded);
				}
			}
		}
	}
}



// Called when the game starts
void USecComboComponent::BeginPlay()
{
	Super::BeginPlay();

	// 游戏开始时预先绑定一次，防止第一次攻击时因为某些原因没绑上
	BindToAnimInstance();
	
}


// Called every frame
void USecComboComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

}

