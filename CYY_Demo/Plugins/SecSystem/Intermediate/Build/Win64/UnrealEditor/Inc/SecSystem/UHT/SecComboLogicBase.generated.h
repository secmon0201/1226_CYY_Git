// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ANS/SecComboLogicBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACharacter;
class USecComboComponent;
#ifdef SECSYSTEM_SecComboLogicBase_generated_h
#error "SecComboLogicBase.generated.h already included, missing '#pragma once' in SecComboLogicBase.h"
#endif
#define SECSYSTEM_SecComboLogicBase_generated_h

#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetCharacter); \
	DECLARE_FUNCTION(execOnEnd); \
	DECLARE_FUNCTION(execOnTick); \
	DECLARE_FUNCTION(execOnStart);


#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_18_CALLBACK_WRAPPERS
#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSecComboLogicBase(); \
	friend struct Z_Construct_UClass_USecComboLogicBase_Statics; \
public: \
	DECLARE_CLASS(USecComboLogicBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SecSystem"), NO_API) \
	DECLARE_SERIALIZER(USecComboLogicBase)


#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USecComboLogicBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USecComboLogicBase(USecComboLogicBase&&); \
	USecComboLogicBase(const USecComboLogicBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USecComboLogicBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USecComboLogicBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USecComboLogicBase) \
	NO_API virtual ~USecComboLogicBase();


#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_15_PROLOG
#define FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_18_CALLBACK_WRAPPERS \
	FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SECSYSTEM_API UClass* StaticClass<class USecComboLogicBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CYY_Demo_Plugins_SecSystem_Source_SecSystem_Public_ANS_SecComboLogicBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
