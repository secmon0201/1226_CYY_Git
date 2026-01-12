// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SecComboActionData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
struct FGameplayTag;
#ifdef SECSYSTEM_SecComboActionData_generated_h
#error "SecComboActionData.generated.h already included, missing '#pragma once' in SecComboActionData.h"
#endif
#define SECSYSTEM_SecComboActionData_generated_h

#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSecMontageBranching_Statics; \
	SECSYSTEM_API static class UScriptStruct* StaticStruct();


template<> SECSYSTEM_API UScriptStruct* StaticStruct<struct FSecMontageBranching>();

#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNextMontage);


#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSecComboActionData(); \
	friend struct Z_Construct_UClass_USecComboActionData_Statics; \
public: \
	DECLARE_CLASS(USecComboActionData, UPrimaryDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SecSystem"), NO_API) \
	DECLARE_SERIALIZER(USecComboActionData)


#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_34_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USecComboActionData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USecComboActionData(USecComboActionData&&); \
	USecComboActionData(const USecComboActionData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USecComboActionData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USecComboActionData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USecComboActionData) \
	NO_API virtual ~USecComboActionData();


#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_31_PROLOG
#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_34_INCLASS_NO_PURE_DECLS \
	FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECSYSTEM_API UClass* StaticClass<class USecComboActionData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboActionData_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
