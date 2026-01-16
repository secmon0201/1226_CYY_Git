// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecSystem/Public/ANS/SecLogicAdjustGravity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecLogicAdjustGravity() {}

// Begin Cross Module References
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboLogicBase();
SECSYSTEM_API UClass* Z_Construct_UClass_USecLogicAdjustGravity();
SECSYSTEM_API UClass* Z_Construct_UClass_USecLogicAdjustGravity_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecSystem();
// End Cross Module References

// Begin Class USecLogicAdjustGravity
void USecLogicAdjustGravity::StaticRegisterNativesUSecLogicAdjustGravity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecLogicAdjustGravity);
UClass* Z_Construct_UClass_USecLogicAdjustGravity_NoRegister()
{
	return USecLogicAdjustGravity::StaticClass();
}
struct Z_Construct_UClass_USecLogicAdjustGravity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe9\x80\xbb\xe8\xbe\x91\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x9a\xe8\xb0\x83\xe6\x95\xb4\xe9\x87\x8d\xe5\x8a\x9b\xe5\x92\x8c\xe9\x80\x9f\xe5\xba\xa6\n */" },
#endif
		{ "DisplayName", "Adjust Gravity Logic" },
		{ "IncludePath", "ANS/SecLogicAdjustGravity.h" },
		{ "ModuleRelativePath", "Public/ANS/SecLogicAdjustGravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x80\xbb\xe8\xbe\x91\xe6\xa8\xa1\xe5\x9d\x97\xef\xbc\x9a\xe8\xb0\x83\xe6\x95\xb4\xe9\x87\x8d\xe5\x8a\x9b\xe5\x92\x8c\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZeroVelocityOnEntry_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbf\x9b\xe5\x85\xa5\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe5\xb0\x86Z\xe8\xbd\xb4\xe9\x80\x9f\xe5\xba\xa6\xe6\xb8\x85\xe9\x9b\xb6\xef\xbc\x88\xe5\xae\x9e\xe7\x8e\xb0\xe6\x82\xac\xe5\x81\x9c/\xe6\xbb\x9e\xe7\xa9\xba\xef\xbc\x89 */" },
#endif
		{ "ModuleRelativePath", "Public/ANS/SecLogicAdjustGravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9b\xe5\x85\xa5\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe5\xb0\x86Z\xe8\xbd\xb4\xe9\x80\x9f\xe5\xba\xa6\xe6\xb8\x85\xe9\x9b\xb6\xef\xbc\x88\xe5\xae\x9e\xe7\x8e\xb0\xe6\x82\xac\xe5\x81\x9c/\xe6\xbb\x9e\xe7\xa9\xba\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bZeroHorizontalVelocityOnEntry_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbf\x9b\xe5\x85\xa5\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe5\xb0\x86 X/Y \xe8\xbd\xb4\xef\xbc\x88\xe6\xb0\xb4\xe5\xb9\xb3\xef\xbc\x89\xe9\x80\x9f\xe5\xba\xa6\xe6\xb8\x85\xe9\x9b\xb6\xef\xbc\x9f(\xe7\x94\xa8\xe4\xba\x8e\xe4\xb8\x8b\xe5\x8a\x88\xe6\x82\xac\xe5\x81\x9c\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe6\xbb\x91\xe6\xad\xa5) */" },
#endif
		{ "ModuleRelativePath", "Public/ANS/SecLogicAdjustGravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9b\xe5\x85\xa5\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe5\xb0\x86 X/Y \xe8\xbd\xb4\xef\xbc\x88\xe6\xb0\xb4\xe5\xb9\xb3\xef\xbc\x89\xe9\x80\x9f\xe5\xba\xa6\xe6\xb8\x85\xe9\x9b\xb6\xef\xbc\x9f(\xe7\x94\xa8\xe4\xba\x8e\xe4\xb8\x8b\xe5\x8a\x88\xe6\x82\xac\xe5\x81\x9c\xef\xbc\x8c\xe9\x98\xb2\xe6\xad\xa2\xe6\xbb\x91\xe6\xad\xa5)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetGravityScale_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x9b\xae\xe6\xa0\x87\xe9\x87\x8d\xe5\x8a\x9b\xe5\x80\x8d\xe7\x8e\x87 */" },
