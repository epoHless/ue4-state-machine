// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWaypoint;
#ifdef FSMTEST_Waypoint_generated_h
#error "Waypoint.generated.h already included, missing '#pragma once' in Waypoint.h"
#endif
#define FSMTEST_Waypoint_generated_h

#define FSMTest_Source_FSMTest_Waypoint_h_10_SPARSE_DATA
#define FSMTest_Source_FSMTest_Waypoint_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRandomWaypoint); \
	DECLARE_FUNCTION(execGetPreviousWaypoint); \
	DECLARE_FUNCTION(execGetNextWaypoint);


#define FSMTest_Source_FSMTest_Waypoint_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRandomWaypoint); \
	DECLARE_FUNCTION(execGetPreviousWaypoint); \
	DECLARE_FUNCTION(execGetNextWaypoint);


#define FSMTest_Source_FSMTest_Waypoint_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWaypoint(); \
	friend struct Z_Construct_UClass_AWaypoint_Statics; \
public: \
	DECLARE_CLASS(AWaypoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(AWaypoint)


#define FSMTest_Source_FSMTest_Waypoint_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAWaypoint(); \
	friend struct Z_Construct_UClass_AWaypoint_Statics; \
public: \
	DECLARE_CLASS(AWaypoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FSMTest"), NO_API) \
	DECLARE_SERIALIZER(AWaypoint)


#define FSMTest_Source_FSMTest_Waypoint_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWaypoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWaypoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypoint(AWaypoint&&); \
	NO_API AWaypoint(const AWaypoint&); \
public:


#define FSMTest_Source_FSMTest_Waypoint_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWaypoint(AWaypoint&&); \
	NO_API AWaypoint(const AWaypoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWaypoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWaypoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWaypoint)


#define FSMTest_Source_FSMTest_Waypoint_h_10_PRIVATE_PROPERTY_OFFSET
#define FSMTest_Source_FSMTest_Waypoint_h_7_PROLOG
#define FSMTest_Source_FSMTest_Waypoint_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_Waypoint_h_10_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_Waypoint_h_10_SPARSE_DATA \
	FSMTest_Source_FSMTest_Waypoint_h_10_RPC_WRAPPERS \
	FSMTest_Source_FSMTest_Waypoint_h_10_INCLASS \
	FSMTest_Source_FSMTest_Waypoint_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FSMTest_Source_FSMTest_Waypoint_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FSMTest_Source_FSMTest_Waypoint_h_10_PRIVATE_PROPERTY_OFFSET \
	FSMTest_Source_FSMTest_Waypoint_h_10_SPARSE_DATA \
	FSMTest_Source_FSMTest_Waypoint_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_Waypoint_h_10_INCLASS_NO_PURE_DECLS \
	FSMTest_Source_FSMTest_Waypoint_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FSMTEST_API UClass* StaticClass<class AWaypoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FSMTest_Source_FSMTest_Waypoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
