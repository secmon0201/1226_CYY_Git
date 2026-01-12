// Fill out your copyright notice in the Description page of Project Settings.


#include "SecComboActionData.h"

#include "Animation/AnimMontage.h"

UAnimMontage* USecComboActionData::GetNextMontage(const UAnimMontage* CurrentMontage,
	const FGameplayTag& PhaseTag) const
{
	if (!CurrentMontage || !PhaseTag.IsValid()) return nullptr;

	if (const FSecMontageBranching* Config = ComboTable.Find(CurrentMontage))
	{
		if (const TObjectPtr<UAnimMontage>* NextMontagePtr = Config->BranchingLogic.Find(PhaseTag))
		{
			return NextMontagePtr->Get();
		}
	}
	return nullptr;
}
