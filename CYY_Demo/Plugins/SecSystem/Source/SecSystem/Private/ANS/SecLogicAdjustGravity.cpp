// Fill out your copyright notice in the Description page of Project Settings.


#include "ANS/SecLogicAdjustGravity.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// 【关键修改点】：OnStart -> OnStart_Implementation
void USecLogicAdjustGravity::OnStart_Implementation(USecComboComponent* ComboComp, float TotalDuration)
{
	if (ACharacter* Char = GetCharacter(ComboComp))
	{
		if (UCharacterMovementComponent* MoveComp = Char->GetCharacterMovement())
		{
			// 1. 记录原始重力
			OriginalGravity = MoveComp->GravityScale;

			// 2. 获取当前速度复本
			FVector NewVelocity = MoveComp->Velocity;

			// --- [逻辑修改点] ---
			
			// 处理垂直滞空 (Z轴)
			if (bZeroVelocityOnEntry)
			{
				NewVelocity.Z = 0.f;
			}

			// 处理水平刹车 (XY轴) - 新增逻辑
			if (bZeroHorizontalVelocityOnEntry)
			{
				NewVelocity.X = 0.f;
				NewVelocity.Y = 0.f;
			}

			// 应用新速度
			MoveComp->Velocity = NewVelocity;
			// 强制更新组件，防止下一帧计算延迟
			MoveComp->UpdateComponentVelocity();

			// 3. 改重力 (保持不变)
			MoveComp->GravityScale = TargetGravityScale;
		}
	}
}

// 【关键修改点】：OnEnd -> OnEnd_Implementation
void USecLogicAdjustGravity::OnEnd_Implementation(USecComboComponent* ComboComp)
{
	if (bRestoreOnEnd)
	{
		if (ACharacter* Char = GetCharacter(ComboComp))
		{
			if (UCharacterMovementComponent* MoveComp = Char->GetCharacterMovement())
			{
				MoveComp->GravityScale = OriginalGravity;
			}
		}
	}
}
