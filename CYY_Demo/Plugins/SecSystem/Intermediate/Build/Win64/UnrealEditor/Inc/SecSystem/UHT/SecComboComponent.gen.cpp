// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecSystem/Public/SecComboComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecComboComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboActionData_NoRegister();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboComponent();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboComponent_NoRegister();
SECSYSTEM_API UEnum* Z_Construct_UEnum_SecSystem_ESecActionPriority();
UPackage* Z_Construct_UPackage__Script_SecSystem();
// End Cross Module References

// Begin Enum ESecActionPriority
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESecActionPriority;
static UEnum* ESecActionPriority_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESecActionPriority.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESecActionPriority.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SecSystem_ESecActionPriority, (UObject*)Z_Construct_UPackage__Script_SecSystem(), TEXT("ESecActionPriority"));
	}
	return Z_Registration_Info_UEnum_ESecActionPriority.OuterSingleton;
}
template<> SECSYSTEM_API UEnum* StaticEnum<ESecActionPriority>()
{
	return ESecActionPriority_StaticEnum();
}
struct Z_Construct_UEnum_SecSystem_ESecActionPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.DisplayName", "\xe6\x99\xae\xe9\x80\x9a\xe6\x94\xbb\xe5\x87\xbb/\xe8\xbf\x9e\xe6\x8b\x9b" },
		{ "Attack.Name", "ESecActionPriority::Attack" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xae\x9a\xe4\xb9\x89\xe5\x8a\xa8\xe4\xbd\x9c\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\n" },
#endif
		{ "HighAction.DisplayName", "\xe6\x8a\x80\xe8\x83\xbd/\xe9\x97\xaa\xe9\x81\xbf/\xe5\x8f\x97\xe5\x87\xbb" },
		{ "HighAction.Name", "ESecActionPriority::HighAction" },
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
		{ "None.DisplayName", "\xe6\x97\xa0" },
		{ "None.Name", "ESecActionPriority::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xae\x9a\xe4\xb9\x89\xe5\x8a\xa8\xe4\xbd\x9c\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7" },
#endif
		{ "Ultimate.Comment", "// \xe8\xbf\x99\xe4\xb8\x80\xe5\xb1\x82\xe7\xba\xa7\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xba\x92\xe9\xa1\xb6\n" },
		{ "Ultimate.DisplayName", "\xe7\xbb\x88\xe7\xbb\x93\xe6\x8a\x80/\xe5\xa4\xa7\xe6\x8b\x9b" },
		{ "Ultimate.Name", "ESecActionPriority::Ultimate" },
		{ "Ultimate.ToolTip", "\xe8\xbf\x99\xe4\xb8\x80\xe5\xb1\x82\xe7\xba\xa7\xe5\x8f\xaf\xe4\xbb\xa5\xe4\xba\x92\xe9\xa1\xb6" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESecActionPriority::None", (int64)ESecActionPriority::None },
		{ "ESecActionPriority::Attack", (int64)ESecActionPriority::Attack },
		{ "ESecActionPriority::HighAction", (int64)ESecActionPriority::HighAction },
		{ "ESecActionPriority::Ultimate", (int64)ESecActionPriority::Ultimate },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SecSystem_ESecActionPriority_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SecSystem,
	nullptr,
	"ESecActionPriority",
	"ESecActionPriority",
	Z_Construct_UEnum_SecSystem_ESecActionPriority_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SecSystem_ESecActionPriority_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SecSystem_ESecActionPriority_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SecSystem_ESecActionPriority_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SecSystem_ESecActionPriority()
{
	if (!Z_Registration_Info_UEnum_ESecActionPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESecActionPriority.InnerSingleton, Z_Construct_UEnum_SecSystem_ESecActionPriority_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESecActionPriority.InnerSingleton;
}
// End Enum ESecActionPriority

// Begin Class USecComboComponent Function ExitMontageWithMomentum
struct Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics
{
	struct SecComboComponent_eventExitMontageWithMomentum_Parms
	{
		float BlendOutTime;
		FVector TargetVelocity;
		bool bOverrideZ;
		bool bClearComboState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecCombo|Flow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** * [\xe9\x80\x9a\xe7\x94\xa8\xe6\xa0\xb8\xe5\xbf\x83] \xe5\xb8\xa6\xe5\x8a\xa8\xe9\x87\x8f\xe7\x9a\x84\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe5\xae\x89\xe5\x85\xa8\xe9\x80\x80\xe5\x87\xba\xe5\x87\xbd\xe6\x95\xb0\n\x09 * \xe5\x9b\x9e\xe9\x80\x80\xef\xbc\x9a\xe5\x8e\xbb\xe6\x8e\x89\xe4\xba\x86 bIgnoreRootMotion \xe5\x8f\x82\xe6\x95\xb0\xe3\x80\x82\n\x09 * \xe7\x8e\xb0\xe5\x9c\xa8\xe5\xae\x83\xe5\x8f\xaa\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\xe6\xb3\xa8\xe5\x85\xa5\xe7\x89\xa9\xe7\x90\x86\xe9\x80\x9f\xe5\xba\xa6 -> \xe5\x81\x9c\xe6\xad\xa2\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87 -> \xe6\xb8\x85\xe7\x90\x86\xe7\x8a\xb6\xe6\x80\x81\xe3\x80\x82\n\x09 * \xe8\x99\xbd\xe7\x84\xb6 BlendOut \xe6\x9c\x9f\xe9\x97\xb4\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe6\x9c\x89\xe8\xbd\xbb\xe5\xbe\xae\xe5\x87\x8f\xe9\x80\x9f\xef\xbc\x8c\xe4\xbd\x86\xe7\xbb\x9d\xe5\xaf\xb9\xe5\xae\x89\xe5\x85\xa8\xef\xbc\x8c\xe4\xb8\x8d\xe4\xbc\x9a\xe9\xa3\x9e\xe5\x87\xba\xe5\x8e\xbb\xe3\x80\x82\n\x09 */" },
#endif
		{ "CPP_Default_bClearComboState", "true" },
		{ "CPP_Default_bOverrideZ", "false" },
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[\xe9\x80\x9a\xe7\x94\xa8\xe6\xa0\xb8\xe5\xbf\x83] \xe5\xb8\xa6\xe5\x8a\xa8\xe9\x87\x8f\xe7\x9a\x84\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe5\xae\x89\xe5\x85\xa8\xe9\x80\x80\xe5\x87\xba\xe5\x87\xbd\xe6\x95\xb0\n\xe5\x9b\x9e\xe9\x80\x80\xef\xbc\x9a\xe5\x8e\xbb\xe6\x8e\x89\xe4\xba\x86 bIgnoreRootMotion \xe5\x8f\x82\xe6\x95\xb0\xe3\x80\x82\n\xe7\x8e\xb0\xe5\x9c\xa8\xe5\xae\x83\xe5\x8f\xaa\xe8\xb4\x9f\xe8\xb4\xa3\xef\xbc\x9a\xe6\xb3\xa8\xe5\x85\xa5\xe7\x89\xa9\xe7\x90\x86\xe9\x80\x9f\xe5\xba\xa6 -> \xe5\x81\x9c\xe6\xad\xa2\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87 -> \xe6\xb8\x85\xe7\x90\x86\xe7\x8a\xb6\xe6\x80\x81\xe3\x80\x82\n\xe8\x99\xbd\xe7\x84\xb6 BlendOut \xe6\x9c\x9f\xe9\x97\xb4\xe5\x8f\xaf\xe8\x83\xbd\xe4\xbc\x9a\xe6\x9c\x89\xe8\xbd\xbb\xe5\xbe\xae\xe5\x87\x8f\xe9\x80\x9f\xef\xbc\x8c\xe4\xbd\x86\xe7\xbb\x9d\xe5\xaf\xb9\xe5\xae\x89\xe5\x85\xa8\xef\xbc\x8c\xe4\xb8\x8d\xe4\xbc\x9a\xe9\xa3\x9e\xe5\x87\xba\xe5\x8e\xbb\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetVelocity;
	static void NewProp_bOverrideZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideZ;
	static void NewProp_bClearComboState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearComboState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboComponent_eventExitMontageWithMomentum_Parms, BlendOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_TargetVelocity = { "TargetVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboComponent_eventExitMontageWithMomentum_Parms, TargetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_bOverrideZ_SetBit(void* Obj)
{
	((SecComboComponent_eventExitMontageWithMomentum_Parms*)Obj)->bOverrideZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_bOverrideZ = { "bOverrideZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SecComboComponent_eventExitMontageWithMomentum_Parms), &Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_bOverrideZ_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_bClearComboState_SetBit(void* Obj)
{
	((SecComboComponent_eventExitMontageWithMomentum_Parms*)Obj)->bClearComboState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_bClearComboState = { "bClearComboState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SecComboComponent_eventExitMontageWithMomentum_Parms), &Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_bClearComboState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_BlendOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_TargetVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_bOverrideZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::NewProp_bClearComboState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecComboComponent, nullptr, "ExitMontageWithMomentum", nullptr, nullptr, Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::PropPointers), sizeof(Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::SecComboComponent_eventExitMontageWithMomentum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::SecComboComponent_eventExitMontageWithMomentum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USecComboComponent::execExitMontageWithMomentum)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
	P_GET_STRUCT(FVector,Z_Param_TargetVelocity);
	P_GET_UBOOL(Z_Param_bOverrideZ);
	P_GET_UBOOL(Z_Param_bClearComboState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExitMontageWithMomentum(Z_Param_BlendOutTime,Z_Param_TargetVelocity,Z_Param_bOverrideZ,Z_Param_bClearComboState);
	P_NATIVE_END;
}
// End Class USecComboComponent Function ExitMontageWithMomentum

// Begin Class USecComboComponent Function ForceSetGroundVelocity
struct Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics
{
	struct SecComboComponent_eventForceSetGroundVelocity_Parms
	{
		FVector NewVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecCombo|Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** * \xe5\xbc\xba\xe5\x88\xb6\xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe5\x9c\xb0\xe9\x9d\xa2\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x88\xe4\xb8\x8d\xe6\x94\xb9\xe5\x8f\x98\xe7\xa7\xbb\xe5\x8a\xa8\xe6\xa8\xa1\xe5\xbc\x8f\xef\xbc\x8c\xe4\xb8\x8d\xe4\xbc\x9a\xe8\xa7\xa6\xe5\x8f\x91 Falling/Landed\xef\xbc\x89\n\x09 * \xe7\x94\xa8\xe4\xba\x8e\xe8\xa7\xa3\xe5\x86\xb3\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe8\xa1\x94\xe6\x8e\xa5\xe6\x97\xb6\xe7\x9a\x84\xe5\x8a\xa8\xe9\x87\x8f\xe8\xa1\xa5\xe5\x81\xbf\xe9\x97\xae\xe9\xa2\x98\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\xba\xe5\x88\xb6\xe8\xae\xbe\xe7\xbd\xae\xe8\xa7\x92\xe8\x89\xb2\xe7\x9a\x84\xe5\x9c\xb0\xe9\x9d\xa2\xe9\x80\x9f\xe5\xba\xa6\xef\xbc\x88\xe4\xb8\x8d\xe6\x94\xb9\xe5\x8f\x98\xe7\xa7\xbb\xe5\x8a\xa8\xe6\xa8\xa1\xe5\xbc\x8f\xef\xbc\x8c\xe4\xb8\x8d\xe4\xbc\x9a\xe8\xa7\xa6\xe5\x8f\x91 Falling/Landed\xef\xbc\x89\n\xe7\x94\xa8\xe4\xba\x8e\xe8\xa7\xa3\xe5\x86\xb3\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe8\xa1\x94\xe6\x8e\xa5\xe6\x97\xb6\xe7\x9a\x84\xe5\x8a\xa8\xe9\x87\x8f\xe8\xa1\xa5\xe5\x81\xbf\xe9\x97\xae\xe9\xa2\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboComponent_eventForceSetGroundVelocity_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecComboComponent, nullptr, "ForceSetGroundVelocity", nullptr, nullptr, Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::SecComboComponent_eventForceSetGroundVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::SecComboComponent_eventForceSetGroundVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USecComboComponent::execForceSetGroundVelocity)
{
	P_GET_STRUCT(FVector,Z_Param_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceSetGroundVelocity(Z_Param_NewVelocity);
	P_NATIVE_END;
}
// End Class USecComboComponent Function ForceSetGroundVelocity

// Begin Class USecComboComponent Function OnMontageEnded
struct Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics
{
	struct SecComboComponent_eventOnMontageEnded_Parms
	{
		UAnimMontage* Montage;
		bool bInterrupted;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x94\xb1\xe5\x8a\xa8\xe7\x94\xbb\xe7\xb3\xbb\xe7\xbb\x9f\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x9a\xe5\xbd\x93\xe8\xbf\x9e\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6 */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xb1\xe5\x8a\xa8\xe7\x94\xbb\xe7\xb3\xbb\xe7\xbb\x9f\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x9a\xe5\xbd\x93\xe8\xbf\x9e\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static void NewProp_bInterrupted_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterrupted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboComponent_eventOnMontageEnded_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit(void* Obj)
{
	((SecComboComponent_eventOnMontageEnded_Parms*)Obj)->bInterrupted = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::NewProp_bInterrupted = { "bInterrupted", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SecComboComponent_eventOnMontageEnded_Parms), &Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::NewProp_bInterrupted_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::NewProp_bInterrupted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecComboComponent, nullptr, "OnMontageEnded", nullptr, nullptr, Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::SecComboComponent_eventOnMontageEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::SecComboComponent_eventOnMontageEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecComboComponent_OnMontageEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecComboComponent_OnMontageEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USecComboComponent::execOnMontageEnded)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_UBOOL(Z_Param_bInterrupted);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMontageEnded(Z_Param_Montage,Z_Param_bInterrupted);
	P_NATIVE_END;
}
// End Class USecComboComponent Function OnMontageEnded

// Begin Class USecComboComponent Function StartAction
struct Z_Construct_UFunction_USecComboComponent_StartAction_Statics
{
	struct SecComboComponent_eventStartAction_Parms
	{
		UAnimMontage* Montage;
		ESecActionPriority Priority;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecCombo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** * \xe9\x80\x9a\xe7\x94\xa8\xe7\x9a\x84\xe5\x90\xaf\xe5\x8a\xa8\xe5\x8a\xa8\xe4\xbd\x9c\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x88\xe5\xb8\xa6\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xef\xbc\x89\n\x09 * @param Montage \xe7\x9b\xae\xe6\xa0\x87\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n\x09 * @param Priority \xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\n\x09 * @return true: \xe6\x92\xad\xe6\x94\xbe\xe6\x88\x90\xe5\x8a\x9f; false: \xe8\xa2\xab\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe6\x8b\xa6\xe6\x88\xaa\xe6\x88\x96\xe6\x92\xad\xe6\x94\xbe\xe5\xa4\xb1\xe8\xb4\xa5\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe7\x94\xa8\xe7\x9a\x84\xe5\x90\xaf\xe5\x8a\xa8\xe5\x8a\xa8\xe4\xbd\x9c\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x88\xe5\xb8\xa6\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xef\xbc\x89\n@param Montage \xe7\x9b\xae\xe6\xa0\x87\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n@param Priority \xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\n@return true: \xe6\x92\xad\xe6\x94\xbe\xe6\x88\x90\xe5\x8a\x9f; false: \xe8\xa2\xab\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe6\x8b\xa6\xe6\x88\xaa\xe6\x88\x96\xe6\x92\xad\xe6\x94\xbe\xe5\xa4\xb1\xe8\xb4\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Montage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Priority;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecComboComponent_StartAction_Statics::NewProp_Montage = { "Montage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboComponent_eventStartAction_Parms, Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USecComboComponent_StartAction_Statics::NewProp_Priority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USecComboComponent_StartAction_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboComponent_eventStartAction_Parms, Priority), Z_Construct_UEnum_SecSystem_ESecActionPriority, METADATA_PARAMS(0, nullptr) }; // 3961596953
void Z_Construct_UFunction_USecComboComponent_StartAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SecComboComponent_eventStartAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USecComboComponent_StartAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SecComboComponent_eventStartAction_Parms), &Z_Construct_UFunction_USecComboComponent_StartAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecComboComponent_StartAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_StartAction_Statics::NewProp_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_StartAction_Statics::NewProp_Priority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_StartAction_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_StartAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_StartAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecComboComponent_StartAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecComboComponent, nullptr, "StartAction", nullptr, nullptr, Z_Construct_UFunction_USecComboComponent_StartAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_StartAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_USecComboComponent_StartAction_Statics::SecComboComponent_eventStartAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_StartAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecComboComponent_StartAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USecComboComponent_StartAction_Statics::SecComboComponent_eventStartAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecComboComponent_StartAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecComboComponent_StartAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USecComboComponent::execStartAction)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_Montage);
	P_GET_ENUM(ESecActionPriority,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StartAction(Z_Param_Montage,ESecActionPriority(Z_Param_Priority));
	P_NATIVE_END;
}
// End Class USecComboComponent Function StartAction

// Begin Class USecComboComponent Function StartCombo
struct Z_Construct_UFunction_USecComboComponent_StartCombo_Statics
{
	struct SecComboComponent_eventStartCombo_Parms
	{
		UAnimMontage* OpeningMontage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecCombo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x94\xa8\xe4\xba\x8e\xe5\x90\xaf\xe5\x8a\xa8\xe8\xb5\xb7\xe6\x89\x8b\xe5\xbc\x8f (Opener) */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xa8\xe4\xba\x8e\xe5\x90\xaf\xe5\x8a\xa8\xe8\xb5\xb7\xe6\x89\x8b\xe5\xbc\x8f (Opener)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpeningMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::NewProp_OpeningMontage = { "OpeningMontage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboComponent_eventStartCombo_Parms, OpeningMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::NewProp_OpeningMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecComboComponent, nullptr, "StartCombo", nullptr, nullptr, Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::SecComboComponent_eventStartCombo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::SecComboComponent_eventStartCombo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecComboComponent_StartCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecComboComponent_StartCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USecComboComponent::execStartCombo)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_OpeningMontage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCombo(Z_Param_OpeningMontage);
	P_NATIVE_END;
}
// End Class USecComboComponent Function StartCombo

// Begin Class USecComboComponent Function TryExecuteCombo
struct Z_Construct_UFunction_USecComboComponent_TryExecuteCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecCombo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x94\xb1\xe7\x8e\xa9\xe5\xae\xb6\xe8\xbe\x93\xe5\x85\xa5\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x9a\xe5\xb0\x9d\xe8\xaf\x95\xe6\x89\xa7\xe8\xa1\x8c\xe6\x94\xbb\xe5\x87\xbb */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x94\xb1\xe7\x8e\xa9\xe5\xae\xb6\xe8\xbe\x93\xe5\x85\xa5\xe8\xb0\x83\xe7\x94\xa8\xef\xbc\x9a\xe5\xb0\x9d\xe8\xaf\x95\xe6\x89\xa7\xe8\xa1\x8c\xe6\x94\xbb\xe5\x87\xbb" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecComboComponent_TryExecuteCombo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecComboComponent, nullptr, "TryExecuteCombo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboComponent_TryExecuteCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecComboComponent_TryExecuteCombo_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USecComboComponent_TryExecuteCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecComboComponent_TryExecuteCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USecComboComponent::execTryExecuteCombo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryExecuteCombo();
	P_NATIVE_END;
}
// End Class USecComboComponent Function TryExecuteCombo

// Begin Class USecComboComponent
void USecComboComponent::StaticRegisterNativesUSecComboComponent()
{
	UClass* Class = USecComboComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExitMontageWithMomentum", &USecComboComponent::execExitMontageWithMomentum },
		{ "ForceSetGroundVelocity", &USecComboComponent::execForceSetGroundVelocity },
		{ "OnMontageEnded", &USecComboComponent::execOnMontageEnded },
		{ "StartAction", &USecComboComponent::execStartAction },
		{ "StartCombo", &USecComboComponent::execStartCombo },
		{ "TryExecuteCombo", &USecComboComponent::execTryExecuteCombo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecComboComponent);
UClass* Z_Construct_UClass_USecComboComponent_NoRegister()
{
	return USecComboComponent::StaticClass();
}
struct Z_Construct_UClass_USecComboComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SecMon" },
		{ "IncludePath", "SecComboComponent.h" },
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterruptiblePhases_MetaData[] = {
		{ "Category", "SecCombo|Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** * \xe5\x85\x81\xe8\xae\xb8\xe5\x90\x8c\xe7\xba\xa7\xe6\x89\x93\xe6\x96\xad\xe7\x9a\x84\xe9\x98\xb6\xe6\xae\xb5\xe6\xa0\x87\xe7\xad\xbe\xe5\x88\x97\xe8\xa1\xa8\xe3\x80\x82\n\x09 * \xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x9a\xe5\xa6\x82\xe6\x9e\x9c\xe5\x8c\x85\xe5\x90\xab \"Combo.Phase.Recovery\"\xef\xbc\x8c\xe9\x82\xa3\xe4\xb9\x88\xe5\xbd\x93 CurrentPhaseTag \xe4\xb8\xba Recovery \xe6\x97\xb6\xef\xbc\x8c\n\x09 * \xe5\x85\x81\xe8\xae\xb8\xe5\x90\x8c\xe7\xba\xa7\xe7\x9a\x84\xe9\xab\x98\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe5\x8a\xa8\xe4\xbd\x9c\xef\xbc\x88\xe5\xa6\x82\xe9\x97\xaa\xe9\x81\xbf\xe6\x8e\xa5\xe9\x97\xaa\xe9\x81\xbf\xef\xbc\x89\xe4\xba\x92\xe7\x9b\xb8\xe6\x89\x93\xe6\x96\xad\xe3\x80\x82\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\x81\xe8\xae\xb8\xe5\x90\x8c\xe7\xba\xa7\xe6\x89\x93\xe6\x96\xad\xe7\x9a\x84\xe9\x98\xb6\xe6\xae\xb5\xe6\xa0\x87\xe7\xad\xbe\xe5\x88\x97\xe8\xa1\xa8\xe3\x80\x82\n\xe4\xbe\x8b\xe5\xa6\x82\xef\xbc\x9a\xe5\xa6\x82\xe6\x9e\x9c\xe5\x8c\x85\xe5\x90\xab \"Combo.Phase.Recovery\"\xef\xbc\x8c\xe9\x82\xa3\xe4\xb9\x88\xe5\xbd\x93 CurrentPhaseTag \xe4\xb8\xba Recovery \xe6\x97\xb6\xef\xbc\x8c\n\xe5\x85\x81\xe8\xae\xb8\xe5\x90\x8c\xe7\xba\xa7\xe7\x9a\x84\xe9\xab\x98\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7\xe5\x8a\xa8\xe4\xbd\x9c\xef\xbc\x88\xe5\xa6\x82\xe9\x97\xaa\xe9\x81\xbf\xe6\x8e\xa5\xe9\x97\xaa\xe9\x81\xbf\xef\xbc\x89\xe4\xba\x92\xe7\x9b\xb8\xe6\x89\x93\xe6\x96\xad\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboActionData_MetaData[] = {
		{ "Category", "SecCombo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbf\x9e\xe5\x87\xbb\xe9\x85\x8d\xe7\xbd\xae */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe5\x87\xbb\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPhaseTag_MetaData[] = {
		{ "Category", "SecCombo|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe5\x87\xbb\xe7\x8a\xb6\xe6\x80\x81 */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe8\xbf\x9e\xe5\x87\xbb\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentActiveMontage_MetaData[] = {
		{ "Category", "SecCombo|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe5\x89\x8d\xe6\xad\xa3\xe5\x9c\xa8\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe8\xbf\x9e\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe6\xad\xa3\xe5\x9c\xa8\xe6\x92\xad\xe6\x94\xbe\xe7\x9a\x84\xe8\xbf\x9e\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPriority_MetaData[] = {
		{ "Category", "SecCombo|State" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe5\x89\x8d\xe5\x8a\xa8\xe4\xbd\x9c\xe7\x9a\x84\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7 */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8d\xe5\x8a\xa8\xe4\xbd\x9c\xe7\x9a\x84\xe4\xbc\x98\xe5\x85\x88\xe7\xba\xa7" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterruptiblePhases;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboActionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPhaseTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActiveMontage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USecComboComponent_ExitMontageWithMomentum, "ExitMontageWithMomentum" }, // 1721052552
		{ &Z_Construct_UFunction_USecComboComponent_ForceSetGroundVelocity, "ForceSetGroundVelocity" }, // 1451240597
		{ &Z_Construct_UFunction_USecComboComponent_OnMontageEnded, "OnMontageEnded" }, // 4245252288
		{ &Z_Construct_UFunction_USecComboComponent_StartAction, "StartAction" }, // 1359233584
		{ &Z_Construct_UFunction_USecComboComponent_StartCombo, "StartCombo" }, // 2118660040
		{ &Z_Construct_UFunction_USecComboComponent_TryExecuteCombo, "TryExecuteCombo" }, // 2988120846
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecComboComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USecComboComponent_Statics::NewProp_InterruptiblePhases = { "InterruptiblePhases", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecComboComponent, InterruptiblePhases), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterruptiblePhases_MetaData), NewProp_InterruptiblePhases_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USecComboComponent_Statics::NewProp_ComboActionData = { "ComboActionData", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecComboComponent, ComboActionData), Z_Construct_UClass_USecComboActionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboActionData_MetaData), NewProp_ComboActionData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentPhaseTag = { "CurrentPhaseTag", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecComboComponent, CurrentPhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhaseTag_MetaData), NewProp_CurrentPhaseTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentActiveMontage = { "CurrentActiveMontage", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecComboComponent, CurrentActiveMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActiveMontage_MetaData), NewProp_CurrentActiveMontage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentPriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentPriority = { "CurrentPriority", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecComboComponent, CurrentPriority), Z_Construct_UEnum_SecSystem_ESecActionPriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPriority_MetaData), NewProp_CurrentPriority_MetaData) }; // 3961596953
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecComboComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboComponent_Statics::NewProp_InterruptiblePhases,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboComponent_Statics::NewProp_ComboActionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentPhaseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentActiveMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentPriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecComboComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USecComboComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_SecSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecComboComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USecComboComponent_Statics::ClassParams = {
	&USecComboComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USecComboComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USecComboComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USecComboComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USecComboComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USecComboComponent()
{
	if (!Z_Registration_Info_UClass_USecComboComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecComboComponent.OuterSingleton, Z_Construct_UClass_USecComboComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USecComboComponent.OuterSingleton;
}
template<> SECSYSTEM_API UClass* StaticClass<USecComboComponent>()
{
	return USecComboComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USecComboComponent);
USecComboComponent::~USecComboComponent() {}
// End Class USecComboComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESecActionPriority_StaticEnum, TEXT("ESecActionPriority"), &Z_Registration_Info_UEnum_ESecActionPriority, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3961596953U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USecComboComponent, USecComboComponent::StaticClass, TEXT("USecComboComponent"), &Z_Registration_Info_UClass_USecComboComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecComboComponent), 2383016479U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_2659788353(TEXT("/Script/SecSystem"),
	Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
