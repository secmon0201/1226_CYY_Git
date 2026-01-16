// Fill out your copyright notice in the Description page of Project Settings.


#include "ANS/SecModularANS.h"
#include "SecComboComponent.h"

USecModularANS::USecModularANS()
{
	NotifyColor = FColor(0, 200, 200, 255); // 青色，标识这是一个逻辑容器
}

void USecModularANS::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	if (MeshComp && MeshComp->GetOwner())
	{
		if (USecComboComponent* Comp = MeshComp->GetOwner()->FindComponentByClass<USecComboComponent>())
		{
			// 【修复点】去掉 auto*，改为 auto& 或 const auto&
			// TObjectPtr 会自动处理 -> 操作符
			for (const auto& Logic : LogicModules)
			{
				if (Logic) Logic->OnStart(Comp, TotalDuration);
			}
		}
	}
}

void USecModularANS::NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);

	if (MeshComp && MeshComp->GetOwner())
	{
		if (USecComboComponent* Comp = MeshComp->GetOwner()->FindComponentByClass<USecComboComponent>())
		{
			// 【修复点】同上
			for (const auto& Logic : LogicModules)
			{
				if (Logic) Logic->OnTick(Comp, FrameDeltaTime);
			}
		}
	}
}

void USecModularANS::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (MeshComp && MeshComp->GetOwner())
	{
		if (USecComboComponent* Comp = MeshComp->GetOwner()->FindComponentByClass<USecComboComponent>())
		{
			// 【修复点】同上
			for (const auto& Logic : LogicModules)
			{
				if (Logic) Logic->OnEnd(Comp);
			}
		}
	}
}