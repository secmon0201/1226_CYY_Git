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
	if (OpeningMontage)
	{
		ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());
		
		if (CharacterOwner)
		{
			// 每次起手前，确保我们监听了动画系统
			BindToAnimInstance();
			
			float Duration = CharacterOwner->PlayAnimMontage(OpeningMontage);
			// 只有播放成功了才记录状态
			
			if (Duration > 0.f)
			{
				CurrentActiveMontage = OpeningMontage;
				CurrentPhaseTag = FGameplayTag::EmptyTag;
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
	// 1. 如果没有蒙太奇正在播放，视为起手 (逻辑可根据需求扩展)
	if (!CurrentActiveMontage)
	{
		// 这里可以处理 idle -> attack_1 的逻辑，或者依赖外部传入起手
		// 简单示例：直接返回，等待外部调用 PlayAnimMontage 启动第一个动作
		return; 
	}

	// 2. 核心校验
	if (!ComboActionData)
	{
		UE_LOG(LogTemp, Warning, TEXT("SecCombo: DataAsset missing on Component!"));
		return;
	}

	// 3. 查表
	UAnimMontage* NextMontage = ComboActionData->GetNextMontage(CurrentActiveMontage, CurrentPhaseTag);

	if (NextMontage)
	{
		ACharacter* CharacterOwner = Cast<ACharacter>(GetOwner());
		if (CharacterOwner)
		{

			// 确保监听 (防止连招过程中 AnimInstance 发生变化，虽然很少见)
			BindToAnimInstance();
			
			// 4. 执行连招
			float Duration = CharacterOwner->PlayAnimMontage(NextMontage);
            
			// 更新状态
			if (Duration > 0.f)
			{
				CurrentActiveMontage = NextMontage;
				CurrentPhaseTag = FGameplayTag::EmptyTag; // 重置窗口，等待新蒙太奇的 ANS
			}
		}
	}
}

void USecComboComponent::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	// 安全检查：只有当结束的蒙太奇是当前正在播放的才清除状态
	// 为什么？因为如果是从 A1 连招到 A2：
	// 1. A2 开始播放，CurrentActiveMontage 更新为 A2。
	// 2. A1 被打断 (Interrupted = true)。
	// 3. 此函数触发 (Montage = A1)。
	// 4. 此时 A1 != A2，我们不应该清除 A2。
	// 只有当 A2 自然结束时，Montage == A2，我们才清除。
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
				// 先移除以防重复绑定（虽然 AddDynamic 内部有去重，但为了保险）
				AnimInst->OnMontageEnded.RemoveDynamic(this, &USecComboComponent::OnMontageEnded);
				// 绑定我们的回调
				AnimInst->OnMontageEnded.AddDynamic(this, &USecComboComponent::OnMontageEnded);
			}
		}
	}
}



// Called when the game starts
void USecComboComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USecComboComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

