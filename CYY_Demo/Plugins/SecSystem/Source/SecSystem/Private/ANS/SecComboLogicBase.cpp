// Fill out your copyright notice in the Description page of Project Settings.


#include "ANS/SecComboLogicBase.h"

#include "SecComboComponent.h"
#include "GameFramework/Character.h"

// 默认实现为空，留给子类发挥
void USecComboLogicBase::OnStart_Implementation(USecComboComponent* ComboComp, float TotalDuration) {}
void USecComboLogicBase::OnTick_Implementation(USecComboComponent* ComboComp, float DeltaTime) {}
void USecComboLogicBase::OnEnd_Implementation(USecComboComponent* ComboComp) {}

ACharacter* USecComboLogicBase::GetCharacter(USecComboComponent* ComboComp) const
{
	return ComboComp ? Cast<ACharacter>(ComboComp->GetOwner()) : nullptr;
}

UWorld* USecComboLogicBase::GetWorld() const
{
	// 尝试从 Outer (ANS) -> Mesh -> World 获取，或者直接返回空，视具体实现链而定
	// 在 EditInlineNew 模式下，GetWorld 有时比较棘手，通常在 OnStart 传入 Context 更安全
	// 这里作为保底实现
	if (GetOuter()) return GetOuter()->GetWorld();
	return nullptr;
}
