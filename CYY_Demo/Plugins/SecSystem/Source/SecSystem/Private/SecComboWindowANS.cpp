// Fill out your copyright notice in the Description page of Project Settings.


#include "SecComboWindowANS.h"

#include "SecComboComponent.h"

void USecComboWindowANS::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
                                     float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	if (MeshComp && MeshComp->GetOwner())
	{
		// 获取连招组件并设置 Tag
		if (USecComboComponent* Comp = MeshComp->GetOwner()->FindComponentByClass<USecComboComponent>())
		{
			Comp->SetComboPhase(PhaseTag);
		}
	}
}

void USecComboWindowANS::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (MeshComp && MeshComp->GetOwner())
	{
		// 只有当结束的 Tag 和组件当前的 Tag 一致时才清除
		// 防止边界情况（虽然 Montage Notify 通常是串行的）
		if (USecComboComponent* Comp = MeshComp->GetOwner()->FindComponentByClass<USecComboComponent>())
		{
			Comp->ClearComboPhase(PhaseTag);
		}
	}
}
