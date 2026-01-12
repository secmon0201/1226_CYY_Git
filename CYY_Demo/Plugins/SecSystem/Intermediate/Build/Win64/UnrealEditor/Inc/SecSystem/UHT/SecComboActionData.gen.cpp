// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecSystem/Public/SecComboActionData.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecComboActionData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboActionData();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboActionData_NoRegister();
SECSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSecMontageBranching();
UPackage* Z_Construct_UPackage__Script_SecSystem();
// End Cross Module References

// Begin ScriptStruct FSecMontageBranching
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SecMontageBranching;
class UScriptStruct* FSecMontageBranching::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SecMontageBranching.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SecMontageBranching.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSecMontageBranching, (UObject*)Z_Construct_UPackage__Script_SecSystem(), TEXT("SecMontageBranching"));
	}
	return Z_Registration_Info_UScriptStruct_SecMontageBranching.OuterSingleton;
}
template<> SECSYSTEM_API UScriptStruct* StaticStruct<FSecMontageBranching>()
{
	return FSecMontageBranching::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSecMontageBranching_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SecComboActionData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BranchingLogic_MetaData[] = {
		{ "Category", "SecCombo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief \xe5\x88\x86\xe6\x94\xaf\xe9\x85\x8d\xe7\xbd\xae \xe6\xb7\xbb\xe5\x8a\xa0 EditAnywhere: \xe5\x85\x81\xe8\xae\xb8\xe5\x9c\xa8 DataAsset \xe9\x9d\xa2\xe6\x9d\xbf\xe7\xbc\x96\xe8\xbe\x91\xef\xbc\x8c""BlueprintReadWrite: \xe5\x85\x81\xe8\xae\xb8\xe8\x93\x9d\xe5\x9b\xbe\xe8\xaf\xbb\xe5\x86\x99,\xe5\x90\xa6\xe5\x88\x99 DataAsset \xe9\x87\x8c\xe6\xb2\xa1\xe6\xb3\x95\xe9\x85\x8d\xe8\xa1\xa8\n\x09 * @key GameplayTag : \xe9\x98\xb6\xe6\xae\xb5 Tag (\xe5\xa6\x82 Combo.Phase.Chain)\n\x09 * @value AnimMontage : \xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboActionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe5\x88\x86\xe6\x94\xaf\xe9\x85\x8d\xe7\xbd\xae \xe6\xb7\xbb\xe5\x8a\xa0 EditAnywhere: \xe5\x85\x81\xe8\xae\xb8\xe5\x9c\xa8 DataAsset \xe9\x9d\xa2\xe6\x9d\xbf\xe7\xbc\x96\xe8\xbe\x91\xef\xbc\x8c""BlueprintReadWrite: \xe5\x85\x81\xe8\xae\xb8\xe8\x93\x9d\xe5\x9b\xbe\xe8\xaf\xbb\xe5\x86\x99,\xe5\x90\xa6\xe5\x88\x99 DataAsset \xe9\x87\x8c\xe6\xb2\xa1\xe6\xb3\x95\xe9\x85\x8d\xe8\xa1\xa8\n@key GameplayTag : \xe9\x98\xb6\xe6\xae\xb5 Tag (\xe5\xa6\x82 Combo.Phase.Chain)\n@value AnimMontage : \xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BranchingLogic_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BranchingLogic_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_BranchingLogic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSecMontageBranching>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSecMontageBranching_Statics::NewProp_BranchingLogic_ValueProp = { "BranchingLogic", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSecMontageBranching_Statics::NewProp_BranchingLogic_Key_KeyProp = { "BranchingLogic_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSecMontageBranching_Statics::NewProp_BranchingLogic = { "BranchingLogic", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSecMontageBranching, BranchingLogic), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BranchingLogic_MetaData), NewProp_BranchingLogic_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSecMontageBranching_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecMontageBranching_Statics::NewProp_BranchingLogic_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecMontageBranching_Statics::NewProp_BranchingLogic_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecMontageBranching_Statics::NewProp_BranchingLogic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecMontageBranching_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSecMontageBranching_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SecSystem,
	nullptr,
	&NewStructOps,
	"SecMontageBranching",
	Z_Construct_UScriptStruct_FSecMontageBranching_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecMontageBranching_Statics::PropPointers),
	sizeof(FSecMontageBranching),
	alignof(FSecMontageBranching),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecMontageBranching_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSecMontageBranching_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSecMontageBranching()
{
	if (!Z_Registration_Info_UScriptStruct_SecMontageBranching.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SecMontageBranching.InnerSingleton, Z_Construct_UScriptStruct_FSecMontageBranching_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SecMontageBranching.InnerSingleton;
}
// End ScriptStruct FSecMontageBranching

// Begin Class USecComboActionData Function GetNextMontage
struct Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics
{
	struct SecComboActionData_eventGetNextMontage_Parms
	{
		const UAnimMontage* CurrentMontage;
		FGameplayTag PhaseTag;
		UAnimMontage* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecSystem|Combo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @brief \xe6\x9f\xa5\xe8\xa1\xa8\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x9a\xe8\x8e\xb7\xe5\x8f\x96\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n\x09 * @param CurrentMontage \xe5\xbd\x93\xe5\x89\x8d\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n\x09 * @param PhaseTag \xe9\x98\xb6\xe6\xae\xb5 Tag (\xe5\xa6\x82 Combo.Phase.Chain)\n\x09 * @return UAnimMontage* \xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboActionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe6\x9f\xa5\xe8\xa1\xa8\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x9a\xe8\x8e\xb7\xe5\x8f\x96\xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n@param CurrentMontage \xe5\xbd\x93\xe5\x89\x8d\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n@param PhaseTag \xe9\x98\xb6\xe6\xae\xb5 Tag (\xe5\xa6\x82 Combo.Phase.Chain)\n@return UAnimMontage* \xe4\xb8\x8b\xe4\xb8\x80\xe4\xb8\xaa\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMontage_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMontage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::NewProp_CurrentMontage = { "CurrentMontage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboActionData_eventGetNextMontage_Parms, CurrentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMontage_MetaData), NewProp_CurrentMontage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::NewProp_PhaseTag = { "PhaseTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboActionData_eventGetNextMontage_Parms, PhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseTag_MetaData), NewProp_PhaseTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboActionData_eventGetNextMontage_Parms, ReturnValue), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::NewProp_CurrentMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::NewProp_PhaseTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecComboActionData, nullptr, "GetNextMontage", nullptr, nullptr, Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::SecComboActionData_eventGetNextMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::SecComboActionData_eventGetNextMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecComboActionData_GetNextMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecComboActionData_GetNextMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USecComboActionData::execGetNextMontage)
{
	P_GET_OBJECT(UAnimMontage,Z_Param_CurrentMontage);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_PhaseTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAnimMontage**)Z_Param__Result=P_THIS->GetNextMontage(Z_Param_CurrentMontage,Z_Param_Out_PhaseTag);
	P_NATIVE_END;
}
// End Class USecComboActionData Function GetNextMontage

// Begin Class USecComboActionData
void USecComboActionData::StaticRegisterNativesUSecComboActionData()
{
	UClass* Class = USecComboActionData::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNextMontage", &USecComboActionData::execGetNextMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecComboActionData);
UClass* Z_Construct_UClass_USecComboActionData_NoRegister()
{
	return USecComboActionData::StaticClass();
}
struct Z_Construct_UClass_USecComboActionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * @brief \xe7\xbb\x84\xe5\x90\x88\xe5\x8a\xa8\xe4\xbd\x9c\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xe6\xa0\xb8\xe5\xbf\x83\n */" },
#endif
		{ "IncludePath", "SecComboActionData.h" },
		{ "ModuleRelativePath", "Public/SecComboActionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe7\xbb\x84\xe5\x90\x88\xe5\x8a\xa8\xe4\xbd\x9c\xe6\x95\xb0\xe6\x8d\xae\xe8\xb5\x84\xe4\xba\xa7\xe6\xa0\xb8\xe5\xbf\x83" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboTable_MetaData[] = {
		{ "Category", "SecSystem|Combo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* @brief \xe4\xb8\xbb\xe8\xa1\xa8\xef\xbc\x9a\xe5\x9b\xa0\xe4\xb8\xba Key \xe6\x98\xaf UAnimMontage \xe6\x8c\x87\xe9\x92\x88\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\x8d\xe6\x94\xaf\xe6\x8c\x81\xe4\xbd\x9c\xe4\xb8\xba Map \xe7\x9a\x84 Key\xef\xbc\x8c\n\x09 * \xe6\x89\x80\xe4\xbb\xa5\xe8\xbf\x99\xe9\x87\x8c\xe5\x8f\xaa\xe7\xbb\x99 EditDefaultsOnly (\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe9\x85\x8d\xe8\xa1\xa8\xe7\x94\xa8)\xef\xbc\x8c\xe4\xb8\x8d\xe7\xbb\x99 BlueprintAccess\xe3\x80\x82\n\x09 * \xe8\x93\x9d\xe5\x9b\xbe\xe9\x80\x9a\xe8\xbf\x87 GetNextMontage \xe5\x87\xbd\xe6\x95\xb0\xe8\xae\xbf\xe9\x97\xae\xe3\x80\x82\n\x09 *\n\x09 * @key AnimMontage : \xe5\xbd\x93\xe5\x89\x8d\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n\x09 * @value FSecMontageBranching : \xe5\x88\x86\xe6\x94\xaf\xe9\x85\x8d\xe7\xbd\xae\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboActionData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@brief \xe4\xb8\xbb\xe8\xa1\xa8\xef\xbc\x9a\xe5\x9b\xa0\xe4\xb8\xba Key \xe6\x98\xaf UAnimMontage \xe6\x8c\x87\xe9\x92\x88\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe4\xb8\x8d\xe6\x94\xaf\xe6\x8c\x81\xe4\xbd\x9c\xe4\xb8\xba Map \xe7\x9a\x84 Key\xef\xbc\x8c\n\xe6\x89\x80\xe4\xbb\xa5\xe8\xbf\x99\xe9\x87\x8c\xe5\x8f\xaa\xe7\xbb\x99 EditDefaultsOnly (\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe9\x85\x8d\xe8\xa1\xa8\xe7\x94\xa8)\xef\xbc\x8c\xe4\xb8\x8d\xe7\xbb\x99 BlueprintAccess\xe3\x80\x82\n\xe8\x93\x9d\xe5\x9b\xbe\xe9\x80\x9a\xe8\xbf\x87 GetNextMontage \xe5\x87\xbd\xe6\x95\xb0\xe8\xae\xbf\xe9\x97\xae\xe3\x80\x82\n\n@key AnimMontage : \xe5\xbd\x93\xe5\x89\x8d\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\n@value FSecMontageBranching : \xe5\x88\x86\xe6\x94\xaf\xe9\x85\x8d\xe7\xbd\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboTable_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboTable_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ComboTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USecComboActionData_GetNextMontage, "GetNextMontage" }, // 3963782528
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecComboActionData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USecComboActionData_Statics::NewProp_ComboTable_ValueProp = { "ComboTable", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSecMontageBranching, METADATA_PARAMS(0, nullptr) }; // 2904718783
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USecComboActionData_Statics::NewProp_ComboTable_Key_KeyProp = { "ComboTable_Key", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USecComboActionData_Statics::NewProp_ComboTable = { "ComboTable", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecComboActionData, ComboTable), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboTable_MetaData), NewProp_ComboTable_MetaData) }; // 2904718783
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecComboActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboActionData_Statics::NewProp_ComboTable_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboActionData_Statics::NewProp_ComboTable_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboActionData_Statics::NewProp_ComboTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecComboActionData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USecComboActionData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_SecSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecComboActionData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USecComboActionData_Statics::ClassParams = {
	&USecComboActionData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USecComboActionData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USecComboActionData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USecComboActionData_Statics::Class_MetaDataParams), Z_Construct_UClass_USecComboActionData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USecComboActionData()
{
	if (!Z_Registration_Info_UClass_USecComboActionData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecComboActionData.OuterSingleton, Z_Construct_UClass_USecComboActionData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USecComboActionData.OuterSingleton;
}
template<> SECSYSTEM_API UClass* StaticClass<USecComboActionData>()
{
	return USecComboActionData::StaticClass();
}
USecComboActionData::USecComboActionData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USecComboActionData);
USecComboActionData::~USecComboActionData() {}
// End Class USecComboActionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSecMontageBranching::StaticStruct, Z_Construct_UScriptStruct_FSecMontageBranching_Statics::NewStructOps, TEXT("SecMontageBranching"), &Z_Registration_Info_UScriptStruct_SecMontageBranching, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSecMontageBranching), 2904718783U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USecComboActionData, USecComboActionData::StaticClass, TEXT("USecComboActionData"), &Z_Registration_Info_UClass_USecComboActionData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecComboActionData), 1487979686U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_3673053127(TEXT("/Script/SecSystem"),
	Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
