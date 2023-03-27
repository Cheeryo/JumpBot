// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleProceduralWalk/Public/AnimNode_SPW.h"
#include "Engine/Public/Animation/BoneSocketReference.h"
#include "Engine/Public/BoneContainer.h"
#include "SimpleProceduralWalk/Public/SPW.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_SPW() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneSocketTarget();
	SIMPLEPROCEDURALWALK_API UEnum* Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis();
	SIMPLEPROCEDURALWALK_API UEnum* Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType();
	SIMPLEPROCEDURALWALK_API UEnum* Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SPW();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint();
	UPackage* Z_Construct_UPackage__Script_SimpleProceduralWalk();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_SPW>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_SPW cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_SPW;
class UScriptStruct* FAnimNode_SPW::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_SPW.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_SPW.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SPW, Z_Construct_UPackage__Script_SimpleProceduralWalk(), TEXT("AnimNode_SPW"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_SPW.OuterSingleton;
}
template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<FAnimNode_SPW>()
{
	return FAnimNode_SPW::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_SPW_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleWithSkeletalMesh_MetaData[];
#endif
		static void NewProp_bScaleWithSkeletalMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleWithSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDetectFalling_MetaData[];
#endif
		static void NewProp_bDetectFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDetectFalling;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SkeletalMeshForwardAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshForwardAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletalMeshForwardAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyBone_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyBone;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Legs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Legs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Legs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LegGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LegGroups;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDistanceToUnplant_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDistanceToUnplant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FixFeetTargetsAfterPercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FixFeetTargetsAfterPercent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetTipBonesRotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FeetTipBonesRotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepDistanceForward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepDistanceForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepDistanceRight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepDistanceRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSequencePercent_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSequencePercent;
		static const UECodeGen_Private::FBytePropertyParams NewProp_StepCurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepCurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_StepCurveType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSlopeReductionMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepSlopeReductionMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinStepDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinStepDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomStepHeightCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomStepHeightCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomStepDistanceCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CustomStepDistanceCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyBounceMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyBounceMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodySlopeMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodySlopeMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyLocationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyLocationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBodyRotateOnAcceleration_MetaData[];
#endif
		static void NewProp_bBodyRotateOnAcceleration_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBodyRotateOnAcceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBodyRotateOnFeetLocations_MetaData[];
#endif
		static void NewProp_bBodyRotateOnFeetLocations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBodyRotateOnFeetLocations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyRotationInterpSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyRotationInterpSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyAccelerationRotationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyAccelerationRotationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyFeetLocationsRotationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BodyFeetLocationsRotationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBodyRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaxBodyRotation;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SolverType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SolverType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetInAirInterSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FeetInAirInterSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RadiusCheckMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusCheckMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceCheckMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceCheckMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableIkSolver_MetaData[];
#endif
		static void NewProp_bEnableIkSolver_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableIkSolver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartFromTail_MetaData[];
#endif
		static void NewProp_bStartFromTail_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartFromTail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Precision_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Precision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTraceComplex_MetaData[];
#endif
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VirtualBoneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VirtualBoneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VirtualBoneNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerPawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LegsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LegsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LegsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupsData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupsData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupsData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EffectorTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectorTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectorTargets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentBones;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TipBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TipBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TipBones;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FeetRotationLimitsPerJoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FeetRotationLimitsPerJoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FeetRotationLimitsPerJoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_SPW>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Simple Procedural Walk" },
		{ "Comment", "/** Should draw the debug elements? */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Should draw the debug elements?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((FAnimNode_SPW*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SPW), &Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bScaleWithSkeletalMesh_MetaData[] = {
		{ "Category", "Simple Procedural Walk" },
		{ "Comment", "/** Should scale the values based on the skeletal mesh scale? */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Should scale the values based on the skeletal mesh scale?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bScaleWithSkeletalMesh_SetBit(void* Obj)
	{
		((FAnimNode_SPW*)Obj)->bScaleWithSkeletalMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bScaleWithSkeletalMesh = { "bScaleWithSkeletalMesh", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SPW), &Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bScaleWithSkeletalMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bScaleWithSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bScaleWithSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDetectFalling_MetaData[] = {
		{ "Category", "Simple Procedural Walk" },
		{ "Comment", "/** Should detect falling pawn and raise events? */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Should detect falling pawn and raise events?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDetectFalling_SetBit(void* Obj)
	{
		((FAnimNode_SPW*)Obj)->bDetectFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDetectFalling = { "bDetectFalling", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SPW), &Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDetectFalling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDetectFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDetectFalling_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshForwardAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshForwardAxis_MetaData[] = {
		{ "Category", "Skeletal Control" },
		{ "Comment", "/**\n\x09 * The forward axis of the Skeletal Mesh.\n\x09 * With Debug enabled, ensure that the RED axis goes towards the front of your mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "The forward axis of the Skeletal Mesh.\nWith Debug enabled, ensure that the RED axis goes towards the front of your mesh." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshForwardAxis = { "SkeletalMeshForwardAxis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, SkeletalMeshForwardAxis), Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_MeshForwardAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshForwardAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshForwardAxis_MetaData)) }; // 1535375082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyBone_MetaData[] = {
		{ "Category", "Skeletal Control" },
		{ "Comment", "/**\n\x09 * The bone that defines the center of the body.\n\x09 * This bone should ideally be placed at the center of the body, otherwise unoptimal animation may happen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "The bone that defines the center of the body.\nThis bone should ideally be placed at the center of the body, otherwise unoptimal animation may happen." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyBone = { "BodyBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, BodyBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyBone_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Legs_Inner = { "Legs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg, METADATA_PARAMS(nullptr, 0) }; // 4211317098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Legs_MetaData[] = {
		{ "Category", "Skeletal Control" },
		{ "Comment", "/** Defines the legs to animate. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Defines the legs to animate." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Legs = { "Legs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, Legs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Legs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Legs_MetaData)) }; // 4211317098
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegGroups_Inner = { "LegGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup, METADATA_PARAMS(nullptr, 0) }; // 3308528120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegGroups_MetaData[] = {
		{ "Category", "Walk Cycle" },
		{ "Comment", "/** Defines the leg groups (the legs in a group will unplant at the same time). */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Defines the leg groups (the legs in a group will unplant at the same time)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegGroups = { "LegGroups", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, LegGroups), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegGroups_MetaData)) }; // 3308528120
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MinDistanceToUnplant_MetaData[] = {
		{ "Category", "Walk Cycle" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How far should the foot desired position be from the tip bone before a step is taken. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "How far should the foot desired position be from the tip bone before a step is taken." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MinDistanceToUnplant = { "MinDistanceToUnplant", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, MinDistanceToUnplant), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MinDistanceToUnplant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MinDistanceToUnplant_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FixFeetTargetsAfterPercent_MetaData[] = {
		{ "Category", "Walk Cycle" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Do not adjust feet targets if the step is over this percentage. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Do not adjust feet targets if the step is over this percentage." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FixFeetTargetsAfterPercent = { "FixFeetTargetsAfterPercent", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, FixFeetTargetsAfterPercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FixFeetTargetsAfterPercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FixFeetTargetsAfterPercent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetTipBonesRotationInterpSpeed_MetaData[] = {
		{ "Category", "Walk Cycle" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The foot rotation interpolation speed. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "The foot rotation interpolation speed." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetTipBonesRotationInterpSpeed = { "FeetTipBonesRotationInterpSpeed", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, FeetTipBonesRotationInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetTipBonesRotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetTipBonesRotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepHeight_MetaData[] = {
		{ "Category", "Step Control" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How hight should the step be above the ground. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How hight should the step be above the ground." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, StepHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepDistanceForward_MetaData[] = {
		{ "Category", "Step Control" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How far should the step move forward (and backwards) */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How far should the step move forward (and backwards)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepDistanceForward = { "StepDistanceForward", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, StepDistanceForward), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepDistanceForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepDistanceForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepDistanceRight_MetaData[] = {
		{ "Category", "Step Control" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How far should the step move sideways */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How far should the step move sideways" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepDistanceRight = { "StepDistanceRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, StepDistanceRight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepDistanceRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepDistanceRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepSequencePercent_MetaData[] = {
		{ "Category", "Step Control" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n * Defines at which percentage of a step the next group of legs will unplant.\n\x09 * With a value of 1, a group will wait for the previous group to finish the step before unplanting.\n\x09 * Values between 0-1 will make a group unplant while the previous group is still unplanted.\n\x09 * With a value of 0, all groups will unplant at the same time.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Defines at which percentage of a step the next group of legs will unplant.\nWith a value of 1, a group will wait for the previous group to finish the step before unplanting.\nValues between 0-1 will make a group unplant while the previous group is still unplanted.\nWith a value of 0, all groups will unplant at the same time." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepSequencePercent = { "StepSequencePercent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, StepSequencePercent), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepSequencePercent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepSequencePercent_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepCurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepCurveType_MetaData[] = {
		{ "Category", "Step Control" },
		{ "Comment", "/** Defines the curve steps. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Defines the curve steps." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepCurveType = { "StepCurveType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, StepCurveType), Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_StepCurveType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepCurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepCurveType_MetaData)) }; // 545833060
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepSlopeReductionMultiplier_MetaData[] = {
		{ "Category", "Step Control" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 * How much should the step distance be reduced based on slope inclination:\n\x09 * 0: No reduction.\n\x09 * 1: With a slope of 90 degrees the step is reduced to 0.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "How much should the step distance be reduced based on slope inclination:\n0: No reduction.\n1: With a slope of 90 degrees the step is reduced to 0." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepSlopeReductionMultiplier = { "StepSlopeReductionMultiplier", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, StepSlopeReductionMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepSlopeReductionMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepSlopeReductionMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MinStepDuration_MetaData[] = {
		{ "Category", "Step Control" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The minimum step duration (steps should never take less than this amount of time). */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "The minimum step duration (steps should never take less than this amount of time)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MinStepDuration = { "MinStepDuration", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, MinStepDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MinStepDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MinStepDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_CustomStepHeightCurve_MetaData[] = {
		{ "Category", "Step Control" },
		{ "Comment", "/** The curve that defines the foot height evolution during a step. */" },
		{ "EditCondition", "StepCurveType == ESimpleProceduralWalk_StepCurveType::CUSTOM" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The curve that defines the foot height evolution during a step." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_CustomStepHeightCurve = { "CustomStepHeightCurve", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, CustomStepHeightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_CustomStepHeightCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_CustomStepHeightCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_CustomStepDistanceCurve_MetaData[] = {
		{ "Category", "Step Control" },
		{ "Comment", "/** The curve that defines the foot distance evolution during a step. */" },
		{ "EditCondition", "StepCurveType == ESimpleProceduralWalk_StepCurveType::CUSTOM" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "The curve that defines the foot distance evolution during a step." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_CustomStepDistanceCurve = { "CustomStepDistanceCurve", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, CustomStepDistanceCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_CustomStepDistanceCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_CustomStepDistanceCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyBounceMultiplier_MetaData[] = {
		{ "Category", "Body Location" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much should the body bounce up and down while walking (0 disables it). */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much should the body bounce up and down while walking (0 disables it)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyBounceMultiplier = { "BodyBounceMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, BodyBounceMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyBounceMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyBounceMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodySlopeMultiplier_MetaData[] = {
		{ "Category", "Body Location" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much should the body be lowered to the ground while on a slope. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much should the body be lowered to the ground while on a slope." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodySlopeMultiplier = { "BodySlopeMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, BodySlopeMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodySlopeMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodySlopeMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyLocationInterpSpeed_MetaData[] = {
		{ "Category", "Body Location" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How fast should the body location movement be interpolated. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How fast should the body location movement be interpolated." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyLocationInterpSpeed = { "BodyLocationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, BodyLocationInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyLocationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyLocationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyZOffset_MetaData[] = {
		{ "Category", "Body Location" },
		{ "Comment", "/** Additional body offset along the Z axis. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Additional body offset along the Z axis." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyZOffset = { "BodyZOffset", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, BodyZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnAcceleration_MetaData[] = {
		{ "Category", "Body Rotation" },
		{ "Comment", "/** Should the body rotate based on change of direction? */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should the body rotate based on change of direction?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnAcceleration_SetBit(void* Obj)
	{
		((FAnimNode_SPW*)Obj)->bBodyRotateOnAcceleration = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnAcceleration = { "bBodyRotateOnAcceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SPW), &Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnAcceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnFeetLocations_MetaData[] = {
		{ "Category", "Body Rotation" },
		{ "Comment", "/** Should the body rotate based on feet locations? */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Should the body rotate based on feet locations?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnFeetLocations_SetBit(void* Obj)
	{
		((FAnimNode_SPW*)Obj)->bBodyRotateOnFeetLocations = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnFeetLocations = { "bBodyRotateOnFeetLocations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SPW), &Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnFeetLocations_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnFeetLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnFeetLocations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyRotationInterpSpeed_MetaData[] = {
		{ "Category", "Body Rotation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How fast should the body rotation movement be interpolated. */" },
		{ "EditCondition", "bBodyRotateOnAcceleration || bBodyRotateOnFeetLocations" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How fast should the body rotation movement be interpolated." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyRotationInterpSpeed = { "BodyRotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, BodyRotationInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyRotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyRotationInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyAccelerationRotationMultiplier_MetaData[] = {
		{ "Category", "Body Rotation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much should the acceleration influence the body rotation. */" },
		{ "EditCondition", "bBodyRotateOnAcceleration" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "How much should the acceleration influence the body rotation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyAccelerationRotationMultiplier = { "BodyAccelerationRotationMultiplier", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, BodyAccelerationRotationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyAccelerationRotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyAccelerationRotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyFeetLocationsRotationMultiplier_MetaData[] = {
		{ "Category", "Body Rotation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much should the feet locations influence the body rotation. */" },
		{ "EditCondition", "bBodyRotateOnFeetLocations" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "How much should the feet locations influence the body rotation." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyFeetLocationsRotationMultiplier = { "BodyFeetLocationsRotationMultiplier", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, BodyFeetLocationsRotationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyFeetLocationsRotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyFeetLocationsRotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MaxBodyRotation_MetaData[] = {
		{ "Category", "Body Rotation" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Maximum body rotation, per axis: Roll (X), Pitch (Y), and Yaw (Z, ignored). */" },
		{ "EditCondition", "bBodyRotateOnAcceleration || bBodyRotateOnFeetLocations" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Maximum body rotation, per axis: Roll (X), Pitch (Y), and Yaw (Z, ignored)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MaxBodyRotation = { "MaxBodyRotation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, MaxBodyRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MaxBodyRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MaxBodyRotation_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SolverType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SolverType_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** The ADVANCED solver type is more accurate to some world scenarios, but it's more expensive. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "The ADVANCED solver type is more accurate to some world scenarios, but it's more expensive." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SolverType = { "SolverType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, SolverType), Z_Construct_UEnum_SimpleProceduralWalk_ESimpleProceduralWalk_SolverType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SolverType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SolverType_MetaData)) }; // 1957276094
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetInAirInterSpeed_MetaData[] = {
		{ "Category", "Solver" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How quickly should feet interpolate while the pawn is falling. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "How quickly should feet interpolate while the pawn is falling." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetInAirInterSpeed = { "FeetInAirInterSpeed", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, FeetInAirInterSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetInAirInterSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetInAirInterSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_RadiusCheckMultiplier_MetaData[] = {
		{ "Category", "Solver" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/** Specifies the radius within which to check for existing places where to plant feet. */" },
		{ "EditCondition", "SolverType == ESimpleProceduralWalk_SolverType::ADVANCED" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Specifies the radius within which to check for existing places where to plant feet." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_RadiusCheckMultiplier = { "RadiusCheckMultiplier", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, RadiusCheckMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_RadiusCheckMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_RadiusCheckMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_DistanceCheckMultiplier_MetaData[] = {
		{ "Category", "Solver" },
		{ "ClampMax", "3.0" },
		{ "ClampMin", "1.0" },
		{ "Comment", "/**\n\x09 * Specifies when the basic vertical location where to plant the foot should be abandoned and a location within a radius should be searched for instead.\n\x09 * This is directly related to how much the leg can \"extend\" its Z axis when going from idle to walking.\n\x09 */" },
		{ "EditCondition", "SolverType == ESimpleProceduralWalk_SolverType::ADVANCED" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Specifies when the basic vertical location where to plant the foot should be abandoned and a location within a radius should be searched for instead.\nThis is directly related to how much the leg can \"extend\" its Z axis when going from idle to walking." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_DistanceCheckMultiplier = { "DistanceCheckMultiplier", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, DistanceCheckMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_DistanceCheckMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_DistanceCheckMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bEnableIkSolver_MetaData[] = {
		{ "Category", "IK Solver" },
		{ "Comment", "/**\n\x09 * Set to true to use Simple Procedural Walk's internal CCDIK.\n\x09 * Set to false if you plan on using Virtual Bones to drive animations, for instance with Control Rig.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Set to true to use Simple Procedural Walk's internal CCDIK.\nSet to false if you plan on using Virtual Bones to drive animations, for instance with Control Rig." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bEnableIkSolver_SetBit(void* Obj)
	{
		((FAnimNode_SPW*)Obj)->bEnableIkSolver = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bEnableIkSolver = { "bEnableIkSolver", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SPW), &Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bEnableIkSolver_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bEnableIkSolver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bEnableIkSolver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bStartFromTail_MetaData[] = {
		{ "Category", "IK Solver" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Start computations from tail. */" },
		{ "EditCondition", "bEnableIkSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Start computations from tail." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bStartFromTail_SetBit(void* Obj)
	{
		((FAnimNode_SPW*)Obj)->bStartFromTail = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bStartFromTail = { "bStartFromTail", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SPW), &Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bStartFromTail_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bStartFromTail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bStartFromTail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Precision_MetaData[] = {
		{ "Category", "IK Solver" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Tolerance for final tip bone location delta. */" },
		{ "EditCondition", "bEnableIkSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Tolerance for final tip bone location delta." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Precision = { "Precision", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, Precision), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Precision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Precision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MaxIterations_MetaData[] = {
		{ "Category", "IK Solver" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum number of iterations allowed, to control performance. */" },
		{ "EditCondition", "bEnableIkSolver" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Maximum number of iterations allowed, to control performance." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MaxIterations = { "MaxIterations", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, MaxIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MaxIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MaxIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/**\n\x09 * The trace channel.\n\x09 * It is recommended to have a channel dedicated to feet placement so that, for instance, feet are not placed on top of grass or small foliage.\n\x09 */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "The trace channel.\nIt is recommended to have a channel dedicated to feet placement so that, for instance, feet are not placed on top of grass or small foliage." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceChannel_MetaData)) }; // 2906040657
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceLength_MetaData[] = {
		{ "Category", "Trace" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The length of the downwards trace. */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "The length of the downwards trace." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceLength = { "TraceLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, TraceLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bTraceComplex_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** Should the trace be complex? */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Should the trace be complex?" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((FAnimNode_SPW*)Obj)->bTraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_SPW), &Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bTraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bTraceComplex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceZOffset_MetaData[] = {
		{ "Category", "Trace" },
		{ "Comment", "/** Trace offset (from the foot Parent Bone). */" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "Trace offset (from the foot Parent Bone)." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceZOffset = { "TraceZOffset", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, TraceZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceZOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceZOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_WorldContext_MetaData[] = {
		{ "Comment", "// References\n" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "References" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, WorldContext), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_WorldContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_WorldContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshComponent = { "SkeletalMeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_VirtualBoneNames_Inner = { "VirtualBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_VirtualBoneNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_VirtualBoneNames = { "VirtualBoneNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, VirtualBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_VirtualBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_VirtualBoneNames_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_OwnerPawn_MetaData[] = {
		{ "Comment", "// pawn data\n" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "pawn data" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_OwnerPawn = { "OwnerPawn", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, OwnerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_OwnerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_OwnerPawn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegsData_Inner = { "LegsData", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData, METADATA_PARAMS(nullptr, 0) }; // 4008768572
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegsData_MetaData[] = {
		{ "Comment", "// legs\n" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "legs" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegsData = { "LegsData", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, LegsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegsData_MetaData)) }; // 4008768572
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_GroupsData_Inner = { "GroupsData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData, METADATA_PARAMS(nullptr, 0) }; // 2967110593
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_GroupsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_GroupsData = { "GroupsData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, GroupsData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_GroupsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_GroupsData_MetaData)) }; // 2967110593
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_EffectorTargets_Inner = { "EffectorTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneSocketTarget, METADATA_PARAMS(nullptr, 0) }; // 2128614898
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_EffectorTargets_MetaData[] = {
		{ "Comment", "// IK\n" },
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
		{ "ToolTip", "IK" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_EffectorTargets = { "EffectorTargets", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, EffectorTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_EffectorTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_EffectorTargets_MetaData)) }; // 2128614898
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_ParentBones_Inner = { "ParentBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_ParentBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_ParentBones = { "ParentBones", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, ParentBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_ParentBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_ParentBones_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TipBones_Inner = { "TipBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) }; // 2906976723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TipBones_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TipBones = { "TipBones", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, TipBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TipBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TipBones_MetaData)) }; // 2906976723
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetRotationLimitsPerJoints_Inner = { "FeetRotationLimitsPerJoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint, METADATA_PARAMS(nullptr, 0) }; // 1576612177
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetRotationLimitsPerJoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_SPW.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetRotationLimitsPerJoints = { "FeetRotationLimitsPerJoints", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_SPW, FeetRotationLimitsPerJoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetRotationLimitsPerJoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetRotationLimitsPerJoints_MetaData)) }; // 1576612177
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bScaleWithSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bDetectFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshForwardAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshForwardAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Legs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Legs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegGroups,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MinDistanceToUnplant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FixFeetTargetsAfterPercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetTipBonesRotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepDistanceForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepDistanceRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepSequencePercent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepCurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepCurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_StepSlopeReductionMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MinStepDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_CustomStepHeightCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_CustomStepDistanceCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyBounceMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodySlopeMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyLocationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnAcceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bBodyRotateOnFeetLocations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyRotationInterpSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyAccelerationRotationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_BodyFeetLocationsRotationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MaxBodyRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SolverType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SolverType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetInAirInterSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_RadiusCheckMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_DistanceCheckMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bEnableIkSolver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bStartFromTail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_Precision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_MaxIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_bTraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TraceZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_WorldContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_SkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_VirtualBoneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_VirtualBoneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_OwnerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_LegsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_GroupsData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_GroupsData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_EffectorTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_EffectorTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_ParentBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_ParentBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TipBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_TipBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetRotationLimitsPerJoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewProp_FeetRotationLimitsPerJoints,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProceduralWalk,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_SPW",
		sizeof(FAnimNode_SPW),
		alignof(FAnimNode_SPW),
		Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SPW()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_SPW.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_SPW.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_SPW.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_AnimNode_SPW_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_AnimNode_SPW_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_SPW::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_SPW_Statics::NewStructOps, TEXT("AnimNode_SPW"), &Z_Registration_Info_UScriptStruct_AnimNode_SPW, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_SPW), 1871679158U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_AnimNode_SPW_h_3181465098(TEXT("/Script/SimpleProceduralWalk"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_AnimNode_SPW_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_AnimNode_SPW_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
