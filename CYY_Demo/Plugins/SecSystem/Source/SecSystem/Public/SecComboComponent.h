// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "SecComboComponent.generated.h"


class USecComboActionData;
class UAnimMontage;


UCLASS( ClassGroup=(SecMon), meta=(BlueprintSpawnableComponent) )
class SECSYSTEM_API USecComboComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USecComboComponent();

	/** 用于启动起手式 (Opener) */
	UFUNCTION(BlueprintCallable, Category = "SecCombo")
	void StartCombo(UAnimMontage* OpeningMontage);

	/** 连击配置 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "SecCombo")
	TObjectPtr<USecComboActionData> ComboActionData;

	/** 当前连击状态 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "SecCombo|State")
	FGameplayTag CurrentPhaseTag;

	/** 当前正在播放的连击动画 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "SecCombo|State")
	TObjectPtr<UAnimMontage> CurrentActiveMontage;

	// --- 接口 ---
	/** 由 ANS 调用：设置当前窗口状态 */
	void SetComboPhase(FGameplayTag NewPhase);

	/** 由 ANS 调用：清除状态 */
	void ClearComboPhase(FGameplayTag PhaseToEnd);

	/** 由玩家输入调用：尝试执行攻击 */
	UFUNCTION(BlueprintCallable, Category = "SecCombo")
	void TryExecuteCombo();

	/** 由动画系统调用：当连击动画结束时 */
	UFUNCTION()
	void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);
	
protected:

	// 辅助函数：绑定委托到动画实例
	void BindToAnimInstance();
	
	// Called when the game starts
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
