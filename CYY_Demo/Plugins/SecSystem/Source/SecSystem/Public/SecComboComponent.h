// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "SecComboComponent.generated.h"


class USecComboActionData;
class UAnimMontage;

// 定义动作优先级
UENUM(BlueprintType)
enum class ESecActionPriority : uint8
{
	None        = 0 UMETA(DisplayName = "无"),
	Attack      = 1 UMETA(DisplayName = "普通攻击/连招"),
	HighAction  = 2 UMETA(DisplayName = "技能/闪避/受击"), // 这一层级可以互顶
	Ultimate    = 3 UMETA(DisplayName = "终结技/大招")
};


UCLASS( ClassGroup=(SecMon), meta=(BlueprintSpawnableComponent) )
class SECSYSTEM_API USecComboComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USecComboComponent();

	/** * 通用的启动动作函数（带优先级）
	 * 替代 StartCombo 用于非连招动作，或者由 StartCombo 内部调用
	 * @return true: 播放成功; false: 被优先级拦截或播放失败
	 */
	UFUNCTION(BlueprintCallable, Category = "SecCombo")
	bool StartAction(UAnimMontage* Montage, ESecActionPriority Priority);

	/** 用于启动起手式 (Opener) */
	UFUNCTION(BlueprintCallable, Category = "SecCombo")
	void StartCombo(UAnimMontage* OpeningMontage);

	/** * 允许同级打断的阶段标签列表。
	 * 例如：如果包含 "Combo.Phase.Recovery"，那么当 CurrentPhaseTag 为 Recovery 时，
	 * 允许同级的高优先级动作（如闪避接闪避）互相打断。
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "SecCombo|Config")
	FGameplayTagContainer InterruptiblePhases;

	/** 连击配置 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "SecCombo")
	TObjectPtr<USecComboActionData> ComboActionData;

	/** 当前连击状态 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "SecCombo|State")   
	FGameplayTag CurrentPhaseTag;

	/** 当前正在播放的连击动画 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "SecCombo|State")
	TObjectPtr<UAnimMontage> CurrentActiveMontage;

	/** 当前动作的优先级 */
	UPROPERTY(Transient, BlueprintReadOnly, Category = "SecCombo|State")
	ESecActionPriority CurrentPriority = ESecActionPriority::None;



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



	
	/** * 强制设置角色的地面速度（不改变移动模式，不会触发 Falling/Landed）
	 * 用于解决蒙太奇衔接时的动量补偿问题
	 */
	UFUNCTION(BlueprintCallable, Category = "SecCombo|Movement")
	void ForceSetGroundVelocity(FVector NewVelocity);
	
protected:

	// 辅助函数：绑定委托到动画实例
	void BindToAnimInstance();
	
	// Called when the game starts
	virtual void BeginPlay() override;

	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
