// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingRange/ShootingRangeGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeShootingRangeGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SHOOTINGRANGE_API UClass* Z_Construct_UClass_AShootingRangeGameModeBase();
SHOOTINGRANGE_API UClass* Z_Construct_UClass_AShootingRangeGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShootingRange();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AShootingRangeGameModeBase ***********************************************
void AShootingRangeGameModeBase::StaticRegisterNativesAShootingRangeGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AShootingRangeGameModeBase;
UClass* AShootingRangeGameModeBase::GetPrivateStaticClass()
{
	using TClass = AShootingRangeGameModeBase;
	if (!Z_Registration_Info_UClass_AShootingRangeGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ShootingRangeGameModeBase"),
			Z_Registration_Info_UClass_AShootingRangeGameModeBase.InnerSingleton,
			StaticRegisterNativesAShootingRangeGameModeBase,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AShootingRangeGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AShootingRangeGameModeBase_NoRegister()
{
	return AShootingRangeGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AShootingRangeGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ShootingRangeGameModeBase.h" },
		{ "ModuleRelativePath", "ShootingRangeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootingRangeGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AShootingRangeGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ShootingRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingRangeGameModeBase_Statics::DependentSingletons) < 16);
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AShootingRangeGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AShootingRangeGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AShootingRangeGameModeBase()
{
	if (!Z_Registration_Info_UClass_AShootingRangeGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AShootingRangeGameModeBase.OuterSingleton, Z_Construct_UClass_AShootingRangeGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AShootingRangeGameModeBase.OuterSingleton;
}
AShootingRangeGameModeBase::AShootingRangeGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AShootingRangeGameModeBase);
AShootingRangeGameModeBase::~AShootingRangeGameModeBase() {}
// ********** End Class AShootingRangeGameModeBase *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h__Script_ShootingRange_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AShootingRangeGameModeBase, AShootingRangeGameModeBase::StaticClass, TEXT("AShootingRangeGameModeBase"), &Z_Registration_Info_UClass_AShootingRangeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AShootingRangeGameModeBase), 618089742U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h__Script_ShootingRange_337748716(TEXT("/Script/ShootingRange"),
	Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h__Script_ShootingRange_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h__Script_ShootingRange_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
