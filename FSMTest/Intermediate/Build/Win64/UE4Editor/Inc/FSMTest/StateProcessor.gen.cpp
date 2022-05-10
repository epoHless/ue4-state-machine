// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSMTest/SM/StateProcessor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateProcessor() {}
// Cross Module References
	FSMTEST_API UClass* Z_Construct_UClass_UAStateProcessor_NoRegister();
	FSMTEST_API UClass* Z_Construct_UClass_UAStateProcessor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FSMTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FSMTEST_API UClass* Z_Construct_UClass_UState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAStateProcessor::execGetStartupState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UState**)Z_Param__Result=P_THIS->GetStartupState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAStateProcessor::execSetController)
	{
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_NewController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetController(Z_Param_NewController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAStateProcessor::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UState**)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAStateProcessor::execChangeState)
	{
		P_GET_OBJECT(UClass,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeState(Z_Param_NewState);
		P_NATIVE_END;
	}
	static FName NAME_UAStateProcessor_GetStartupState = FName(TEXT("GetStartupState"));
	UState* UAStateProcessor::GetStartupState()
	{
		AStateProcessor_eventGetStartupState_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAStateProcessor_GetStartupState),&Parms);
		return Parms.ReturnValue;
	}
	void UAStateProcessor::StaticRegisterNativesUAStateProcessor()
	{
		UClass* Class = UAStateProcessor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeState", &UAStateProcessor::execChangeState },
			{ "GetCurrentState", &UAStateProcessor::execGetCurrentState },
			{ "GetStartupState", &UAStateProcessor::execGetStartupState },
			{ "SetController", &UAStateProcessor::execSetController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAStateProcessor_ChangeState_Statics
	{
		struct AStateProcessor_eventChangeState_Parms
		{
			TSubclassOf<UState>  NewState;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAStateProcessor_ChangeState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStateProcessor_eventChangeState_Parms, NewState), Z_Construct_UClass_UState_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAStateProcessor_ChangeState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStateProcessor_ChangeState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAStateProcessor_ChangeState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SM/StateProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAStateProcessor_ChangeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAStateProcessor, nullptr, "ChangeState", nullptr, nullptr, sizeof(AStateProcessor_eventChangeState_Parms), Z_Construct_UFunction_UAStateProcessor_ChangeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAStateProcessor_ChangeState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAStateProcessor_ChangeState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAStateProcessor_ChangeState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAStateProcessor_ChangeState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAStateProcessor_ChangeState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAStateProcessor_GetCurrentState_Statics
	{
		struct AStateProcessor_eventGetCurrentState_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAStateProcessor_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStateProcessor_eventGetCurrentState_Parms, ReturnValue), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAStateProcessor_GetCurrentState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStateProcessor_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAStateProcessor_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "SM/StateProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAStateProcessor_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAStateProcessor, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(AStateProcessor_eventGetCurrentState_Parms), Z_Construct_UFunction_UAStateProcessor_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAStateProcessor_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAStateProcessor_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAStateProcessor_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAStateProcessor_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAStateProcessor_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAStateProcessor_GetStartupState_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAStateProcessor_GetStartupState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStateProcessor_eventGetStartupState_Parms, ReturnValue), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAStateProcessor_GetStartupState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStateProcessor_GetStartupState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAStateProcessor_GetStartupState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "SM/StateProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAStateProcessor_GetStartupState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAStateProcessor, nullptr, "GetStartupState", nullptr, nullptr, sizeof(AStateProcessor_eventGetStartupState_Parms), Z_Construct_UFunction_UAStateProcessor_GetStartupState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAStateProcessor_GetStartupState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAStateProcessor_GetStartupState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAStateProcessor_GetStartupState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAStateProcessor_GetStartupState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAStateProcessor_GetStartupState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAStateProcessor_SetController_Statics
	{
		struct AStateProcessor_eventSetController_Parms
		{
			UCharacterMovementComponent* NewController;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAStateProcessor_SetController_Statics::NewProp_NewController_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAStateProcessor_SetController_Statics::NewProp_NewController = { "NewController", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStateProcessor_eventSetController_Parms, NewController), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAStateProcessor_SetController_Statics::NewProp_NewController_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAStateProcessor_SetController_Statics::NewProp_NewController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAStateProcessor_SetController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAStateProcessor_SetController_Statics::NewProp_NewController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAStateProcessor_SetController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Processor" },
		{ "ModuleRelativePath", "SM/StateProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAStateProcessor_SetController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAStateProcessor, nullptr, "SetController", nullptr, nullptr, sizeof(AStateProcessor_eventSetController_Parms), Z_Construct_UFunction_UAStateProcessor_SetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAStateProcessor_SetController_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAStateProcessor_SetController_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAStateProcessor_SetController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAStateProcessor_SetController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAStateProcessor_SetController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAStateProcessor_NoRegister()
	{
		return UAStateProcessor::StaticClass();
	}
	struct Z_Construct_UClass_UAStateProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Controller_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAStateProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FSMTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAStateProcessor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAStateProcessor_ChangeState, "ChangeState" }, // 2821942821
		{ &Z_Construct_UFunction_UAStateProcessor_GetCurrentState, "GetCurrentState" }, // 2105180795
		{ &Z_Construct_UFunction_UAStateProcessor_GetStartupState, "GetStartupState" }, // 3768065835
		{ &Z_Construct_UFunction_UAStateProcessor_SetController, "SetController" }, // 4138755215
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAStateProcessor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SM/StateProcessor.h" },
		{ "ModuleRelativePath", "SM/StateProcessor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAStateProcessor_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "AStateProcessor" },
		{ "ModuleRelativePath", "SM/StateProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAStateProcessor_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAStateProcessor, CurrentState), Z_Construct_UClass_UState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAStateProcessor_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAStateProcessor_Statics::NewProp_CurrentState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAStateProcessor_Statics::NewProp_Controller_MetaData[] = {
		{ "Category", "AStateProcessor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SM/StateProcessor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAStateProcessor_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAStateProcessor, Controller), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAStateProcessor_Statics::NewProp_Controller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAStateProcessor_Statics::NewProp_Controller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAStateProcessor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAStateProcessor_Statics::NewProp_CurrentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAStateProcessor_Statics::NewProp_Controller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAStateProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAStateProcessor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAStateProcessor_Statics::ClassParams = {
		&UAStateProcessor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAStateProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAStateProcessor_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UAStateProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAStateProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAStateProcessor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAStateProcessor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAStateProcessor, 36364946);
	template<> FSMTEST_API UClass* StaticClass<UAStateProcessor>()
	{
		return UAStateProcessor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAStateProcessor(Z_Construct_UClass_UAStateProcessor, &UAStateProcessor::StaticClass, TEXT("/Script/FSMTest"), TEXT("UAStateProcessor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAStateProcessor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
