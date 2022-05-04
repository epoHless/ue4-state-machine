// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UState;
#ifdef FSMTEST_StateProcessor_CharacterMovement_generated_h
#error "StateProcessor_CharacterMovement.generated.h already included, missing '#pragma once' in StateProcessor_CharacterMovement.h"
#endif
#define FSMTEST_StateProcessor_CharacterMovement_generated_h

#define FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_SPARSE_DATA
#define FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetJumpState); \
	DECLARE_FUNCTION(execGetMoveState); \
	DECLARE_FUNCTION(execGetIdleState);


#define FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetJumpState); \
	DECLARE_FUNCTION(execGetMoveState); \
	DECLARE_FUNCTION(execGetIdleState);


#define FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateProcessor_CharacterMovement(); \
	friend struct Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics; \
public: \
	DECLARE_CLASS(UStateProcessor_CharacterMovement, UAStateProcessor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(UStateProcessor_CharacterMovement)


#define FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUStateProcessor_CharacterMovement(); \
	friend struct Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics; \
public: \
	DECLARE_CLASS(UStateProcessor_CharacterMovement, UAStateProcessor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(UStateProcessor_CharacterMovement)


#define FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateProcessor_CharacterMovement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateProcessor_CharacterMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateProcessor_CharacterMovement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateProcessor_CharacterMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateProcessor_CharacterMovement(UStateProcessor_CharacterMovement&&); \
	NO_API UStateProcessor_CharacterMovement(const UStateProcessor_CharacterMovement&); \
public:


#define FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateProcessor_CharacterMovement(UStateProcessor_CharacterMovement&&); \
	NO_API UStateProcessor_CharacterMovement(const UStateProcessor_CharacterMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateProcessor_CharacterMovement); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateProcessor_CharacterMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateProcessor_CharacterMovement)


#define FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Idle() { return STRUCT_OFFSET(UStateProcessor_CharacterMovement, Idle); } \
	FORCEINLINE static uint32 __PPO__Move() { return STRUCT_OFFSET(UStateProcessor_CharacterMovement, Move); } \
	FORCEINLINE static uint32 __PPO__Jump() { return STRUCT_OFFSET(UStateProcessor_CharacterMovement, Jump); }


#define FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_10_PROLOG
#define FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_SPARSE_DATA \
	FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_RPC_WRAPPERS \
	FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_INCLASS \
	FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_SPARSE_DATA \
	FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_INCLASS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSMTEST_API UClass* StaticClass<class UStateProcessor_CharacterMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSMTest_Source_FSMTest_Character_StateProcessor_CharacterMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
