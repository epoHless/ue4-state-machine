// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSMTest/TravelerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTravelerComponent() {}
// Cross Module References
	FSMTEST_API UClass* Z_Construct_UClass_UTravelerComponent_NoRegister();
	FSMTEST_API UClass* Z_Construct_UClass_UTravelerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FSMTest();
	FSMTEST_API UClass* Z_Construct_UClass_AWaypoint_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTravelerComponent::execSetCurrentWaypoint)
	{
		P_GET_OBJECT(AWaypoint,Z_Param_NewWaypoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWaypoint**)Z_Param__Result=P_THIS->SetCurrentWaypoint(Z_Param_NewWaypoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTravelerComponent::execSetInitialWaypoint)
	{
		P_GET_OBJECT(AWaypoint,Z_Param_NewWaypoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitialWaypoint(Z_Param_NewWaypoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTravelerComponent::execGetCurrentWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWaypoint**)Z_Param__Result=P_THIS->GetCurrentWaypoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTravelerComponent::execGetInitialWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWaypoint**)Z_Param__Result=P_THIS->GetInitialWaypoint();
		P_NATIVE_END;
	}
	void UTravelerComponent::StaticRegisterNativesUTravelerComponent()
	{
		UClass* Class = UTravelerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentWaypoint", &UTravelerComponent::execGetCurrentWaypoint },
			{ "GetInitialWaypoint", &UTravelerComponent::execGetInitialWaypoint },
			{ "SetCurrentWaypoint", &UTravelerComponent::execSetCurrentWaypoint },
			{ "SetInitialWaypoint", &UTravelerComponent::execSetInitialWaypoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint_Statics
	{
		struct TravelerComponent_eventGetCurrentWaypoint_Parms
		{
			AWaypoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TravelerComponent_eventGetCurrentWaypoint_Parms, ReturnValue), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Traveler" },
		{ "ModuleRelativePath", "TravelerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTravelerComponent, nullptr, "GetCurrentWaypoint", nullptr, nullptr, sizeof(TravelerComponent_eventGetCurrentWaypoint_Parms), Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint_Statics
	{
		struct TravelerComponent_eventGetInitialWaypoint_Parms
		{
			AWaypoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TravelerComponent_eventGetInitialWaypoint_Parms, ReturnValue), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Traveler" },
		{ "ModuleRelativePath", "TravelerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTravelerComponent, nullptr, "GetInitialWaypoint", nullptr, nullptr, sizeof(TravelerComponent_eventGetInitialWaypoint_Parms), Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics
	{
		struct TravelerComponent_eventSetCurrentWaypoint_Parms
		{
			AWaypoint* NewWaypoint;
			AWaypoint* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWaypoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::NewProp_NewWaypoint = { "NewWaypoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TravelerComponent_eventSetCurrentWaypoint_Parms, NewWaypoint), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TravelerComponent_eventSetCurrentWaypoint_Parms, ReturnValue), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::NewProp_NewWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Traveler" },
		{ "ModuleRelativePath", "TravelerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTravelerComponent, nullptr, "SetCurrentWaypoint", nullptr, nullptr, sizeof(TravelerComponent_eventSetCurrentWaypoint_Parms), Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint_Statics
	{
		struct TravelerComponent_eventSetInitialWaypoint_Parms
		{
			AWaypoint* NewWaypoint;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewWaypoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint_Statics::NewProp_NewWaypoint = { "NewWaypoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TravelerComponent_eventSetInitialWaypoint_Parms, NewWaypoint), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint_Statics::NewProp_NewWaypoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Traveler" },
		{ "ModuleRelativePath", "TravelerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTravelerComponent, nullptr, "SetInitialWaypoint", nullptr, nullptr, sizeof(TravelerComponent_eventSetInitialWaypoint_Parms), Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTravelerComponent_NoRegister()
	{
		return UTravelerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTravelerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InitialPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWaypoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTravelerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FSMTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTravelerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTravelerComponent_GetCurrentWaypoint, "GetCurrentWaypoint" }, // 2657388497
		{ &Z_Construct_UFunction_UTravelerComponent_GetInitialWaypoint, "GetInitialWaypoint" }, // 2340146297
		{ &Z_Construct_UFunction_UTravelerComponent_SetCurrentWaypoint, "SetCurrentWaypoint" }, // 1945024217
		{ &Z_Construct_UFunction_UTravelerComponent_SetInitialWaypoint, "SetInitialWaypoint" }, // 2157753389
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTravelerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TravelerComponent.h" },
		{ "ModuleRelativePath", "TravelerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTravelerComponent_Statics::NewProp_InitialPosition_MetaData[] = {
		{ "Category", "TravelerComponent" },
		{ "ModuleRelativePath", "TravelerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTravelerComponent_Statics::NewProp_InitialPosition = { "InitialPosition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTravelerComponent, InitialPosition), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTravelerComponent_Statics::NewProp_InitialPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTravelerComponent_Statics::NewProp_InitialPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTravelerComponent_Statics::NewProp_CurrentWaypoint_MetaData[] = {
		{ "Category", "TravelerComponent" },
		{ "ModuleRelativePath", "TravelerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTravelerComponent_Statics::NewProp_CurrentWaypoint = { "CurrentWaypoint", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTravelerComponent, CurrentWaypoint), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTravelerComponent_Statics::NewProp_CurrentWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTravelerComponent_Statics::NewProp_CurrentWaypoint_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTravelerComponent_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTravelerComponent_Statics::NewProp_Waypoints_MetaData[] = {
		{ "ModuleRelativePath", "TravelerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTravelerComponent_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTravelerComponent, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTravelerComponent_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTravelerComponent_Statics::NewProp_Waypoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTravelerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTravelerComponent_Statics::NewProp_InitialPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTravelerComponent_Statics::NewProp_CurrentWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTravelerComponent_Statics::NewProp_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTravelerComponent_Statics::NewProp_Waypoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTravelerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTravelerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTravelerComponent_Statics::ClassParams = {
		&UTravelerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTravelerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTravelerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTravelerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTravelerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTravelerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTravelerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTravelerComponent, 631346830);
	template<> FSMTEST_API UClass* StaticClass<UTravelerComponent>()
	{
		return UTravelerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTravelerComponent(Z_Construct_UClass_UTravelerComponent, &UTravelerComponent::StaticClass, TEXT("/Script/FSMTest"), TEXT("UTravelerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTravelerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
