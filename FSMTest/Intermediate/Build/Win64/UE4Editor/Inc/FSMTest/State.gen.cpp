// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSMTest/SM/State.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeState() {}
// Cross Module References
	FSMTEST_API UClass* Z_Construct_UClass_UState_NoRegister();
	FSMTEST_API UClass* Z_Construct_UClass_UState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FSMTest();
	FSMTEST_API UClass* Z_Construct_UClass_UAStateProcessor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UState::execExit)
	{
		P_GET_OBJECT(UAStateProcessor,Z_Param_Processor);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Exit_Implementation(Z_Param_Processor,Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UState::execUpdate)
	{
		P_GET_OBJECT(UAStateProcessor,Z_Param_Processor);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Update_Implementation(Z_Param_Processor,Z_Param_character);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UState::execStart)
	{
		P_GET_OBJECT(UAStateProcessor,Z_Param_processor);
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_character);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Start_Implementation(Z_Param_processor,Z_Param_character);
		P_NATIVE_END;
	}
	static FName NAME_UState_Exit = FName(TEXT("Exit"));
	void UState::Exit(UAStateProcessor* Processor, UCharacterMovementComponent* character)
	{
		State_eventExit_Parms Parms;
		Parms.Processor=Processor;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_UState_Exit),&Parms);
	}
	static FName NAME_UState_Start = FName(TEXT("Start"));
	void UState::Start(UAStateProcessor* processor, UCharacterMovementComponent* character)
	{
		State_eventStart_Parms Parms;
		Parms.processor=processor;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_UState_Start),&Parms);
	}
	static FName NAME_UState_Update = FName(TEXT("Update"));
	void UState::Update(UAStateProcessor* Processor, UCharacterMovementComponent* character)
	{
		State_eventUpdate_Parms Parms;
		Parms.Processor=Processor;
		Parms.character=character;
		ProcessEvent(FindFunctionChecked(NAME_UState_Update),&Parms);
	}
	void UState::StaticRegisterNativesUState()
	{
		UClass* Class = UState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Exit", &UState::execExit },
			{ "Start", &UState::execStart },
			{ "Update", &UState::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UState_Exit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Processor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Processor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UState_Exit_Statics::NewProp_Processor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UState_Exit_Statics::NewProp_Processor = { "Processor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(State_eventExit_Parms, Processor), Z_Construct_UClass_UAStateProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UState_Exit_Statics::NewProp_Processor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Exit_Statics::NewProp_Processor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UState_Exit_Statics::NewProp_character_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UState_Exit_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(State_eventExit_Parms, character), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UState_Exit_Statics::NewProp_character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Exit_Statics::NewProp_character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UState_Exit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UState_Exit_Statics::NewProp_Processor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UState_Exit_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UState_Exit_Statics::Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SM/State.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UState_Exit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UState, nullptr, "Exit", nullptr, nullptr, sizeof(State_eventExit_Parms), Z_Construct_UFunction_UState_Exit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Exit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UState_Exit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Exit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UState_Exit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UState_Exit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UState_Start_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_processor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_processor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UState_Start_Statics::NewProp_processor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UState_Start_Statics::NewProp_processor = { "processor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(State_eventStart_Parms, processor), Z_Construct_UClass_UAStateProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UState_Start_Statics::NewProp_processor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Start_Statics::NewProp_processor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UState_Start_Statics::NewProp_character_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UState_Start_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(State_eventStart_Parms, character), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UState_Start_Statics::NewProp_character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Start_Statics::NewProp_character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UState_Start_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UState_Start_Statics::NewProp_processor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UState_Start_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UState_Start_Statics::Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SM/State.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UState_Start_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UState, nullptr, "Start", nullptr, nullptr, sizeof(State_eventStart_Parms), Z_Construct_UFunction_UState_Start_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Start_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UState_Start_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Start_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UState_Start()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UState_Start_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UState_Update_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Processor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Processor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UState_Update_Statics::NewProp_Processor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UState_Update_Statics::NewProp_Processor = { "Processor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(State_eventUpdate_Parms, Processor), Z_Construct_UClass_UAStateProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UState_Update_Statics::NewProp_Processor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Update_Statics::NewProp_Processor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UState_Update_Statics::NewProp_character_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UState_Update_Statics::NewProp_character = { "character", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(State_eventUpdate_Parms, character), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UState_Update_Statics::NewProp_character_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Update_Statics::NewProp_character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UState_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UState_Update_Statics::NewProp_Processor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UState_Update_Statics::NewProp_character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UState_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "SM/State.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UState_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UState, nullptr, "Update", nullptr, nullptr, sizeof(State_eventUpdate_Parms), Z_Construct_UFunction_UState_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UState_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UState_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UState_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UState_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UState_NoRegister()
	{
		return UState::StaticClass();
	}
	struct Z_Construct_UClass_UState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FSMTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UState_Exit, "Exit" }, // 1160607264
		{ &Z_Construct_UFunction_UState_Start, "Start" }, // 560739225
		{ &Z_Construct_UFunction_UState_Update, "Update" }, // 1592103707
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SM/State.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "SM/State.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UState_Statics::NewProp_CharacterController_MetaData[] = {
		{ "Category", "State" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SM/State.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UState_Statics::NewProp_CharacterController = { "CharacterController", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UState, CharacterController), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UState_Statics::NewProp_CharacterController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UState_Statics::NewProp_CharacterController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UState_Statics::NewProp_CharacterController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UState_Statics::ClassParams = {
		&UState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UState_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UState, 1321615617);
	template<> FSMTEST_API UClass* StaticClass<UState>()
	{
		return UState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UState(Z_Construct_UClass_UState, &UState::StaticClass, TEXT("/Script/FSMTest"), TEXT("UState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
