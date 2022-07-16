// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWaypoint;
#ifdef FSMTEST_TravelerComponent_generated_h
#error "TravelerComponent.generated.h already included, missing '#pragma once' in TravelerComponent.h"
#endif
#define FSMTEST_TravelerComponent_generated_h

#define FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_SPARSE_DATA
#define FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurrentWaypoint); \
	DECLARE_FUNCTION(execSetInitialWaypoint); \
	DECLARE_FUNCTION(execGetCurrentWaypoint); \
	DECLARE_FUNCTION(execGetInitialWaypoint);


#define FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurrentWaypoint); \
	DECLARE_FUNCTION(execSetInitialWaypoint); \
	DECLARE_FUNCTION(execGetCurrentWaypoint); \
	DECLARE_FUNCTION(execGetInitialWaypoint);


#define FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTravelerComponent(); \
	friend struct Z_Construct_UClass_UTravelerComponent_Statics; \
public: \
	DECLARE_CLASS(UTravelerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(UTravelerComponent)


#define FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUTravelerComponent(); \
	friend struct Z_Construct_UClass_UTravelerComponent_Statics; \
public: \
	DECLARE_CLASS(UTravelerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(UTravelerComponent)


#define FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTravelerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTravelerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTravelerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTravelerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTravelerComponent(UTravelerComponent&&); \
	NO_API UTravelerComponent(const UTravelerComponent&); \
public:


#define FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTravelerComponent(UTravelerComponent&&); \
	NO_API UTravelerComponent(const UTravelerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTravelerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTravelerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTravelerComponent)


#define FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Waypoints() { return STRUCT_OFFSET(UTravelerComponent, Waypoints); }


#define FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_8_PROLOG
#define FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_SPARSE_DATA \
	FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_RPC_WRAPPERS \
	FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_INCLASS \
	FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_SPARSE_DATA \
	FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_INCLASS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSMTEST_API UClass* StaticClass<class UTravelerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSMTest_Source_FSMTest_Waypoints_TravelerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
