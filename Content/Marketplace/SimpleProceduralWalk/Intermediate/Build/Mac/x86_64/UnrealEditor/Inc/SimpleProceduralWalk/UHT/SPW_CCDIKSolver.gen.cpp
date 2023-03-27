// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleProceduralWalk/Public/SPW_CCDIKSolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSPW_CCDIKSolver() {}
// Cross Module References
	SIMPLEPROCEDURALWALK_API UScriptStruct* Z_Construct_UScriptStruct_FSPW_CCDIKChainLink();
	UPackage* Z_Construct_UPackage__Script_SimpleProceduralWalk();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SPW_CCDIKChainLink;
class UScriptStruct* FSPW_CCDIKChainLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SPW_CCDIKChainLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SPW_CCDIKChainLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSPW_CCDIKChainLink, Z_Construct_UPackage__Script_SimpleProceduralWalk(), TEXT("SPW_CCDIKChainLink"));
	}
	return Z_Registration_Info_UScriptStruct_SPW_CCDIKChainLink.OuterSingleton;
}
template<> SIMPLEPROCEDURALWALK_API UScriptStruct* StaticStruct<FSPW_CCDIKChainLink>()
{
	return FSPW_CCDIKChainLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSPW_CCDIKChainLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSPW_CCDIKChainLink_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Transient structure for CCDIK node evaluation */" },
		{ "ModuleRelativePath", "Public/SPW_CCDIKSolver.h" },
		{ "ToolTip", "Transient structure for CCDIK node evaluation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSPW_CCDIKChainLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSPW_CCDIKChainLink>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSPW_CCDIKChainLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleProceduralWalk,
		nullptr,
		&NewStructOps,
		"SPW_CCDIKChainLink",
		sizeof(FSPW_CCDIKChainLink),
		alignof(FSPW_CCDIKChainLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSPW_CCDIKChainLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSPW_CCDIKChainLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSPW_CCDIKChainLink()
	{
		if (!Z_Registration_Info_UScriptStruct_SPW_CCDIKChainLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SPW_CCDIKChainLink.InnerSingleton, Z_Construct_UScriptStruct_FSPW_CCDIKChainLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SPW_CCDIKChainLink.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_CCDIKSolver_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_CCDIKSolver_h_Statics::ScriptStructInfo[] = {
		{ FSPW_CCDIKChainLink::StaticStruct, Z_Construct_UScriptStruct_FSPW_CCDIKChainLink_Statics::NewStructOps, TEXT("SPW_CCDIKChainLink"), &Z_Registration_Info_UScriptStruct_SPW_CCDIKChainLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSPW_CCDIKChainLink), 3737720610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_CCDIKSolver_h_416322677(TEXT("/Script/SimpleProceduralWalk"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_CCDIKSolver_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SimpleProceduralWalk_Source_SimpleProceduralWalk_Public_SPW_CCDIKSolver_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
