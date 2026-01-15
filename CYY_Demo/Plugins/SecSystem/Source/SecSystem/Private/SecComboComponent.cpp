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

	// --- 1. 优先级判断 ---
	bool bCanPlay = false;
    
	if (CurrentActiveMontage == nullptr)
	{
		// 当前没动作，直接可以播
		bCanPlay = true; 
	}
	else
	{
		// 当前有动作，进行优先级 PK
		
		// 规则 A：高优先级 必定打断 低优先级
		if (Priority > CurrentPriority)
		{
			bCanPlay = true;
		}
		// 规则 B：同级打断 (HighAction 可以互顶，比如闪避打断技能，技能打断受击)
		// 排除 Attack (1级)，防止 Attack 打断 Attack (防抖/防连点)
		else if (Priority == CurrentPriority && Priority >= ESecActionPriority::HighAction)
		{
			// 只有当当前动作处于“允许打断的阶段”（如 Recovery）时，才允许同级打断。
			// 这样可以保护 Windup/Active 阶段不被自己打断（实现无敌帧或硬直保护）。
			if (InterruptiblePhases.HasTag(CurrentPhaseTag))
			{
				bCanPlay = true;
			}
			
			// 如果你想保留“没有任何 Tag 时默认不可打断”或者“默认可打断”，可以在这里调整。
			// 目前逻辑是：必须明确处于配置的 Phase (如 Recovery) 才能打断。
		}
	}

	// --- 2. 结果执行 ---
	if (!bCanPlay)
	{
		return; // 没打过，直接退出
	}

	
	// --- 没通过检查，直接拒绝 ---
	if (!bCanPlay)
	{
		return;
	}

	// --- 3. 播放逻辑 (含防自杀补丁) ---
	ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());
	if (CharacterOwner)
	{
		BindToAnimInstance();

		// 【关键修复步骤】
		// 在播放新动画之前，先把 CurrentActiveMontage 设为 nullptr。
		// 目的：如果 PlayAnimMontage 触发了旧动画的打断，OnMontageEnded 会立即执行。
		// 此时 CurrentActiveMontage 已经是空了，OnMontageEnded 里的 if (Current == Montage) 就会失败。
		// 这样就保护了我们的状态不被误清空。
		UAnimMontage* OldMontage = CurrentActiveMontage; // 暂存旧的（万一播放失败要还原）
		CurrentActiveMontage = nullptr; 

		float Duration = CharacterOwner->PlayAnimMontage(Montage);

		if (Duration > 0.f)
		{
			// 播放成功，正式上位
			CurrentActiveMontage = Montage;
			CurrentPhaseTag = FGameplayTag::EmptyTag;
			CurrentPriority = Priority; 
		}
		else
		{
			// 播放失败（比如角色死亡无法播放），还原状态
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
	// 1. 基础检查
	if (!CurrentActiveMontage) return; 

	// 2. 资源检查
	if (!ComboActionData) return;

	// 3. 查表
	UAnimMontage* NextMontage = ComboActionData->GetNextMontage(CurrentActiveMontage, CurrentPhaseTag);

	// 4. 执行
	if (NextMontage)
	{
		ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());
		if (CharacterOwner)
		{
			BindToAnimInstance();
            
			// 【关键修复】：防止 Attack_A 打断 Attack_A 时，End回调清空变量
			// 必须在 PlayAnimMontage 之前执行这一步
			CurrentActiveMontage = nullptr; 

			float Duration = CharacterOwner->PlayAnimMontage(NextMontage);
            
			if (Duration > 0.f)
			{
				CurrentActiveMontage = NextMontage;
				CurrentPhaseTag = FGameplayTag::EmptyTag; 

				// 连招成功，重置优先级为 Attack (防止从技能接回普攻后优先级卡死)
				CurrentPriority = ESecActionPriority::Attack;
			}
		}
	}
}

void USecComboComponent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	// 1. 基础检查：指针必须对得上（处理 A -> B 的情况）
	if (CurrentActiveMontage != Montage)
	{
		return;
	}

	// 2. 核心修复：处理同名蒙太奇打断 (A -> A)
	if (bInterrupted)
	{
		// 如果是被打断的，我们需要确认是不是“被自己打断并重启了”
		ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());
		if (CharacterOwner && CharacterOwner->GetMesh())
		{
			UAnimInstance* AnimInst = CharacterOwner->GetMesh()->GetAnimInstance();
            
			// 【关键判断】
			// 如果蒙太奇被打断了，但在动画实例中检测到它【仍然在播放】
			// 这说明它被新的 PlayAnimMontage 指令“续命/重启”了。
			// 此时状态是正确的，千万不要清空！
			if (AnimInst && AnimInst->Montage_IsPlaying(Montage))
			{
				return; // 直接退出，保留状态
			}
		}
	}

	// 3. 只有在真正停止（自然结束 或 被外部停止）时，才清理状态
	CurrentActiveMontage = nullptr;
	CurrentPhaseTag = FGameplayTag::EmptyTag;
    
	// 只有自然结束才归零优先级；被打断通常意味着有新动作接管（StartAction里会更新优先级）
	// 但如果是外部打断（如受伤），这里归零也是安全的。
	CurrentPriority = ESecActionPriority::None;
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

