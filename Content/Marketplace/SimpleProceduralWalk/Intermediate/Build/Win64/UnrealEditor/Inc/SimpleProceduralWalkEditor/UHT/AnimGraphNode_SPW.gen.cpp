// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleProceduralWalkEditor/Public/AnimGraphNode_SPW.h"
#include "SimpleProceduralWalk/Public/AnimNode_SPW.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_SPW() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SPW();
	SIMPLEPROCEDURALWALKEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_SPW();
	SIMPLEPROCEDURALWALKEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_SPW_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SimpleProceduralWalkEditor();
// End Cross Module References
	void UAnimGraphNode_SPW::StaticRegisterNativesUAnimGraphNode_SPW()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_SPW);
	UClass* Z_Construct_UClass_UAnimGraphNode_SPW_NoRegister()
	{
		return UAnimGraphNode_SPW::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_SPW_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_SPW_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProceduralWalkEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SPW_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_SPW.h" },
		{ "Keywords", "Simple Procedural Walk Solver" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SPW.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_SPW_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_SPW.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_SPW_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0040008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_SPW, Node), Z_Construct_UScriptStruct_FAnimNode_SPW, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SPW_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SPW_Statics::NewProp_Node_MetaData)) }; // 1871679158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_SPW_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_SPW_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_SPW_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_SPW>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_SPW_Statics::ClassParams = {
		&UAnimGraphNode_SPW::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_SPW_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SPW_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_SPW_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_SPW_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_SPW()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_SPW.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_SPW.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_SPW_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_SPW.OuterSingleton;
	}
	template<> SIMPLEPROCEDURALWALKEDITOR_API UClass* StaticClass<UAnimGraphNode_SPW>()
	{
		return UAnimGraphNode_SPW::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_SPW);
	UAnimGraphNode_SPW::~UAnimGraphNode_SPW() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalkEditor_Public_AnimGraphNode_SPW_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalkEditor_Public_AnimGraphNode_SPW_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_SPW, UAnimGraphNode_SPW::StaticClass, TEXT("UAnimGraphNode_SPW"), &Z_Registration_Info_UClass_UAnimGraphNode_SPW, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_SPW), 950008883U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalkEditor_Public_AnimGraphNode_SPW_h_767684853(TEXT("/Script/SimpleProceduralWalkEditor"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalkEditor_Public_AnimGraphNode_SPW_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalkEditor_Public_AnimGraphNode_SPW_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
