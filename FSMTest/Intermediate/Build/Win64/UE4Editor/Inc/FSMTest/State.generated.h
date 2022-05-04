// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAStateProcessor;
class UCharacterMovementComponent;
#ifdef FSMTEST_State_generated_h
#error "State.generated.h already included, missing '#pragma once' in State.h"
#endif
#define FSMTEST_State_generated_h

#define FSMTest_Source_FSMTest_SM_State_h_8_SPARSE_DATA
#define FSMTest_Source_FSMTest_SM_State_h_8_RPC_WRAPPERS \
	virtual void Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character); \
	virtual void Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character); \
	virtual void Start_Implementation(UAStateProcessor* processor, UCharacterMovementComponent* character); \
 \
	DECLARE_FUNCTION(execExit); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStart);


#define FSMTest_Source_FSMTest_SM_State_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character); \
	virtual void Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character); \
	virtual void Start_Implementation(UAStateProcessor* processor, UCharacterMovementComponent* character); \
 \
	DECLARE_FUNCTION(execExit); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStart);


#define FSMTest_Source_FSMTest_SM_State_h_8_EVENT_PARMS \
	struct State_eventExit_Parms \
	{ \
		UAStateProcessor* Processor; \
		UCharacterMovementComponent* character; \
	}; \
	struct State_eventStart_Parms \
	{ \
		UAStateProcessor* processor; \
		UCharacterMovementComponent* character; \
	}; \
	struct State_eventUpdate_Parms \
	{ \
		UAStateProcessor* Processor; \
		UCharacterMovementComponent* character; \
	};


#define FSMTest_Source_FSMTest_SM_State_h_8_CALLBACK_WRAPPERS
#define FSMTest_Source_FSMTest_SM_State_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUState(); \
	friend struct Z_Construct_UClass_UState_Statics; \
public: \
	DECLARE_CLASS(UState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(UState)


#define FSMTest_Source_FSMTest_SM_State_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUState(); \
	friend struct Z_Construct_UClass_UState_Statics; \
public: \
	DECLARE_CLASS(UState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(UState)


#define FSMTest_Source_FSMTest_SM_State_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UState(UState&&); \
	NO_API UState(const UState&); \
public:


#define FSMTest_Source_FSMTest_SM_State_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UState(UState&&); \
	NO_API UState(const UState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UState)


#define FSMTest_Source_FSMTest_SM_State_h_8_PRIVATE_PROPERTY_OFFSET
#define FSMTest_Source_FSMTest_SM_State_h_5_PROLOG \
	FSMTest_Source_FSMTest_SM_State_h_8_EVENT_PARMS


#define FSMTest_Source_FSMTest_SM_State_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_SM_State_h_8_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_SM_State_h_8_SPARSE_DATA \
	FSMTest_Source_FSMTest_SM_State_h_8_RPC_WRAPPERS \
	FSMTest_Source_FSMTest_SM_State_h_8_CALLBACK_WRAPPERS \
	FSMTest_Source_FSMTest_SM_State_h_8_INCLASS \
	FSMTest_Source_FSMTest_SM_State_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSMTest_Source_FSMTest_SM_State_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_SM_State_h_8_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_SM_State_h_8_SPARSE_DATA \
	FSMTest_Source_FSMTest_SM_State_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_SM_State_h_8_CALLBACK_WRAPPERS \
	FSMTest_Source_FSMTest_SM_State_h_8_INCLASS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_SM_State_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSMTEST_API UClass* StaticClass<class UState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSMTest_Source_FSMTest_SM_State_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
