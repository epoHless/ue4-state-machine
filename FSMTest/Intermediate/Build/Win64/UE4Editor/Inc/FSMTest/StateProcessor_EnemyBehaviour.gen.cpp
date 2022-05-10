// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSMTest/Enemy/StateProcessor_EnemyBehaviour.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateProcessor_EnemyBehaviour() {}
// Cross Module References
	FSMTEST_API UClass* Z_Construct_UClass_UStateProcessor_EnemyBehaviour_NoRegister();
	FSMTEST_API UClass* Z_Construct_UClass_UStateProcessor_EnemyBehaviour();
	FSMTEST_API UClass* Z_Construct_UClass_UAStateProcessor();
	UPackage* Z_Construct_UPackage__Script_FSMTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FSMTEST_API UClass* Z_Construct_UClass_UState_NoRegister();
	FSMTEST_API UClass* Z_Construct_UClass_UEnemyState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStateProcessor_EnemyBehaviour::execGetDisengageState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UState> *)Z_Param__Result=P_THIS->GetDisengageState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateProcessor_EnemyBehaviour::execGetEngageState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UState> *)Z_Param__Result=P_THIS->GetEngageState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStateProcessor_EnemyBehaviour::execGetPatrolState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UState> *)Z_Param__Result=P_THIS->GetPatrolState();
		P_NATIVE_END;
	}
	void UStateProcessor_EnemyBehaviour::StaticRegisterNativesUStateProcessor_EnemyBehaviour()
	{
		UClass* Class = UStateProcessor_EnemyBehaviour::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDisengageState", &UStateProcessor_EnemyBehaviour::execGetDisengageState },
			{ "GetEngageState", &UStateProcessor_EnemyBehaviour::execGetEngageState },
			{ "GetPatrolState", &UStateProcessor_EnemyBehaviour::execGetPatrolState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState_Statics
	{
		struct StateProcessor_EnemyBehaviour_eventGetDisengageState_Parms
		{
			TSubclassOf<UState>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateProcessor_EnemyBehaviour_eventGetDisengageState_Parms, ReturnValue), Z_Construct_UClass_UState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Enemy/StateProcessor_EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateProcessor_EnemyBehaviour, nullptr, "GetDisengageState", nullptr, nullptr, sizeof(StateProcessor_EnemyBehaviour_eventGetDisengageState_Parms), Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState_Statics
	{
		struct StateProcessor_EnemyBehaviour_eventGetEngageState_Parms
		{
			TSubclassOf<UState>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateProcessor_EnemyBehaviour_eventGetEngageState_Parms, ReturnValue), Z_Construct_UClass_UState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Enemy/StateProcessor_EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateProcessor_EnemyBehaviour, nullptr, "GetEngageState", nullptr, nullptr, sizeof(StateProcessor_EnemyBehaviour_eventGetEngageState_Parms), Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState_Statics
	{
		struct StateProcessor_EnemyBehaviour_eventGetPatrolState_Parms
		{
			TSubclassOf<UState>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StateProcessor_EnemyBehaviour_eventGetPatrolState_Parms, ReturnValue), Z_Construct_UClass_UState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "Enemy/StateProcessor_EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStateProcessor_EnemyBehaviour, nullptr, "GetPatrolState", nullptr, nullptr, sizeof(StateProcessor_EnemyBehaviour_eventGetPatrolState_Parms), Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStateProcessor_EnemyBehaviour_NoRegister()
	{
		return UStateProcessor_EnemyBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Patrol_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Patrol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Engage_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Engage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disengage_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Disengage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAStateProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_FSMTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetDisengageState, "GetDisengageState" }, // 943265589
		{ &Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetEngageState, "GetEngageState" }, // 494028798
		{ &Z_Construct_UFunction_UStateProcessor_EnemyBehaviour_GetPatrolState, "GetPatrolState" }, // 2423405660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Enemy State Processor" },
		{ "IncludePath", "Enemy/StateProcessor_EnemyBehaviour.h" },
		{ "ModuleRelativePath", "Enemy/StateProcessor_EnemyBehaviour.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Patrol_MetaData[] = {
		{ "Category", "StateProcessor_EnemyBehaviour" },
		{ "ModuleRelativePath", "Enemy/StateProcessor_EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Patrol = { "Patrol", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateProcessor_EnemyBehaviour, Patrol), Z_Construct_UClass_UEnemyState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Patrol_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Patrol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Engage_MetaData[] = {
		{ "Category", "StateProcessor_EnemyBehaviour" },
		{ "ModuleRelativePath", "Enemy/StateProcessor_EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Engage = { "Engage", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateProcessor_EnemyBehaviour, Engage), Z_Construct_UClass_UEnemyState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Engage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Engage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Disengage_MetaData[] = {
		{ "Category", "StateProcessor_EnemyBehaviour" },
		{ "ModuleRelativePath", "Enemy/StateProcessor_EnemyBehaviour.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Disengage = { "Disengage", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateProcessor_EnemyBehaviour, Disengage), Z_Construct_UClass_UEnemyState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Disengage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Disengage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Patrol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Engage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::NewProp_Disengage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateProcessor_EnemyBehaviour>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::ClassParams = {
		&UStateProcessor_EnemyBehaviour::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateProcessor_EnemyBehaviour()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStateProcessor_EnemyBehaviour_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStateProcessor_EnemyBehaviour, 1498111265);
	template<> FSMTEST_API UClass* StaticClass<UStateProcessor_EnemyBehaviour>()
	{
		return UStateProcessor_EnemyBehaviour::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStateProcessor_EnemyBehaviour(Z_Construct_UClass_UStateProcessor_EnemyBehaviour, &UStateProcessor_EnemyBehaviour::StaticClass, TEXT("/Script/FSMTest"), TEXT("UStateProcessor_EnemyBehaviour"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateProcessor_EnemyBehaviour);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
