// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UState;
#ifdef FSMTEST_StateProcessor_EnemyBehaviour_generated_h
#error "StateProcessor_EnemyBehaviour.generated.h already included, missing '#pragma once' in StateProcessor_EnemyBehaviour.h"
#endif
#define FSMTEST_StateProcessor_EnemyBehaviour_generated_h

#define FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_SPARSE_DATA
#define FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDisengageState); \
	DECLARE_FUNCTION(execGetEngageState); \
	DECLARE_FUNCTION(execGetPatrolState);


#define FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDisengageState); \
	DECLARE_FUNCTION(execGetEngageState); \
	DECLARE_FUNCTION(execGetPatrolState);


#define FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStateProcessor_EnemyBehaviour(); \
	friend struct Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics; \
public: \
	DECLARE_CLASS(UStateProcessor_EnemyBehaviour, UAStateProcessor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(UStateProcessor_EnemyBehaviour)


#define FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUStateProcessor_EnemyBehaviour(); \
	friend struct Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics; \
public: \
	DECLARE_CLASS(UStateProcessor_EnemyBehaviour, UAStateProcessor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(UStateProcessor_EnemyBehaviour)


#define FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStateProcessor_EnemyBehaviour(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStateProcessor_EnemyBehaviour) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateProcessor_EnemyBehaviour); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateProcessor_EnemyBehaviour); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateProcessor_EnemyBehaviour(UStateProcessor_EnemyBehaviour&&); \
	NO_API UStateProcessor_EnemyBehaviour(const UStateProcessor_EnemyBehaviour&); \
public:


#define FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStateProcessor_EnemyBehaviour(UStateProcessor_EnemyBehaviour&&); \
	NO_API UStateProcessor_EnemyBehaviour(const UStateProcessor_EnemyBehaviour&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStateProcessor_EnemyBehaviour); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStateProcessor_EnemyBehaviour); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStateProcessor_EnemyBehaviour)


#define FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Patrol() { return STRUCT_OFFSET(UStateProcessor_EnemyBehaviour, Patrol); } \
	FORCEINLINE static uint32 __PPO__Engage() { return STRUCT_OFFSET(UStateProcessor_EnemyBehaviour, Engage); } \
	FORCEINLINE static uint32 __PPO__Disengage() { return STRUCT_OFFSET(UStateProcessor_EnemyBehaviour, Disengage); }


#define FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_11_PROLOG
#define FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_SPARSE_DATA \
	FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_RPC_WRAPPERS \
	FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_INCLASS \
	FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_SPARSE_DATA \
	FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_INCLASS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSMTEST_API UClass* StaticClass<class UStateProcessor_EnemyBehaviour>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSMTest_Source_FSMTest_Enemy_StateProcessor_EnemyBehaviour_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
