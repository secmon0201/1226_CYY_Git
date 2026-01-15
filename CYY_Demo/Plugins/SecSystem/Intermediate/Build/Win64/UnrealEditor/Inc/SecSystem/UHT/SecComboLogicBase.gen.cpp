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
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboLogicBase();
SECSYSTEM_API UClass* Z_Construct_UClass_USecComboLogicBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_SecSystem();
// End Cross Module References

// Begin Class USecComboLogicBase
void USecComboLogicBase::StaticRegisterNativesUSecComboLogicBase()
{
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
		{ "Comment", "/**\n * \xe8\xbf\x9e\xe6\x8b\x9b\xe9\x80\xbb\xe8\xbe\x91\xe6\xa8\xa1\xe5\x9d\x97\xe5\x9f\xba\xe7\xb1\xbb\n * \xe6\x89\x80\xe6\x9c\x89\xe5\x85\xb7\xe4\xbd\x93\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x88\xe9\x87\x8d\xe5\x8a\x9b\xe3\x80\x81\xe4\xbc\xa4\xe5\xae\xb3\xe3\x80\x81\xe7\x89\xb9\xe6\x95\x88\xef\xbc\x89\xe9\x83\xbd\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa\xe6\xad\xa4\xe7\xb1\xbb\n */" },
#endif
		{ "IncludePath", "ANS/SecComboLogicBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ANS/SecComboLogicBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9e\xe6\x8b\x9b\xe9\x80\xbb\xe8\xbe\x91\xe6\xa8\xa1\xe5\x9d\x97\xe5\x9f\xba\xe7\xb1\xbb\n\xe6\x89\x80\xe6\x9c\x89\xe5\x85\xb7\xe4\xbd\x93\xe5\x8a\x9f\xe8\x83\xbd\xef\xbc\x88\xe9\x87\x8d\xe5\x8a\x9b\xe3\x80\x81\xe4\xbc\xa4\xe5\xae\xb3\xe3\x80\x81\xe7\x89\xb9\xe6\x95\x88\xef\xbc\x89\xe9\x83\xbd\xe7\xbb\xa7\xe6\x89\xbf\xe8\x87\xaa\xe6\xad\xa4\xe7\xb1\xbb" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_USecComboLogicBase, USecComboLogicBase::StaticClass, TEXT("USecComboLogicBase"), &Z_Registration_Info_UClass_USecComboLogicBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USecComboLogicBase), 1984594333U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_2585048587(TEXT("/Script/SecSystem"),
	Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
