// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SecSystem/Public/SecComboWindowANS.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecComboWindowANS() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboWindowANS();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboWindowANS_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecSystem();
// End Cross Module References

// Begin Class USecComboWindowANS
void USecComboWindowANS::StaticRegisterNativesUSecComboWindowANS()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USecComboWindowANS);
UClass* Z_Construct_UClass_USecComboWindowANS_NoRegister()
{
	return USecComboWindowANS::StaticClass();
}
struct Z_Construct_UClass_USecComboWindowANS_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe4\xbd\xbf\xe7\x94\xa8\xe8\xbf\x9e\xe6\x8b\x9b\xe7\xaa\x97\xe5\x8f\xa3\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\xa0\x87\xe8\xae\xb0\xe8\xbf\x9e\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\xe7\x9a\x84\xe6\x9c\x89\xe6\x95\x88\xe6\x97\xb6\xe9\x97\xb4\xe7\xaa\x97\xe5\x8f\xa3\n */" },
#endif
		{ "DisplayName", "Sec Combo Window" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SecComboWindowANS.h" },
		{ "ModuleRelativePath", "Public/SecComboWindowANS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\x92\x99\xe5\xa4\xaa\xe5\xa5\x87\xe4\xbd\xbf\xe7\x94\xa8\xe8\xbf\x9e\xe6\x8b\x9b\xe7\xaa\x97\xe5\x8f\xa3\xef\xbc\x8c\xe7\x94\xa8\xe4\xba\x8e\xe6\xa0\x87\xe8\xae\xb0\xe8\xbf\x9e\xe5\x87\xbb\xe5\x8a\xa8\xe7\x94\xbb\xe7\x9a\x84\xe6\x9c\x89\xe6\x95\x88\xe6\x97\xb6\xe9\x97\xb4\xe7\xaa\x97\xe5\x8f\xa3" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhaseTag_MetaData[] = {
		{ "Category", "SecCombo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe9\x80\x89\xe6\x8b\xa9 Tag\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82 \"Combo.Phase.Recovery\" (\xe5\xaf\xb9\xe5\xba\x94 a1_end)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/SecComboWindowANS.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe9\x80\x89\xe6\x8b\xa9 Tag\xef\xbc\x8c\xe4\xbe\x8b\xe5\xa6\x82 \"Combo.Phase.Recovery\" (\xe5\xaf\xb9\xe5\xba\x94 a1_end)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhaseTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecComboWindowANS>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USecComboWindowANS_Statics::NewProp_PhaseTag = { "PhaseTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USecComboWindowANS, PhaseTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhaseTag_MetaData), NewProp_PhaseTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecComboWindowANS_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecComboWindowANS_Statics::NewProp_PhaseTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecComboWindowANS_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USecComboWindowANS_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SecSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USecComboWindowANS_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USecComboWindowANS_Statics::ClassParams = {
	&USecComboWindowANS::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USecComboWindowANS_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USecComboWindowANS_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USecComboWindowANS_Statics::Class_MetaDataParams), Z_Construct_UClass_USecComboWindowANS_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USecComboWindowANS()
{
	if (!Z_Registration_Info_UClass_USecComboWindowANS.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USecComboWindowANS.OuterSingleton, Z_Construct_UClass_USecComboWindowANS_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USecComboWindowANS.OuterSingleton;
}
template<> SECSYSTEM_API UClass* StaticClass<USecComboWindowANS>()
{
	return USecComboWindowANS::StaticClass();
}
USecComboWindowANS::USecComboWindowANS(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USecComboWindowANS);
USecComboWindowANS::~USecComboWindowANS() {}
// End Class USecComboWindowANS

// Begin Registration
struct Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboWindowANS_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USecComboWindowANS, USecComboWindowANS::StaticClass, TEXT("USecComboWindowANS"), &Z_Registration_Info_UClass_USecComboWindowANS, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecComboWindowANS), 1322081728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboWindowANS_h_3937632415(TEXT("/Script/SecSystem"),
	Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboWindowANS_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboWindowANS_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
