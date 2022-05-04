// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UState;
class UCharacterMovementComponent;
#ifdef FSMTEST_StateProcessor_generated_h
#error "StateProcessor.generated.h already included, missing '#pragma once' in StateProcessor.h"
#endif
#define FSMTEST_StateProcessor_generated_h

#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_SPARSE_DATA
#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_RPC_WRAPPERS \
	virtual UState* GetStartupState_Implementation(); \
 \
	DECLARE_FUNCTION(execGetStartupState); \
	DECLARE_FUNCTION(execSetController); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execChangeState);


#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual UState* GetStartupState_Implementation(); \
 \
	DECLARE_FUNCTION(execGetStartupState); \
	DECLARE_FUNCTION(execSetController); \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execChangeState);


#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_EVENT_PARMS \
	struct AStateProcessor_eventGetStartupState_Parms \
	{ \
		UState* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AStateProcessor_eventGetStartupState_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_CALLBACK_WRAPPERS
#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAStateProcessor(); \
	friend struct Z_Construct_UClass_UAStateProcessor_Statics; \
public: \
	DECLARE_CLASS(UAStateProcessor, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(UAStateProcessor)


#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUAStateProcessor(); \
	friend struct Z_Construct_UClass_UAStateProcessor_Statics; \
public: \
	DECLARE_CLASS(UAStateProcessor, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(UAStateProcessor)


#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAStateProcessor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAStateProcessor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAStateProcessor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAStateProcessor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAStateProcessor(UAStateProcessor&&); \
	NO_API UAStateProcessor(const UAStateProcessor&); \
public:


#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAStateProcessor(UAStateProcessor&&); \
	NO_API UAStateProcessor(const UAStateProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAStateProcessor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAStateProcessor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAStateProcessor)


#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentState() { return STRUCT_OFFSET(UAStateProcessor, CurrentState); } \
	FORCEINLINE static uint32 __PPO__Controller() { return STRUCT_OFFSET(UAStateProcessor, Controller); }


#define FSMTest_Source_FSMTest_SM_StateProcessor_h_9_PROLOG \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_EVENT_PARMS


#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_SPARSE_DATA \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_RPC_WRAPPERS \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_CALLBACK_WRAPPERS \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_INCLASS \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSMTest_Source_FSMTest_SM_StateProcessor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_SPARSE_DATA \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_CALLBACK_WRAPPERS \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_INCLASS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_SM_StateProcessor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSMTEST_API UClass* StaticClass<class UAStateProcessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSMTest_Source_FSMTest_SM_StateProcessor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
