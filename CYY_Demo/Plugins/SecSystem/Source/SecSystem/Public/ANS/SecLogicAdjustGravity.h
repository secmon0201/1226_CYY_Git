#pragma once

#include "CoreMinimal.h"
#include "SecComboLogicBase.h"
#include "SecLogicAdjustGravity.generated.h"

/**
 * 逻辑模块：调整重力和速度
 */
UCLASS(meta = (DisplayName = "Adjust Gravity Logic"))
class SECSYSTEM_API USecLogicAdjustGravity : public USecComboLogicBase
{
	GENERATED_BODY()

public:
	// --- 配置 ---
	
	/** 进入时是否将Z轴速度清零（实现悬停/滞空） */
	UPROPERTY(EditAnywhere, Category = "Config")
	bool bZeroVelocityOnEntry = false;

	/** 进入时是否将 X/Y 轴（水平）速度清零？(用于下劈悬停，防止滑步) */
	UPROPERTY(EditAnywhere, Category = "Config")
	bool bZeroHorizontalVelocityOnEntry = false;

	/** 目标重力倍率 */
	UPROPERTY(EditAnywhere, Category = "Config")
	float TargetGravityScale = 1.0f;

	/** 结束时是否还原重力 */
	UPROPERTY(EditAnywhere, Category = "Config")
	bool bRestoreOnEnd = true;

private:
	float OriginalGravity;

public:
	// 【关键修改点】：重写 Implementation 版本，而不是原函数
	virtual void OnStart_Implementation(USecComboComponent* ComboComp, float TotalDuration) override;
	virtual void OnEnd_Implementation(USecComboComponent* ComboComp) override;
};