// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FSMTest/Waypoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWaypoint() {}
// Cross Module References
	FSMTEST_API UClass* Z_Construct_UClass_AWaypoint_NoRegister();
	FSMTEST_API UClass* Z_Construct_UClass_AWaypoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FSMTest();
// End Cross Module References
	DEFINE_FUNCTION(AWaypoint::execGetRandomWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWaypoint**)Z_Param__Result=P_THIS->GetRandomWaypoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaypoint::execGetPreviousWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWaypoint**)Z_Param__Result=P_THIS->GetPreviousWaypoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AWaypoint::execGetNextWaypoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWaypoint**)Z_Param__Result=P_THIS->GetNextWaypoint();
		P_NATIVE_END;
	}
	void AWaypoint::StaticRegisterNativesAWaypoint()
	{
		UClass* Class = AWaypoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNextWaypoint", &AWaypoint::execGetNextWaypoint },
			{ "GetPreviousWaypoint", &AWaypoint::execGetPreviousWaypoint },
			{ "GetRandomWaypoint", &AWaypoint::execGetRandomWaypoint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWaypoint_GetNextWaypoint_Statics
	{
		struct Waypoint_eventGetNextWaypoint_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaypoint_GetNextWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Waypoint_eventGetNextWaypoint_Parms, ReturnValue), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaypoint_GetNextWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaypoint_GetNextWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaypoint_GetNextWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Waypoint" },
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaypoint_GetNextWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaypoint, nullptr, "GetNextWaypoint", nullptr, nullptr, sizeof(Waypoint_eventGetNextWaypoint_Parms), Z_Construct_UFunction_AWaypoint_GetNextWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaypoint_GetNextWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaypoint_GetNextWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaypoint_GetNextWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaypoint_GetNextWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWaypoint_GetNextWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint_Statics
	{
		struct Waypoint_eventGetPreviousWaypoint_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Waypoint_eventGetPreviousWaypoint_Parms, ReturnValue), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Waypoint" },
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaypoint, nullptr, "GetPreviousWaypoint", nullptr, nullptr, sizeof(Waypoint_eventGetPreviousWaypoint_Parms), Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWaypoint_GetRandomWaypoint_Statics
	{
		struct Waypoint_eventGetRandomWaypoint_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWaypoint_GetRandomWaypoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Waypoint_eventGetRandomWaypoint_Parms, ReturnValue), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWaypoint_GetRandomWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWaypoint_GetRandomWaypoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWaypoint_GetRandomWaypoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Waypoint" },
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWaypoint_GetRandomWaypoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWaypoint, nullptr, "GetRandomWaypoint", nullptr, nullptr, sizeof(Waypoint_eventGetRandomWaypoint_Parms), Z_Construct_UFunction_AWaypoint_GetRandomWaypoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaypoint_GetRandomWaypoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWaypoint_GetRandomWaypoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWaypoint_GetRandomWaypoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWaypoint_GetRandomWaypoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWaypoint_GetRandomWaypoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWaypoint_NoRegister()
	{
		return AWaypoint::StaticClass();
	}
	struct Z_Construct_UClass_AWaypoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextWaypoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousWaypoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviousWaypoint;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Waypoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Waypoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Waypoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWaypoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FSMTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWaypoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWaypoint_GetNextWaypoint, "GetNextWaypoint" }, // 432205773
		{ &Z_Construct_UFunction_AWaypoint_GetPreviousWaypoint, "GetPreviousWaypoint" }, // 3086375749
		{ &Z_Construct_UFunction_AWaypoint_GetRandomWaypoint, "GetRandomWaypoint" }, // 1367794675
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaypoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Waypoint.h" },
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaypoint_Statics::NewProp_NextWaypoint_MetaData[] = {
		{ "Category", "Waypoint" },
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaypoint_Statics::NewProp_NextWaypoint = { "NextWaypoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaypoint, NextWaypoint), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaypoint_Statics::NewProp_NextWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaypoint_Statics::NewProp_NextWaypoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaypoint_Statics::NewProp_PreviousWaypoint_MetaData[] = {
		{ "Category", "Waypoint" },
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaypoint_Statics::NewProp_PreviousWaypoint = { "PreviousWaypoint", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaypoint, PreviousWaypoint), Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWaypoint_Statics::NewProp_PreviousWaypoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaypoint_Statics::NewProp_PreviousWaypoint_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWaypoint_Statics::NewProp_Waypoints_Inner = { "Waypoints", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AWaypoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWaypoint_Statics::NewProp_Waypoints_MetaData[] = {
		{ "Category", "Waypoint" },
		{ "ModuleRelativePath", "Waypoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWaypoint_Statics::NewProp_Waypoints = { "Waypoints", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWaypoint, Waypoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWaypoint_Statics::NewProp_Waypoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWaypoint_Statics::NewProp_Waypoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWaypoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaypoint_Statics::NewProp_NextWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaypoint_Statics::NewProp_PreviousWaypoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaypoint_Statics::NewProp_Waypoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWaypoint_Statics::NewProp_Waypoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWaypoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWaypoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWaypoint_Statics::ClassParams = {
		&AWaypoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWaypoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWaypoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWaypoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWaypoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWaypoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWaypoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWaypoint, 2811534242);
	template<> FSMTEST_API UClass* StaticClass<AWaypoint>()
	{
		return AWaypoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWaypoint(Z_Construct_UClass_AWaypoint, &AWaypoint::StaticClass, TEXT("/Script/FSMTest"), TEXT("AWaypoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWaypoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
