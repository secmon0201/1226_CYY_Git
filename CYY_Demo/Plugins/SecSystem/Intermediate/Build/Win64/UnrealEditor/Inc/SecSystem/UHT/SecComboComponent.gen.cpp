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
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboActionData_NoRegister();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboComponent();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecSystem();
// End Cross Module References

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
		{ "OnMontageEnded", &USecComboComponent::execOnMontageEnded },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboActionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPhaseTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentActiveMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USecComboComponent_OnMontageEnded, "OnMontageEnded" }, // 4245252288
		{ &Z_Construct_UFunction_USecComboComponent_StartCombo, "StartCombo" }, // 2118660040
		{ &Z_Construct_UFunction_USecComboComponent_TryExecuteCombo, "TryExecuteCombo" }, // 2988120846
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecComboComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USecComboComponent_Statics::NewProp_ComboActionData = { "ComboActionData", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecComboComponent, ComboActionData), Z_Construct_UClass_USecComboActionData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboActionData_MetaData), NewProp_ComboActionData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentPhaseTag = { "CurrentPhaseTag", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecComboComponent, CurrentPhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentPhaseTag_MetaData), NewProp_CurrentPhaseTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentActiveMontage = { "CurrentActiveMontage", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecComboComponent, CurrentActiveMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentActiveMontage_MetaData), NewProp_CurrentActiveMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecComboComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboComponent_Statics::NewProp_ComboActionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentPhaseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboComponent_Statics::NewProp_CurrentActiveMontage,
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
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USecComboComponent, USecComboComponent::StaticClass, TEXT("USecComboComponent"), &Z_Registration_Info_UClass_USecComboComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecComboComponent), 2640375398U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_3892944816(TEXT("/Script/SecSystem"),
	Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
