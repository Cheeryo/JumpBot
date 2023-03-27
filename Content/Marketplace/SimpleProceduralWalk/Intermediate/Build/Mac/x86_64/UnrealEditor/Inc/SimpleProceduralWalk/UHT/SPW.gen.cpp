// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleProceduralWalk/Public/SPW.h"
#include "Engine/Classes/Engine/HitResult.h"
#include "Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPW() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SIMPLEPROCEDURALWALK_API UEnum* Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis();
	SIMPLEPROCEDURALWALK_API UEnum* Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType();
	SIMPLEPROCEDURALWALK_API UEnum* Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint();
	UPackage* Z_Construct_UPackage__Script_SimpleProceduralWalk();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_Leg;
class UScriptStruct* FSimpleProceduralWalk_Leg::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_Leg.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_Leg.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg, Z_Construct_UPackage__Script_SimpleProceduralWalk(), TEXT("SimpleProceduralWalk_Leg"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_Leg.OuterSingleton;
}
template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<FSimpleProceduralWalk_Leg>()
{
	return FSimpleProceduralWalk_Leg::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TipBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRotationLimits_MetaData[];
#endif
		static void NewProp_bEnableRotationLimits_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRotationLimits;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationLimitPerJoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimitPerJoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimitPerJoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPW.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleProceduralWalk_Leg>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_ParentBone_MetaData[] = {
		{ "Category", "Skeletal Control" },
		{ "Comment", "/** The beginning bone of the leg (the upperhand / the calf). */" },
		{ "ModuleRelativePath", "Public/SPW.h" },
		{ "ToolTip", "The beginning bone of the leg (the upperhand / the calf)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_ParentBone = { "ParentBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleProceduralWalk_Leg, ParentBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_ParentBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_ParentBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_TipBone_MetaData[] = {
		{ "Category", "Skeletal Control" },
		{ "Comment", "/** The end bone of the leg (the hand / foot). */" },
		{ "ModuleRelativePath", "Public/SPW.h" },
		{ "ToolTip", "The end bone of the leg (the hand / foot)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_TipBone = { "TipBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleProceduralWalk_Leg, TipBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_TipBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_TipBone_MetaData)) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "Skeletal Control" },
		{ "Comment", "/** The tip bone offset. */" },
		{ "ModuleRelativePath", "Public/SPW.h" },
		{ "ToolTip", "The tip bone offset." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleProceduralWalk_Leg, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_bEnableRotationLimits_MetaData[] = {
		{ "Category", "Skeletal Control" },
		{ "Comment", "/** Should rotation limits be enabled? */" },
		{ "DefaultValue", "false" },
		{ "ModuleRelativePath", "Public/SPW.h" },
		{ "ToolTip", "Should rotation limits be enabled?" },
	};
#endif
	void Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_bEnableRotationLimits_SetBit(void* Obj)
	{
		((FSimpleProceduralWalk_Leg*)Obj)->bEnableRotationLimits = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_bEnableRotationLimits = { "bEnableRotationLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSimpleProceduralWalk_Leg), &Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_bEnableRotationLimits_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_bEnableRotationLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_bEnableRotationLimits_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_RotationLimitPerJoints_Inner = { "RotationLimitPerJoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_RotationLimitPerJoints_MetaData[] = {
		{ "Category", "Skeletal Control" },
		{ "Comment", "/**\n\x09 * Symmetry rotation limits per joint.\n\x09 * Index 0 matches with parent bone, and the last index matches with tip bone.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SPW.h" },
		{ "ToolTip", "Symmetry rotation limits per joint.\nIndex 0 matches with parent bone, and the last index matches with tip bone." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_RotationLimitPerJoints = { "RotationLimitPerJoints", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleProceduralWalk_Leg, RotationLimitPerJoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_RotationLimitPerJoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_RotationLimitPerJoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_ParentBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_TipBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_Offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_bEnableRotationLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_RotationLimitPerJoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewProp_RotationLimitPerJoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProceduralWalk,
		nullptr,
		&NewStructOps,
		"SimpleProceduralWalk_Leg",
		sizeof(FSimpleProceduralWalk_Leg),
		alignof(FSimpleProceduralWalk_Leg),
		Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_Leg.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_Leg.InnerSingleton, Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_Leg.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroup;
class UScriptStruct* FSimpleProceduralWalk_LegGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup, Z_Construct_UPackage__Script_SimpleProceduralWalk(), TEXT("SimpleProceduralWalk_LegGroup"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroup.OuterSingleton;
}
template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<FSimpleProceduralWalk_LegGroup>()
{
	return FSimpleProceduralWalk_LegGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FIntPropertyParams NewProp_LegIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LegIndices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPW.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleProceduralWalk_LegGroup>();
	}
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::NewProp_LegIndices_Inner = { "LegIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::NewProp_LegIndices_MetaData[] = {
		{ "Category", "Walk Cycle" },
		{ "Comment", "/** The list of the indices of the legs that belong to the group. */" },
		{ "ModuleRelativePath", "Public/SPW.h" },
		{ "ToolTip", "The list of the indices of the legs that belong to the group." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::NewProp_LegIndices = { "LegIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleProceduralWalk_LegGroup, LegIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::NewProp_LegIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::NewProp_LegIndices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::NewProp_LegIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::NewProp_LegIndices,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProceduralWalk,
		nullptr,
		&NewStructOps,
		"SimpleProceduralWalk_LegGroup",
		sizeof(FSimpleProceduralWalk_LegGroup),
		alignof(FSimpleProceduralWalk_LegGroup),
		Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroup.InnerSingleton, Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroup.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_RotationLimitsPerJoint;
class UScriptStruct* FSimpleProceduralWalk_RotationLimitsPerJoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_RotationLimitsPerJoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_RotationLimitsPerJoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint, Z_Construct_UPackage__Script_SimpleProceduralWalk(), TEXT("SimpleProceduralWalk_RotationLimitsPerJoint"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_RotationLimitsPerJoint.OuterSingleton;
}
template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<FSimpleProceduralWalk_RotationLimitsPerJoint>()
{
	return FSimpleProceduralWalk_RotationLimitsPerJoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationLimits;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPW.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleProceduralWalk_RotationLimitsPerJoint>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::NewProp_RotationLimits_Inner = { "RotationLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::NewProp_RotationLimits_MetaData[] = {
		{ "Category", "Skeletal Control" },
		{ "ModuleRelativePath", "Public/SPW.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::NewProp_RotationLimits = { "RotationLimits", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleProceduralWalk_RotationLimitsPerJoint, RotationLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::NewProp_RotationLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::NewProp_RotationLimits_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::NewProp_RotationLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::NewProp_RotationLimits,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProceduralWalk,
		nullptr,
		&NewStructOps,
		"SimpleProceduralWalk_RotationLimitsPerJoint",
		sizeof(FSimpleProceduralWalk_RotationLimitsPerJoint),
		alignof(FSimpleProceduralWalk_RotationLimitsPerJoint),
		Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_RotationLimitsPerJoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_RotationLimitsPerJoint.InnerSingleton, Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_RotationLimitsPerJoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegData;
class UScriptStruct* FSimpleProceduralWalk_LegData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData, Z_Construct_UPackage__Script_SimpleProceduralWalk(), TEXT("SimpleProceduralWalk_LegData"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegData.OuterSingleton;
}
template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<FSimpleProceduralWalk_LegData>()
{
	return FSimpleProceduralWalk_LegData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastHit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SupportComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPW.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleProceduralWalk_LegData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewProp_LastHit_MetaData[] = {
		{ "Comment", "// support\n" },
		{ "ModuleRelativePath", "Public/SPW.h" },
		{ "ToolTip", "support" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewProp_LastHit = { "LastHit", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleProceduralWalk_LegData, LastHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewProp_LastHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewProp_LastHit_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewProp_SupportComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SPW.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewProp_SupportComp = { "SupportComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSimpleProceduralWalk_LegData, SupportComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewProp_SupportComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewProp_SupportComp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewProp_LastHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewProp_SupportComp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProceduralWalk,
		nullptr,
		&NewStructOps,
		"SimpleProceduralWalk_LegData",
		sizeof(FSimpleProceduralWalk_LegData),
		alignof(FSimpleProceduralWalk_LegData),
		Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegData.InnerSingleton, Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroupData;
class UScriptStruct* FSimpleProceduralWalk_LegGroupData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroupData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroupData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData, Z_Construct_UPackage__Script_SimpleProceduralWalk(), TEXT("SimpleProceduralWalk_LegGroupData"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroupData.OuterSingleton;
}
template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<FSimpleProceduralWalk_LegGroupData>()
{
	return FSimpleProceduralWalk_LegGroupData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SPW.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleProceduralWalk_LegGroupData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProceduralWalk,
		nullptr,
		&NewStructOps,
		"SimpleProceduralWalk_LegGroupData",
		sizeof(FSimpleProceduralWalk_LegGroupData),
		alignof(FSimpleProceduralWalk_LegGroupData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData()
	{
		if (!Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroupData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroupData.InnerSingleton, Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroupData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleProceduralWalk_MeshForwardAxis;
	static UEnum* ESimpleProceduralWalk_MeshForwardAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleProceduralWalk_MeshForwardAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleProceduralWalk_MeshForwardAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis, Z_Construct_UPackage__Script_SimpleProceduralWalk(), TEXT("ESimpleProceduralWalk_MeshForwardAxis"));
		}
		return Z_Registration_Info_UEnum_ESimpleProceduralWalk_MeshForwardAxis.OuterSingleton;
	}
	template<> SIMPLEPROCEDURALWALK_API UEnum* StaticEnum<ESimpleProceduralWalk_MeshForwardAxis>()
	{
		return ESimpleProceduralWalk_MeshForwardAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis_Statics::Enumerators[] = {
		{ "ESimpleProceduralWalk_MeshForwardAxis::X", (int64)ESimpleProceduralWalk_MeshForwardAxis::X },
		{ "ESimpleProceduralWalk_MeshForwardAxis::NX", (int64)ESimpleProceduralWalk_MeshForwardAxis::NX },
		{ "ESimpleProceduralWalk_MeshForwardAxis::Y", (int64)ESimpleProceduralWalk_MeshForwardAxis::Y },
		{ "ESimpleProceduralWalk_MeshForwardAxis::NY", (int64)ESimpleProceduralWalk_MeshForwardAxis::NY },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SPW.h" },
		{ "NX.DisplayName", "-X" },
		{ "NX.Name", "ESimpleProceduralWalk_MeshForwardAxis::NX" },
		{ "NY.DisplayName", "-Y" },
		{ "NY.Name", "ESimpleProceduralWalk_MeshForwardAxis::NY" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "ESimpleProceduralWalk_MeshForwardAxis::X" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "ESimpleProceduralWalk_MeshForwardAxis::Y" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleProceduralWalk,
		nullptr,
		"ESimpleProceduralWalk_MeshForwardAxis",
		"ESimpleProceduralWalk_MeshForwardAxis",
		Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis()
	{
		if (!Z_Registration_Info_UEnum_ESimpleProceduralWalk_MeshForwardAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleProceduralWalk_MeshForwardAxis.InnerSingleton, Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleProceduralWalk_MeshForwardAxis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleProceduralWalk_SolverType;
	static UEnum* ESimpleProceduralWalk_SolverType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleProceduralWalk_SolverType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleProceduralWalk_SolverType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType, Z_Construct_UPackage__Script_SimpleProceduralWalk(), TEXT("ESimpleProceduralWalk_SolverType"));
		}
		return Z_Registration_Info_UEnum_ESimpleProceduralWalk_SolverType.OuterSingleton;
	}
	template<> SIMPLEPROCEDURALWALK_API UEnum* StaticEnum<ESimpleProceduralWalk_SolverType>()
	{
		return ESimpleProceduralWalk_SolverType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType_Statics::Enumerators[] = {
		{ "ESimpleProceduralWalk_SolverType::BASIC", (int64)ESimpleProceduralWalk_SolverType::BASIC },
		{ "ESimpleProceduralWalk_SolverType::ADVANCED", (int64)ESimpleProceduralWalk_SolverType::ADVANCED },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType_Statics::Enum_MetaDataParams[] = {
		{ "ADVANCED.DisplayName", "Advanced" },
		{ "ADVANCED.Name", "ESimpleProceduralWalk_SolverType::ADVANCED" },
		{ "BASIC.DisplayName", "Basic" },
		{ "BASIC.Name", "ESimpleProceduralWalk_SolverType::BASIC" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SPW.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleProceduralWalk,
		nullptr,
		"ESimpleProceduralWalk_SolverType",
		"ESimpleProceduralWalk_SolverType",
		Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleProceduralWalk_SolverType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleProceduralWalk_SolverType.InnerSingleton, Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleProceduralWalk_SolverType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleProceduralWalk_StepCurveType;
	static UEnum* ESimpleProceduralWalk_StepCurveType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESimpleProceduralWalk_StepCurveType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESimpleProceduralWalk_StepCurveType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType, Z_Construct_UPackage__Script_SimpleProceduralWalk(), TEXT("ESimpleProceduralWalk_StepCurveType"));
		}
		return Z_Registration_Info_UEnum_ESimpleProceduralWalk_StepCurveType.OuterSingleton;
	}
	template<> SIMPLEPROCEDURALWALK_API UEnum* StaticEnum<ESimpleProceduralWalk_StepCurveType>()
	{
		return ESimpleProceduralWalk_StepCurveType_StaticEnum();
	}
	struct Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType_Statics::Enumerators[] = {
		{ "ESimpleProceduralWalk_StepCurveType::ROBOT", (int64)ESimpleProceduralWalk_StepCurveType::ROBOT },
		{ "ESimpleProceduralWalk_StepCurveType::ORGANIC", (int64)ESimpleProceduralWalk_StepCurveType::ORGANIC },
		{ "ESimpleProceduralWalk_StepCurveType::CUSTOM", (int64)ESimpleProceduralWalk_StepCurveType::CUSTOM },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CUSTOM.DisplayName", "Custom" },
		{ "CUSTOM.Name", "ESimpleProceduralWalk_StepCurveType::CUSTOM" },
		{ "ModuleRelativePath", "Public/SPW.h" },
		{ "ORGANIC.DisplayName", "Organic" },
		{ "ORGANIC.Name", "ESimpleProceduralWalk_StepCurveType::ORGANIC" },
		{ "ROBOT.DisplayName", "Robot" },
		{ "ROBOT.Name", "ESimpleProceduralWalk_StepCurveType::ROBOT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SimpleProceduralWalk,
		nullptr,
		"ESimpleProceduralWalk_StepCurveType",
		"ESimpleProceduralWalk_StepCurveType",
		Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType()
	{
		if (!Z_Registration_Info_UEnum_ESimpleProceduralWalk_StepCurveType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleProceduralWalk_StepCurveType.InnerSingleton, Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESimpleProceduralWalk_StepCurveType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_Statics::EnumInfo[] = {
		{ ESimpleProceduralWalk_MeshForwardAxis_StaticEnum, TEXT("ESimpleProceduralWalk_MeshForwardAxis"), &Z_Registration_Info_UEnum_ESimpleProceduralWalk_MeshForwardAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1535375082U) },
		{ ESimpleProceduralWalk_SolverType_StaticEnum, TEXT("ESimpleProceduralWalk_SolverType"), &Z_Registration_Info_UEnum_ESimpleProceduralWalk_SolverType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1957276094U) },
		{ ESimpleProceduralWalk_StepCurveType_StaticEnum, TEXT("ESimpleProceduralWalk_StepCurveType"), &Z_Registration_Info_UEnum_ESimpleProceduralWalk_StepCurveType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 545833060U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_Statics::ScriptStructInfo[] = {
		{ FSimpleProceduralWalk_Leg::StaticStruct, Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics::NewStructOps, TEXT("SimpleProceduralWalk_Leg"), &Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_Leg, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleProceduralWalk_Leg), 4211317098U) },
		{ FSimpleProceduralWalk_LegGroup::StaticStruct, Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics::NewStructOps, TEXT("SimpleProceduralWalk_LegGroup"), &Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleProceduralWalk_LegGroup), 3308528120U) },
		{ FSimpleProceduralWalk_RotationLimitsPerJoint::StaticStruct, Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics::NewStructOps, TEXT("SimpleProceduralWalk_RotationLimitsPerJoint"), &Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_RotationLimitsPerJoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleProceduralWalk_RotationLimitsPerJoint), 1576612177U) },
		{ FSimpleProceduralWalk_LegData::StaticStruct, Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics::NewStructOps, TEXT("SimpleProceduralWalk_LegData"), &Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleProceduralWalk_LegData), 4008768572U) },
		{ FSimpleProceduralWalk_LegGroupData::StaticStruct, Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData_Statics::NewStructOps, TEXT("SimpleProceduralWalk_LegGroupData"), &Z_Registration_Info_UScriptStruct_SimpleProceduralWalk_LegGroupData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleProceduralWalk_LegGroupData), 2967110593U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_3810364824(TEXT("/Script/SimpleProceduralWalk"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
