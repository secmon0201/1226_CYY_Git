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
	// [新增保护] 如果当前已经有活跃的蒙太奇，严禁重新 Start！
	// 这能防止因蓝图逻辑漏洞导致的重复起手
	if (CurrentActiveMontage)
	{
		// 可选：你甚至可以在这里把逻辑转发给 TryExecuteCombo
		// UE_LOG(LogTemp, Warning, TEXT("Combo already active, ignoring StartCombo."));
		return;
	}
	
	if (OpeningMontage)
	{
		ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());
		
		if (CharacterOwner)
		{
			// 每次起手前，确保我们监听了动画系统
			BindToAnimInstance();

			// 虽然 StartCombo 通常是从无到有，但为了逻辑严谨也可以加上
			// 比如强制打断某种状态时
			UAnimMontage* OldMontage = CurrentActiveMontage;
			CurrentActiveMontage = nullptr;
			
			float Duration = CharacterOwner->PlayAnimMontage(OpeningMontage);
			
			// 只有播放成功了才记录状态
			
			if (Duration > 0.f)
			{
				// 播放成功，更新为新的
				CurrentActiveMontage = OpeningMontage;
				// 起手式播放成功后，立即设置为初始状态
				CurrentPhaseTag = FGameplayTag::EmptyTag;
			}
			else
			{
				// 【回滚】如果播放失败（比如死掉了），把状态还原回来（可选）
				CurrentActiveMontage = OldMontage;
			}
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

