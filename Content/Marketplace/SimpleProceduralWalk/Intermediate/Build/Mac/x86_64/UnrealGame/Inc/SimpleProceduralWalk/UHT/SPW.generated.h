// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SPW.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SIMPLEPROCEDURALWALK_SPW_generated_h
#error "SPW.generated.h already included, missing '#pragma once' in SPW.h"
#endif
#define SIMPLEPROCEDURALWALK_SPW_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleProceduralWalk_Leg_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<struct FSimpleProceduralWalk_Leg>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<struct FSimpleProceduralWalk_LegGroup>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleProceduralWalk_RotationLimitsPerJoint_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<struct FSimpleProceduralWalk_RotationLimitsPerJoint>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<struct FSimpleProceduralWalk_LegData>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h_91_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSimpleProceduralWalk_LegGroupData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<struct FSimpleProceduralWalk_LegGroupData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_h


#define FOREACH_ENUM_ESIMPLEPROCEDURALWALK_MESHFORWARDAXIS(op) \
	op(ESimpleProceduralWalk_MeshForwardAxis::X) \
	op(ESimpleProceduralWalk_MeshForwardAxis::NX) \
	op(ESimpleProceduralWalk_MeshForwardAxis::Y) \
	op(ESimpleProceduralWalk_MeshForwardAxis::NY) 

enum class ESimpleProceduralWalk_MeshForwardAxis : uint8;
template<> struct TIsUEnumClass<ESimpleProceduralWalk_MeshForwardAxis> { enum { Value = true }; };
template<> SIMPLEPROCEDURALWALK_API UEnum* StaticEnum<ESimpleProceduralWalk_MeshForwardAxis>();

#define FOREACH_ENUM_ESIMPLEPROCEDURALWALK_SOLVERTYPE(op) \
	op(ESimpleProceduralWalk_SolverType::BASIC) \
	op(ESimpleProceduralWalk_SolverType::ADVANCED) 

enum class ESimpleProceduralWalk_SolverType : uint8;
template<> struct TIsUEnumClass<ESimpleProceduralWalk_SolverType> { enum { Value = true }; };
template<> SIMPLEPROCEDURALWALK_API UEnum* StaticEnum<ESimpleProceduralWalk_SolverType>();

#define FOREACH_ENUM_ESIMPLEPROCEDURALWALK_STEPCURVETYPE(op) \
	op(ESimpleProceduralWalk_StepCurveType::ROBOT) \
	op(ESimpleProceduralWalk_StepCurveType::ORGANIC) \
	op(ESimpleProceduralWalk_StepCurveType::CUSTOM) 

enum class ESimpleProceduralWalk_StepCurveType : uint8;
template<> struct TIsUEnumClass<ESimpleProceduralWalk_StepCurveType> { enum { Value = true }; };
template<> SIMPLEPROCEDURALWALK_API UEnum* StaticEnum<ESimpleProceduralWalk_StepCurveType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
