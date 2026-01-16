// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecSystem/Public/ANS/SecComboLogicBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecComboLogicBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboComponent_NoRegister();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboLogicBase();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboLogicBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecSystem();
// End Cross Module References

// Begin Class USecComboLogicBase Function GetCharacter
struct Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics
{
	struct SecComboLogicBase_eventGetCharacter_Parms
	{
		USecComboComponent* ComboComp;
		ACharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecLogic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbe\x85\xe5\x8a\xa9\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x9a\xe8\x8e\xb7\xe5\x8f\x96 Owner \xe8\xa7\x92\xe8\x89\xb2 (\xe4\xbf\x9d\xe6\x8c\x81\xe4\xb8\x8d\xe5\x8f\x98\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe8\xb0\x83)\n" },
#endif
		{ "ModuleRelativePath", "Public/ANS/SecComboLogicBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbe\x85\xe5\x8a\xa9\xe5\x87\xbd\xe6\x95\xb0\xef\xbc\x9a\xe8\x8e\xb7\xe5\x8f\x96 Owner \xe8\xa7\x92\xe8\x89\xb2 (\xe4\xbf\x9d\xe6\x8c\x81\xe4\xb8\x8d\xe5\x8f\x98\xef\xbc\x8c\xe8\x93\x9d\xe5\x9b\xbe\xe5\x8f\xaf\xe8\xb0\x83)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::NewProp_ComboComp = { "ComboComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboLogicBase_eventGetCharacter_Parms, ComboComp), Z_Construct_UClass_USecComboComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboComp_MetaData), NewProp_ComboComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboLogicBase_eventGetCharacter_Parms, ReturnValue), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::NewProp_ComboComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecComboLogicBase, nullptr, "GetCharacter", nullptr, nullptr, Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::SecComboLogicBase_eventGetCharacter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::SecComboLogicBase_eventGetCharacter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecComboLogicBase_GetCharacter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecComboLogicBase_GetCharacter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USecComboLogicBase::execGetCharacter)
{
	P_GET_OBJECT(USecComboComponent,Z_Param_ComboComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACharacter**)Z_Param__Result=P_THIS->GetCharacter(Z_Param_ComboComp);
	P_NATIVE_END;
}
// End Class USecComboLogicBase Function GetCharacter

