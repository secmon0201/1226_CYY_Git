// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SecComboComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef SECSYSTEM_SecComboComponent_generated_h
#error "SecComboComponent.generated.h already included, missing '#pragma once' in SecComboComponent.h"
#endif
#define SECSYSTEM_SecComboComponent_generated_h

#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnMontageEnded); \
	DECLARE_FUNCTION(execTryExecuteCombo); \
	DECLARE_FUNCTION(execStartCombo);


#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSecComboComponent(); \
	friend struct Z_Construct_UClass_USecComboComponent_Statics; \
public: \
	DECLARE_CLASS(USecComboComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SecSystem"), NO_API) \
	DECLARE_SERIALIZER(USecComboComponent)


#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USecComboComponent(USecComboComponent&&); \
	USecComboComponent(const USecComboComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USecComboComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USecComboComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USecComboComponent) \
	NO_API virtual ~USecComboComponent();


#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_15_PROLOG
#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_18_INCLASS_NO_PURE_DECLS \
	FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECSYSTEM_API UClass* StaticClass<class USecComboComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_SecComboComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
