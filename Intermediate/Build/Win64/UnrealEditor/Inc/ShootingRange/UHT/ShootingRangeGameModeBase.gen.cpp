// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingRange/ShootingRangeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootingRangeGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	SHOOTINGRANGE_API UClass* Z_Construct_UClass_AShootingRangeGameModeBase();
	SHOOTINGRANGE_API UClass* Z_Construct_UClass_AShootingRangeGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingRange();
// End Cross Module References
	void AShootingRangeGameModeBase::StaticRegisterNativesAShootingRangeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AShootingRangeGameModeBase);
	UClass* Z_Construct_UClass_AShootingRangeGameModeBase_NoRegister()
	{
		return AShootingRangeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShootingRangeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootingRangeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootingRangeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShootingRangeGameModeBase.h" },
		{ "ModuleRelativePath", "ShootingRangeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootingRangeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingRangeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AShootingRangeGameModeBase_Statics::ClassParams = {
		&AShootingRangeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShootingRangeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootingRangeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootingRangeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AShootingRangeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingRangeGameModeBase.OuterSingleton, Z_Construct_UClass_AShootingRangeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AShootingRangeGameModeBase.OuterSingleton;
	}
	template<> SHOOTINGRANGE_API UClass* StaticClass<AShootingRangeGameModeBase>()
	{
		return AShootingRangeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingRangeGameModeBase);
	AShootingRangeGameModeBase::~AShootingRangeGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AShootingRangeGameModeBase, AShootingRangeGameModeBase::StaticClass, TEXT("AShootingRangeGameModeBase"), &Z_Registration_Info_UClass_AShootingRangeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingRangeGameModeBase), 684371905U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h_1818607349(TEXT("/Script/ShootingRange"),
		Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