// Begin Class USecComboLogicBase Function OnEnd
struct SecComboLogicBase_eventOnEnd_Parms
{
	USecComboComponent* ComboComp;
};
static FName NAME_USecComboLogicBase_OnEnd = FName(TEXT("OnEnd"));
void USecComboLogicBase::OnEnd(USecComboComponent* ComboComp)
{
	SecComboLogicBase_eventOnEnd_Parms Parms;
	Parms.ComboComp=ComboComp;
	ProcessEvent(FindFunctionChecked(NAME_USecComboLogicBase_OnEnd),&Parms);
}
struct Z_Construct_UFunction_USecComboLogicBase_OnEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecLogic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** * \xe9\x80\x9a\xe7\x9f\xa5\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ANS/SecComboLogicBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe7\x9f\xa5\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecComboLogicBase_OnEnd_Statics::NewProp_ComboComp = { "ComboComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboLogicBase_eventOnEnd_Parms, ComboComp), Z_Construct_UClass_USecComboComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboComp_MetaData), NewProp_ComboComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecComboLogicBase_OnEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboLogicBase_OnEnd_Statics::NewProp_ComboComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_OnEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecComboLogicBase_OnEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecComboLogicBase, nullptr, "OnEnd", nullptr, nullptr, Z_Construct_UFunction_USecComboLogicBase_OnEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_OnEnd_Statics::PropPointers), sizeof(SecComboLogicBase_eventOnEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_OnEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecComboLogicBase_OnEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(SecComboLogicBase_eventOnEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecComboLogicBase_OnEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecComboLogicBase_OnEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USecComboLogicBase::execOnEnd)
{
	P_GET_OBJECT(USecComboComponent,Z_Param_ComboComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnd_Implementation(Z_Param_ComboComp);
	P_NATIVE_END;
}
// End Class USecComboLogicBase Function OnEnd

// Begin Class USecComboLogicBase Function OnStart
struct SecComboLogicBase_eventOnStart_Parms
{
	USecComboComponent* ComboComp;
	float TotalDuration;
};
static FName NAME_USecComboLogicBase_OnStart = FName(TEXT("OnStart"));
void USecComboLogicBase::OnStart(USecComboComponent* ComboComp, float TotalDuration)
{
	SecComboLogicBase_eventOnStart_Parms Parms;
	Parms.ComboComp=ComboComp;
	Parms.TotalDuration=TotalDuration;
	ProcessEvent(FindFunctionChecked(NAME_USecComboLogicBase_OnStart),&Parms);
}
struct Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecLogic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** * \xe9\x80\x9a\xe7\x9f\xa5\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 \n\x09 * @note C++ \xe5\xad\x90\xe7\xb1\xbb\xe8\xaf\xb7\xe9\x87\x8d\xe5\x86\x99 OnStart_Implementation\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ANS/SecComboLogicBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe7\x9f\xa5\xe5\xbc\x80\xe5\xa7\x8b\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8\n@note C++ \xe5\xad\x90\xe7\xb1\xbb\xe8\xaf\xb7\xe9\x87\x8d\xe5\x86\x99 OnStart_Implementation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::NewProp_ComboComp = { "ComboComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboLogicBase_eventOnStart_Parms, ComboComp), Z_Construct_UClass_USecComboComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboComp_MetaData), NewProp_ComboComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboLogicBase_eventOnStart_Parms, TotalDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::NewProp_ComboComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::NewProp_TotalDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecComboLogicBase, nullptr, "OnStart", nullptr, nullptr, Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::PropPointers), sizeof(SecComboLogicBase_eventOnStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(SecComboLogicBase_eventOnStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecComboLogicBase_OnStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecComboLogicBase_OnStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USecComboLogicBase::execOnStart)
{
	P_GET_OBJECT(USecComboComponent,Z_Param_ComboComp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStart_Implementation(Z_Param_ComboComp,Z_Param_TotalDuration);
	P_NATIVE_END;
}
// End Class USecComboLogicBase Function OnStart

// Begin Class USecComboLogicBase Function OnTick
struct SecComboLogicBase_eventOnTick_Parms
{
	USecComboComponent* ComboComp;
	float DeltaTime;
};
static FName NAME_USecComboLogicBase_OnTick = FName(TEXT("OnTick"));
void USecComboLogicBase::OnTick(USecComboComponent* ComboComp, float DeltaTime)
{
	SecComboLogicBase_eventOnTick_Parms Parms;
	Parms.ComboComp=ComboComp;
	Parms.DeltaTime=DeltaTime;
	ProcessEvent(FindFunctionChecked(NAME_USecComboLogicBase_OnTick),&Parms);
}
struct Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SecLogic" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** * \xe9\x80\x9a\xe7\x9f\xa5\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8 \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/ANS/SecComboLogicBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\x9a\xe7\x9f\xa5\xe6\x9b\xb4\xe6\x96\xb0\xe6\x97\xb6\xe8\xb0\x83\xe7\x94\xa8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ComboComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::NewProp_ComboComp = { "ComboComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboLogicBase_eventOnTick_Parms, ComboComp), Z_Construct_UClass_USecComboComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboComp_MetaData), NewProp_ComboComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SecComboLogicBase_eventOnTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::NewProp_ComboComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USecComboLogicBase, nullptr, "OnTick", nullptr, nullptr, Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::PropPointers), sizeof(SecComboLogicBase_eventOnTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(SecComboLogicBase_eventOnTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USecComboLogicBase_OnTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USecComboLogicBase_OnTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USecComboLogicBase::execOnTick)
{
	P_GET_OBJECT(USecComboComponent,Z_Param_ComboComp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnTick_Implementation(Z_Param_ComboComp,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Class USecComboLogicBase Function OnTick

// Begin Class USecComboLogicBase
void USecComboLogicBase::StaticRegisterNativesUSecComboLogicBase()
{
	UClass* Class = USecComboLogicBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacter", &USecComboLogicBase::execGetCharacter },
		{ "OnEnd", &USecComboLogicBase::execOnEnd },
		{ "OnStart", &USecComboLogicBase::execOnStart },
		{ "OnTick", &USecComboLogicBase::execOnTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecComboLogicBase);
UClass* Z_Construct_UClass_USecComboLogicBase_NoRegister()
{
	return USecComboLogicBase::StaticClass();
}
struct Z_Construct_UClass_USecComboLogicBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\xbf\x9e\xe6\x8b\x9b\xe9\x80\xbb\xe8\xbe\x91\xe6\xa8\xa1\xe5\x9d\x97\xe5\x9f\xba\xe7\xb1\xbb\n * \xe6\x89\x80\xe6\x9c\x89\xe5\x85\xb7\xe4\xbd\x93\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x88\xe9\x87\x8d\xe5\x8a\x9b\xe3\x80\x81\xe4\xbc\xa4\xe5\xae\xb3\xe3\x80\x81\xe7\x89\xb9\xe6\x95\x88\xef\xbc\x89\xe9\x83\xbd\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa\xe6\xad\xa4\xe7\xb1\xbb\n * \xe6\x97\xa2\xe6\x94\xaf\xe6\x8c\x81 C++ \xe9\xab\x98\xe6\x80\xa7\xe8\x83\xbd\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x8c\xe4\xb9\x9f\xe6\x94\xaf\xe6\x8c\x81\xe7\xad\x96\xe5\x88\x92\xe5\x88\x9b\xe5\xbb\xba\xe8\x93\x9d\xe5\x9b\xbe\xe5\xad\x90\xe7\xb1\xbb\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbf\xab\xe9\x80\x9f\xe5\x8e\x9f\xe5\x9e\x8b\xe5\x88\xb6\xe4\xbd\x9c\n */" },
#endif
		{ "IncludePath", "ANS/SecComboLogicBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ANS/SecComboLogicBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe6\x8b\x9b\xe9\x80\xbb\xe8\xbe\x91\xe6\xa8\xa1\xe5\x9d\x97\xe5\x9f\xba\xe7\xb1\xbb\n\xe6\x89\x80\xe6\x9c\x89\xe5\x85\xb7\xe4\xbd\x93\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x88\xe9\x87\x8d\xe5\x8a\x9b\xe3\x80\x81\xe4\xbc\xa4\xe5\xae\xb3\xe3\x80\x81\xe7\x89\xb9\xe6\x95\x88\xef\xbc\x89\xe9\x83\xbd\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa\xe6\xad\xa4\xe7\xb1\xbb\n\xe6\x97\xa2\xe6\x94\xaf\xe6\x8c\x81 C++ \xe9\xab\x98\xe6\x80\xa7\xe8\x83\xbd\xe5\xae\x9e\xe7\x8e\xb0\xef\xbc\x8c\xe4\xb9\x9f\xe6\x94\xaf\xe6\x8c\x81\xe7\xad\x96\xe5\x88\x92\xe5\x88\x9b\xe5\xbb\xba\xe8\x93\x9d\xe5\x9b\xbe\xe5\xad\x90\xe7\xb1\xbb\xe8\xbf\x9b\xe8\xa1\x8c\xe5\xbf\xab\xe9\x80\x9f\xe5\x8e\x9f\xe5\x9e\x8b\xe5\x88\xb6\xe4\xbd\x9c" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USecComboLogicBase_GetCharacter, "GetCharacter" }, // 1634053134
		{ &Z_Construct_UFunction_USecComboLogicBase_OnEnd, "OnEnd" }, // 2548669848
		{ &Z_Construct_UFunction_USecComboLogicBase_OnStart, "OnStart" }, // 1746263177
		{ &Z_Construct_UFunction_USecComboLogicBase_OnTick, "OnTick" }, // 64734288
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecComboLogicBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USecComboLogicBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SecSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecComboLogicBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USecComboLogicBase_Statics::ClassParams = {
	&USecComboLogicBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x003030A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USecComboLogicBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USecComboLogicBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USecComboLogicBase()
{
	if (!Z_Registration_Info_UClass_USecComboLogicBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecComboLogicBase.OuterSingleton, Z_Construct_UClass_USecComboLogicBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USecComboLogicBase.OuterSingleton;
}
template<> SECSYSTEM_API UClass* StaticClass<USecComboLogicBase>()
{
	return USecComboLogicBase::StaticClass();
}
USecComboLogicBase::USecComboLogicBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USecComboLogicBase);
USecComboLogicBase::~USecComboLogicBase() {}
// End Class USecComboLogicBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USecComboLogicBase, USecComboLogicBase::StaticClass, TEXT("USecComboLogicBase"), &Z_Registration_Info_UClass_USecComboLogicBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecComboLogicBase), 1905465723U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_2159357302(TEXT("/Script/SecSystem"),
	Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
