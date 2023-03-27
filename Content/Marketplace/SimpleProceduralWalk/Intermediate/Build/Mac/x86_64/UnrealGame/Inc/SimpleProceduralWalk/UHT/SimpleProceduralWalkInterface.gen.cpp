// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleProceduralWalk/Public/SimpleProceduralWalkInterface.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleProceduralWalkInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SIMPLEPROCEDURALWALK_API UClass* Z_Construct_UClass_USimpleProceduralWalkInterface();
	SIMPLEPROCEDURALWALK_API UClass* Z_Construct_UClass_USimpleProceduralWalkInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleProceduralWalk();
// End Cross Module References
	struct SimpleProceduralWalkInterface_eventOnFootDown_Parms
	{
		int32 LegIndex;
		FName TipBone;
		FVector FootLocation;
		FHitResult Hit;
	};
	struct SimpleProceduralWalkInterface_eventOnFootUp_Parms
	{
		int32 LegIndex;
		FName TipBone;
		FVector FootLocation;
	};
	struct SimpleProceduralWalkInterface_eventOnGroupDown_Parms
	{
		int32 GroupIndex;
		FVector AverageFeetLocation;
		FHitResult FirstFootHit;
	};
	struct SimpleProceduralWalkInterface_eventOnGroupUp_Parms
	{
		int32 GroupIndex;
		FVector AverageFeetLocation;
	};
	struct SimpleProceduralWalkInterface_eventOnPawnLanded_Parms
	{
		FVector Location;
	};
	void ISimpleProceduralWalkInterface::OnFootDown(int32 LegIndex, FName TipBone, FVector FootLocation, FHitResult Hit)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFootDown instead.");
	}
	void ISimpleProceduralWalkInterface::OnFootUp(int32 LegIndex, FName TipBone, FVector FootLocation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFootUp instead.");
	}
	void ISimpleProceduralWalkInterface::OnGroupDown(int32 GroupIndex, FVector AverageFeetLocation, FHitResult FirstFootHit)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGroupDown instead.");
	}
	void ISimpleProceduralWalkInterface::OnGroupUp(int32 GroupIndex, FVector AverageFeetLocation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGroupUp instead.");
	}
	void ISimpleProceduralWalkInterface::OnPawnLanded(FVector Location)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPawnLanded instead.");
	}
	void USimpleProceduralWalkInterface::StaticRegisterNativesUSimpleProceduralWalkInterface()
	{
	}
	struct Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_LegIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TipBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::NewProp_LegIndex = { "LegIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnFootDown_Parms, LegIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::NewProp_TipBone = { "TipBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnFootDown_Parms, TipBone), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::NewProp_FootLocation = { "FootLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnFootDown_Parms, FootLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnFootDown_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::NewProp_LegIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::NewProp_TipBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::NewProp_FootLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Procedural Walk" },
		{ "Comment", "/** Called when a foot steps on the ground */" },
		{ "ModuleRelativePath", "Public/SimpleProceduralWalkInterface.h" },
		{ "ToolTip", "Called when a foot steps on the ground" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleProceduralWalkInterface, nullptr, "OnFootDown", nullptr, nullptr, sizeof(SimpleProceduralWalkInterface_eventOnFootDown_Parms), Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_LegIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_TipBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FootLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::NewProp_LegIndex = { "LegIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnFootUp_Parms, LegIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::NewProp_TipBone = { "TipBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnFootUp_Parms, TipBone), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::NewProp_FootLocation = { "FootLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnFootUp_Parms, FootLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::NewProp_LegIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::NewProp_TipBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::NewProp_FootLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Procedural Walk" },
		{ "Comment", "/** Called when a foot leaves the ground */" },
		{ "ModuleRelativePath", "Public/SimpleProceduralWalkInterface.h" },
		{ "ToolTip", "Called when a foot leaves the ground" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleProceduralWalkInterface, nullptr, "OnFootUp", nullptr, nullptr, sizeof(SimpleProceduralWalkInterface_eventOnFootUp_Parms), Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AverageFeetLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FirstFootHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnGroupDown_Parms, GroupIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::NewProp_AverageFeetLocation = { "AverageFeetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnGroupDown_Parms, AverageFeetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::NewProp_FirstFootHit = { "FirstFootHit", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnGroupDown_Parms, FirstFootHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::NewProp_GroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::NewProp_AverageFeetLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::NewProp_FirstFootHit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Procedural Walk" },
		{ "Comment", "/** Called when a feet group ends a step */" },
		{ "ModuleRelativePath", "Public/SimpleProceduralWalkInterface.h" },
		{ "ToolTip", "Called when a feet group ends a step" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleProceduralWalkInterface, nullptr, "OnGroupDown", nullptr, nullptr, sizeof(SimpleProceduralWalkInterface_eventOnGroupDown_Parms), Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_GroupIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AverageFeetLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnGroupUp_Parms, GroupIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::NewProp_AverageFeetLocation = { "AverageFeetLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnGroupUp_Parms, AverageFeetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::NewProp_GroupIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::NewProp_AverageFeetLocation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Procedural Walk" },
		{ "Comment", "/** Called when a feet group starts a step */" },
		{ "ModuleRelativePath", "Public/SimpleProceduralWalkInterface.h" },
		{ "ToolTip", "Called when a feet group starts a step" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleProceduralWalkInterface, nullptr, "OnGroupUp", nullptr, nullptr, sizeof(SimpleProceduralWalkInterface_eventOnGroupUp_Parms), Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SimpleProceduralWalkInterface_eventOnPawnLanded_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Simple Procedural Walk" },
		{ "Comment", "/** Called when the pawn lands */" },
		{ "ModuleRelativePath", "Public/SimpleProceduralWalkInterface.h" },
		{ "ToolTip", "Called when the pawn lands" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleProceduralWalkInterface, nullptr, "OnPawnLanded", nullptr, nullptr, sizeof(SimpleProceduralWalkInterface_eventOnPawnLanded_Parms), Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleProceduralWalkInterface);
	UClass* Z_Construct_UClass_USimpleProceduralWalkInterface_NoRegister()
	{
		return USimpleProceduralWalkInterface::StaticClass();
	}
	struct Z_Construct_UClass_USimpleProceduralWalkInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USimpleProceduralWalkInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProceduralWalk,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USimpleProceduralWalkInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootDown, "OnFootDown" }, // 2885851759
		{ &Z_Construct_UFunction_USimpleProceduralWalkInterface_OnFootUp, "OnFootUp" }, // 3520801527
		{ &Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupDown, "OnGroupDown" }, // 1824609086
		{ &Z_Construct_UFunction_USimpleProceduralWalkInterface_OnGroupUp, "OnGroupUp" }, // 1624142559
		{ &Z_Construct_UFunction_USimpleProceduralWalkInterface_OnPawnLanded, "OnPawnLanded" }, // 1606312656
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USimpleProceduralWalkInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SimpleProceduralWalkInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USimpleProceduralWalkInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISimpleProceduralWalkInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleProceduralWalkInterface_Statics::ClassParams = {
		&USimpleProceduralWalkInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_USimpleProceduralWalkInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USimpleProceduralWalkInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USimpleProceduralWalkInterface()
	{
		if (!Z_Registration_Info_UClass_USimpleProceduralWalkInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleProceduralWalkInterface.OuterSingleton, Z_Construct_UClass_USimpleProceduralWalkInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USimpleProceduralWalkInterface.OuterSingleton;
	}
	template<> SIMPLEPROCEDURALWALK_API UClass* StaticClass<USimpleProceduralWalkInterface>()
	{
		return USimpleProceduralWalkInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleProceduralWalkInterface);
	USimpleProceduralWalkInterface::~USimpleProceduralWalkInterface() {}
	static FName NAME_USimpleProceduralWalkInterface_OnFootDown = FName(TEXT("OnFootDown"));
	void ISimpleProceduralWalkInterface::Execute_OnFootDown(UObject* O, int32 LegIndex, FName TipBone, FVector FootLocation, FHitResult Hit)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USimpleProceduralWalkInterface::StaticClass()));
		SimpleProceduralWalkInterface_eventOnFootDown_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USimpleProceduralWalkInterface_OnFootDown);
		if (Func)
		{
			Parms.LegIndex=LegIndex;
			Parms.TipBone=TipBone;
			Parms.FootLocation=FootLocation;
			Parms.Hit=Hit;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USimpleProceduralWalkInterface_OnFootUp = FName(TEXT("OnFootUp"));
	void ISimpleProceduralWalkInterface::Execute_OnFootUp(UObject* O, int32 LegIndex, FName TipBone, FVector FootLocation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USimpleProceduralWalkInterface::StaticClass()));
		SimpleProceduralWalkInterface_eventOnFootUp_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USimpleProceduralWalkInterface_OnFootUp);
		if (Func)
		{
			Parms.LegIndex=LegIndex;
			Parms.TipBone=TipBone;
			Parms.FootLocation=FootLocation;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USimpleProceduralWalkInterface_OnGroupDown = FName(TEXT("OnGroupDown"));
	void ISimpleProceduralWalkInterface::Execute_OnGroupDown(UObject* O, int32 GroupIndex, FVector AverageFeetLocation, FHitResult FirstFootHit)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USimpleProceduralWalkInterface::StaticClass()));
		SimpleProceduralWalkInterface_eventOnGroupDown_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USimpleProceduralWalkInterface_OnGroupDown);
		if (Func)
		{
			Parms.GroupIndex=GroupIndex;
			Parms.AverageFeetLocation=AverageFeetLocation;
			Parms.FirstFootHit=FirstFootHit;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USimpleProceduralWalkInterface_OnGroupUp = FName(TEXT("OnGroupUp"));
	void ISimpleProceduralWalkInterface::Execute_OnGroupUp(UObject* O, int32 GroupIndex, FVector AverageFeetLocation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USimpleProceduralWalkInterface::StaticClass()));
		SimpleProceduralWalkInterface_eventOnGroupUp_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USimpleProceduralWalkInterface_OnGroupUp);
		if (Func)
		{
			Parms.GroupIndex=GroupIndex;
			Parms.AverageFeetLocation=AverageFeetLocation;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USimpleProceduralWalkInterface_OnPawnLanded = FName(TEXT("OnPawnLanded"));
	void ISimpleProceduralWalkInterface::Execute_OnPawnLanded(UObject* O, FVector Location)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USimpleProceduralWalkInterface::StaticClass()));
		SimpleProceduralWalkInterface_eventOnPawnLanded_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USimpleProceduralWalkInterface_OnPawnLanded);
		if (Func)
		{
			Parms.Location=Location;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SimpleProceduralWalkInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SimpleProceduralWalkInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USimpleProceduralWalkInterface, USimpleProceduralWalkInterface::StaticClass, TEXT("USimpleProceduralWalkInterface"), &Z_Registration_Info_UClass_USimpleProceduralWalkInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleProceduralWalkInterface), 3311654083U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SimpleProceduralWalkInterface_h_516172768(TEXT("/Script/SimpleProceduralWalk"),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SimpleProceduralWalkInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SimpleProceduralWalkInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
