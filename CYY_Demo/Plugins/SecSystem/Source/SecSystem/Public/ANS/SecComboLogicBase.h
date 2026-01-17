#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SecComboLogicBase.generated.h"

class USecComboComponent;
class ACharacter;

/**
 * 连招逻辑模块基类
 * 所有具体功能（重力、伤害、特效）都继承自此类
 * 既支持 C++ 高性能实现，也支持策划创建蓝图子类进行快速原型制作
 */
UCLASS(Abstract, Blueprintable, EditInlineNew, DefaultToInstanced, CollapseCategories)
class SECSYSTEM_API USecComboLogicBase : public UObject
{
	GENERATED_BODY()

public:
	// --- 核心接口 ---

	/** * 通知开始时调用 
	 * @note C++ 子类请重写 OnStart_Implementation
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "SecLogic")
	void OnStart(USecComboComponent* ComboComp, float TotalDuration);
	virtual void OnStart_Implementation(USecComboComponent* ComboComp, float TotalDuration);

	/** * 通知更新时调用 
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "SecLogic")
	void OnTick(USecComboComponent* ComboComp, float DeltaTime);
	virtual void OnTick_Implementation(USecComboComponent* ComboComp, float DeltaTime);

	/** * 通知结束时调用 
	 */
	UFUNCTION(BlueprintNativeEvent, Category = "SecLogic")
	void OnEnd(USecComboComponent* ComboComp);
	virtual void OnEnd_Implementation(USecComboComponent* ComboComp);

	// 辅助函数：获取 Owner 角色 (保持不变，蓝图可调)
	UFUNCTION(BlueprintPure, Category = "SecLogic")
	ACharacter* GetCharacter(USecComboComponent* ComboComp) const;
	
	// 确保 UObject 能够在编辑器中正确显示 World Context（如果需要画 Debug 线）
	virtual UWorld* GetWorld() const override;
};