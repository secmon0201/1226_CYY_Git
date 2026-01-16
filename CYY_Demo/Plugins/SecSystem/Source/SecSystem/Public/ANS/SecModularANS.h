// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "SecComboLogicBase.h"
#include "SecModularANS.generated.h"

/**
 * 模块化连招通知容器
 * 本身不含逻辑，只作为一个容器来执行 LogicModules 里的逻辑
 */
UCLASS(meta = (DisplayName = "Sec Modular Logic"))
class SECSYSTEM_API USecModularANS : public UAnimNotifyState
{
	GENERATED_BODY()

public:
	USecModularANS();

	/** 逻辑模块列表：在这里添加重力、特效、伤害判定等逻辑 */
	UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite, Category = "SecLogic")
	TArray<TObjectPtr<USecComboLogicBase>> LogicModules;

	// --- ANS 接口 ---
	virtual void NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference) override;
	virtual void NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference) override;
};