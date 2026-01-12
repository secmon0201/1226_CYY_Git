// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Engine/DataAsset.h"
#include "SecComboActionData.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FSecMontageBranching
{
	GENERATED_BODY()

	/**
	 * @brief 分支配置 添加 EditAnywhere: 允许在 DataAsset 面板编辑，BlueprintReadWrite: 允许蓝图读写,否则 DataAsset 里没法配表
	 * @key GameplayTag : 阶段 Tag (如 Combo.Phase.Chain)
	 * @value AnimMontage : 下一个蒙太奇
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SecCombo")
	TMap<FGameplayTag, TObjectPtr<UAnimMontage>> BranchingLogic;
	
};


/**
 * @brief 组合动作数据资产核心
 */
UCLASS(BlueprintType)
class SECSYSTEM_API USecComboActionData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	/**
	* @brief 主表：因为 Key 是 UAnimMontage 指针，蓝图不支持作为 Map 的 Key，
	 * 所以这里只给 EditDefaultsOnly (编辑器配表用)，不给 BlueprintAccess。
	 * 蓝图通过 GetNextMontage 函数访问。
	 *
	 * @key AnimMontage : 当前蒙太奇
	 * @value FSecMontageBranching : 分支配置
	 */
	UPROPERTY(EditDefaultsOnly, Category = "SecSystem|Combo")
	TMap<TObjectPtr<UAnimMontage>, FSecMontageBranching> ComboTable;

	/**
	 * @brief 查表函数：获取下一个蒙太奇
	 * @param CurrentMontage 当前蒙太奇
	 * @param PhaseTag 阶段 Tag (如 Combo.Phase.Chain)
	 * @return UAnimMontage* 下一个蒙太奇
	 */
	UFUNCTION(BlueprintCallable, Category = "SecSystem|Combo")
	UAnimMontage* GetNextMontage(const UAnimMontage* CurrentMontage, const FGameplayTag& PhaseTag) const;
};

