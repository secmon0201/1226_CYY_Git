// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SecComboWindowANS.generated.h"

/**
 * 蒙太奇使用连招窗口，用于标记连击动画的有效时间窗口
 */
UCLASS(meta = (DisplayName = "Sec Combo Window"))
class SECSYSTEM_API USecComboWindowANS : public UAnimNotifyState
{
	GENERATED_BODY()

public:

	
	/**
	 * 在编辑器中选择 Tag，例如 "Combo.Phase.Recovery" (对应 a1_end)
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SecCombo")
	FGameplayTag PhaseTag;


	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
	
};
