// Fill out your copyright notice in the Description page of Project Settings.

#include "SecComboComponent.h"

#include "SecComboActionData.h"
#include "GameFramework/Character.h"
#include "Animation/AnimMontage.h"

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

