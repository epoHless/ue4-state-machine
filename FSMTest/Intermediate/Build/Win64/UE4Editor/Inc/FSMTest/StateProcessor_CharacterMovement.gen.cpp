// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSMTest/Character/StateProcessor_CharacterMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateProcessor_CharacterMovement() {}
// Cross Module References
	FSMTEST_API UClass* Z_Construct_UClass_UStateProcessor_CharacterMovement_NoRegister();
	FSMTEST_API UClass* Z_Construct_UClass_UStateProcessor_CharacterMovement();
	FSMTEST_API UClass* Z_Construct_UClass_UAStateProcessor();
	UPackage* Z_Construct_UPackage__Script_FSMTest();
	FSMTEST_API UClass* Z_Construct_UClass_UState_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UStateProcessor_CharacterMovement::execGetCrouchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UState**)Z_Param__Result=P_THIS->GetCrouchState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateProcessor_CharacterMovement::execGetJumpState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UState**)Z_Param__Result=P_THIS->GetJumpState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateProcessor_CharacterMovement::execGetMoveState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UState**)Z_Param__Result=P_THIS->GetMoveState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateProcessor_CharacterMovement::execGetIdleState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UState**)Z_Param__Result=P_THIS->GetIdleState();
		P_NATIVE_END;
	}
	void UStateProcessor_CharacterMovement::StaticRegisterNativesUStateProcessor_CharacterMovement()
	{
		UClass* Class = UStateProcessor_CharacterMovement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCrouchState", &UStateProcessor_CharacterMovement::execGetCrouchState },
			{ "GetIdleState", &UStateProcessor_CharacterMovement::execGetIdleState },
			{ "GetJumpState", &UStateProcessor_CharacterMovement::execGetJumpState },
			{ "GetMoveState", &UStateProcessor_CharacterMovement::execGetMoveState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState_Statics
	{
		struct StateProcessor_CharacterMovement_eventGetCrouchState_Parms
		{
			UState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateProcessor_CharacterMovement_eventGetCrouchState_Parms, ReturnValue), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateProcessor_CharacterMovement, nullptr, "GetCrouchState", nullptr, nullptr, sizeof(StateProcessor_CharacterMovement_eventGetCrouchState_Parms), Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState_Statics
	{
		struct StateProcessor_CharacterMovement_eventGetIdleState_Parms
		{
			UState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateProcessor_CharacterMovement_eventGetIdleState_Parms, ReturnValue), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateProcessor_CharacterMovement, nullptr, "GetIdleState", nullptr, nullptr, sizeof(StateProcessor_CharacterMovement_eventGetIdleState_Parms), Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState_Statics
	{
		struct StateProcessor_CharacterMovement_eventGetJumpState_Parms
		{
			UState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateProcessor_CharacterMovement_eventGetJumpState_Parms, ReturnValue), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateProcessor_CharacterMovement, nullptr, "GetJumpState", nullptr, nullptr, sizeof(StateProcessor_CharacterMovement_eventGetJumpState_Parms), Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState_Statics
	{
		struct StateProcessor_CharacterMovement_eventGetMoveState_Parms
		{
			UState* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateProcessor_CharacterMovement_eventGetMoveState_Parms, ReturnValue), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateProcessor_CharacterMovement, nullptr, "GetMoveState", nullptr, nullptr, sizeof(StateProcessor_CharacterMovement_eventGetMoveState_Parms), Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStateProcessor_CharacterMovement_NoRegister()
	{
		return UStateProcessor_CharacterMovement::StaticClass();
	}
	struct Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Move_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Move;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Jump_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Jump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAStateProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_FSMTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetCrouchState, "GetCrouchState" }, // 2722689279
		{ &Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetIdleState, "GetIdleState" }, // 745454861
		{ &Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetJumpState, "GetJumpState" }, // 996573654
		{ &Z_Construct_UFunction_UStateProcessor_CharacterMovement_GetMoveState, "GetMoveState" }, // 2593865767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Character/StateProcessor_CharacterMovement.h" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Idle_MetaData[] = {
		{ "Category", "StateProcessor_CharacterMovement" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Idle = { "Idle", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateProcessor_CharacterMovement, Idle), Z_Construct_UClass_UState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Move_MetaData[] = {
		{ "Category", "StateProcessor_CharacterMovement" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Move = { "Move", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateProcessor_CharacterMovement, Move), Z_Construct_UClass_UState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Move_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Move_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Jump_MetaData[] = {
		{ "Category", "StateProcessor_CharacterMovement" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Jump = { "Jump", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateProcessor_CharacterMovement, Jump), Z_Construct_UClass_UState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Jump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Jump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_IdleState_MetaData[] = {
		{ "Category", "StateProcessor_CharacterMovement" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_IdleState = { "IdleState", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateProcessor_CharacterMovement, IdleState), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_IdleState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_IdleState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_MoveState_MetaData[] = {
		{ "Category", "StateProcessor_CharacterMovement" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_MoveState = { "MoveState", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateProcessor_CharacterMovement, MoveState), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_MoveState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_MoveState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_JumpState_MetaData[] = {
		{ "Category", "StateProcessor_CharacterMovement" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_JumpState = { "JumpState", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateProcessor_CharacterMovement, JumpState), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_JumpState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_JumpState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_CrouchState_MetaData[] = {
		{ "Category", "StateProcessor_CharacterMovement" },
		{ "ModuleRelativePath", "Character/StateProcessor_CharacterMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_CrouchState = { "CrouchState", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateProcessor_CharacterMovement, CrouchState), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_CrouchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_CrouchState_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_Jump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_IdleState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_MoveState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_JumpState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::NewProp_CrouchState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateProcessor_CharacterMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::ClassParams = {
		&UStateProcessor_CharacterMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateProcessor_CharacterMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStateProcessor_CharacterMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStateProcessor_CharacterMovement, 2365325627);
	template<> FSMTEST_API UClass* StaticClass<UStateProcessor_CharacterMovement>()
	{
		return UStateProcessor_CharacterMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStateProcessor_CharacterMovement(Z_Construct_UClass_UStateProcessor_CharacterMovement, &UStateProcessor_CharacterMovement::StaticClass, TEXT("/Script/FSMTest"), TEXT("UStateProcessor_CharacterMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateProcessor_CharacterMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