#endif
		{ "ModuleRelativePath", "Public/ANS/SecLogicAdjustGravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x9b\xae\xe6\xa0\x87\xe9\x87\x8d\xe5\x8a\x9b\xe5\x80\x8d\xe7\x8e\x87" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreOnEnd_MetaData[] = {
		{ "Category", "Config" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x98\xe5\x8e\x9f\xe9\x87\x8d\xe5\x8a\x9b */" },
#endif
		{ "ModuleRelativePath", "Public/ANS/SecLogicAdjustGravity.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe6\x97\xb6\xe6\x98\xaf\xe5\x90\xa6\xe8\xbf\x98\xe5\x8e\x9f\xe9\x87\x8d\xe5\x8a\x9b" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bZeroVelocityOnEntry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZeroVelocityOnEntry;
	static void NewProp_bZeroHorizontalVelocityOnEntry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bZeroHorizontalVelocityOnEntry;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetGravityScale;
	static void NewProp_bRestoreOnEnd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreOnEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecLogicAdjustGravity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bZeroVelocityOnEntry_SetBit(void* Obj)
{
	((USecLogicAdjustGravity*)Obj)->bZeroVelocityOnEntry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bZeroVelocityOnEntry = { "bZeroVelocityOnEntry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USecLogicAdjustGravity), &Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bZeroVelocityOnEntry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZeroVelocityOnEntry_MetaData), NewProp_bZeroVelocityOnEntry_MetaData) };
void Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bZeroHorizontalVelocityOnEntry_SetBit(void* Obj)
{
	((USecLogicAdjustGravity*)Obj)->bZeroHorizontalVelocityOnEntry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bZeroHorizontalVelocityOnEntry = { "bZeroHorizontalVelocityOnEntry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USecLogicAdjustGravity), &Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bZeroHorizontalVelocityOnEntry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bZeroHorizontalVelocityOnEntry_MetaData), NewProp_bZeroHorizontalVelocityOnEntry_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_TargetGravityScale = { "TargetGravityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecLogicAdjustGravity, TargetGravityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetGravityScale_MetaData), NewProp_TargetGravityScale_MetaData) };
void Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bRestoreOnEnd_SetBit(void* Obj)
{
	((USecLogicAdjustGravity*)Obj)->bRestoreOnEnd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bRestoreOnEnd = { "bRestoreOnEnd", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USecLogicAdjustGravity), &Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bRestoreOnEnd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRestoreOnEnd_MetaData), NewProp_bRestoreOnEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecLogicAdjustGravity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bZeroVelocityOnEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bZeroHorizontalVelocityOnEntry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_TargetGravityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecLogicAdjustGravity_Statics::NewProp_bRestoreOnEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecLogicAdjustGravity_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USecLogicAdjustGravity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USecComboLogicBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SecSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecLogicAdjustGravity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USecLogicAdjustGravity_Statics::ClassParams = {
	&USecLogicAdjustGravity::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USecLogicAdjustGravity_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USecLogicAdjustGravity_Statics::PropPointers),
	0,
	0x003030A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USecLogicAdjustGravity_Statics::Class_MetaDataParams), Z_Construct_UClass_USecLogicAdjustGravity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USecLogicAdjustGravity()
{
	if (!Z_Registration_Info_UClass_USecLogicAdjustGravity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecLogicAdjustGravity.OuterSingleton, Z_Construct_UClass_USecLogicAdjustGravity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USecLogicAdjustGravity.OuterSingleton;
}
template<> SECSYSTEM_API UClass* StaticClass<USecLogicAdjustGravity>()
{
	return USecLogicAdjustGravity::StaticClass();
}
USecLogicAdjustGravity::USecLogicAdjustGravity(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USecLogicAdjustGravity);
USecLogicAdjustGravity::~USecLogicAdjustGravity() {}
// End Class USecLogicAdjustGravity

// Begin Registration
struct Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecLogicAdjustGravity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USecLogicAdjustGravity, USecLogicAdjustGravity::StaticClass, TEXT("USecLogicAdjustGravity"), &Z_Registration_Info_UClass_USecLogicAdjustGravity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecLogicAdjustGravity), 1561853022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecLogicAdjustGravity_h_480893648(TEXT("/Script/SecSystem"),
	Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecLogicAdjustGravity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecLogicAdjustGravity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
