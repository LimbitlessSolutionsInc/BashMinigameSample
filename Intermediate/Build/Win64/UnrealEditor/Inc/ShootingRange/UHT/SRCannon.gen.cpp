// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootingRange/Public/SRCannon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRCannon() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigameCapture_NoRegister();
	MINIGAMECORE_API UClass* Z_Construct_UClass_AMinigamePlayer();
	MINIGAMECORE_API UClass* Z_Construct_UClass_UPlayerRotationComponent_NoRegister();
	SHOOTINGRANGE_API UClass* Z_Construct_UClass_ASRCannon();
	SHOOTINGRANGE_API UClass* Z_Construct_UClass_ASRCannon_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShootingRange();
// End Cross Module References
	DEFINE_FUNCTION(ASRCannon::execFire)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire(Z_Param_Layer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASRCannon::execGetCannonTargetRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetCannonTargetRotation();
		P_NATIVE_END;
	}
	struct SRCannon_eventGetDepthLayers_Parms
	{
		TArray<AActor*> ReturnValue;
	};
	struct SRCannon_eventShootProjectile_Parms
	{
		FVector Velocity;
	};
	static FName NAME_ASRCannon_GetDepthLayers = FName(TEXT("GetDepthLayers"));
	TArray<AActor*> ASRCannon::GetDepthLayers()
	{
		SRCannon_eventGetDepthLayers_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_ASRCannon_GetDepthLayers),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ASRCannon_ShootProjectile = FName(TEXT("ShootProjectile"));
	void ASRCannon::ShootProjectile(FVector const& Velocity)
	{
		SRCannon_eventShootProjectile_Parms Parms;
		Parms.Velocity=Velocity;
		ProcessEvent(FindFunctionChecked(NAME_ASRCannon_ShootProjectile),&Parms);
	}
	void ASRCannon::StaticRegisterNativesASRCannon()
	{
		UClass* Class = ASRCannon::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &ASRCannon::execFire },
			{ "GetCannonTargetRotation", &ASRCannon::execGetCannonTargetRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASRCannon_Fire_Statics
	{
		struct SRCannon_eventFire_Parms
		{
			int32 Layer;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Layer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASRCannon_Fire_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SRCannon_eventFire_Parms, Layer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASRCannon_Fire_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASRCannon_Fire_Statics::NewProp_Layer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASRCannon_Fire_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASRCannon_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASRCannon, nullptr, "Fire", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASRCannon_Fire_Statics::SRCannon_eventFire_Parms), Z_Construct_UFunction_ASRCannon_Fire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_Fire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASRCannon_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASRCannon_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASRCannon_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics
	{
		struct SRCannon_eventGetCannonTargetRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SRCannon_eventGetCannonTargetRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASRCannon, nullptr, "GetCannonTargetRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::SRCannon_eventGetCannonTargetRotation_Parms), Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SRCannon_eventGetDepthLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASRCannon, nullptr, "GetDepthLayers", nullptr, nullptr, sizeof(SRCannon_eventGetDepthLayers_Parms), Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASRCannon_GetDepthLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASRCannon_GetDepthLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Velocity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::NewProp_Velocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SRCannon_eventShootProjectile_Parms, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::NewProp_Velocity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::NewProp_Velocity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASRCannon, nullptr, "ShootProjectile", nullptr, nullptr, sizeof(SRCannon_eventShootProjectile_Parms), Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASRCannon_ShootProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASRCannon_ShootProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASRCannon);
	UClass* Z_Construct_UClass_ASRCannon_NoRegister()
	{
		return ASRCannon::StaticClass();
	}
	struct Z_Construct_UClass_ASRCannon_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarrelRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BarrelRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BulletSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RotationComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttackCooldown_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackCooldown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BulletSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BulletSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinigameCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MinigameCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASRCannon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMinigamePlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootingRange,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASRCannon_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASRCannon_Fire, "Fire" }, // 1033275364
		{ &Z_Construct_UFunction_ASRCannon_GetCannonTargetRotation, "GetCannonTargetRotation" }, // 1031088837
		{ &Z_Construct_UFunction_ASRCannon_GetDepthLayers, "GetDepthLayers" }, // 1513435025
		{ &Z_Construct_UFunction_ASRCannon_ShootProjectile, "ShootProjectile" }, // 1627489777
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRCannon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SRCannon.h" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRCannon_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x0024080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASRCannon, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRCannon_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRCannon_Statics::NewProp_BarrelRoot_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_BarrelRoot = { "BarrelRoot", nullptr, (EPropertyFlags)0x0024080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASRCannon, BarrelRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRCannon_Statics::NewProp_BarrelRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::NewProp_BarrelRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseRoot_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseRoot = { "BaseRoot", nullptr, (EPropertyFlags)0x0024080000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASRCannon, BaseRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpawn_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpawn = { "BulletSpawn", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASRCannon, BulletSpawn), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseSkeletalMesh_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseSkeletalMesh = { "BaseSkeletalMesh", nullptr, (EPropertyFlags)0x002408000009001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASRCannon, BaseSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRCannon_Statics::NewProp_RotationComponent_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_RotationComponent = { "RotationComponent", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASRCannon, RotationComponent), Z_Construct_UClass_UPlayerRotationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRCannon_Statics::NewProp_RotationComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::NewProp_RotationComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRCannon_Statics::NewProp_AttackCooldown_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_AttackCooldown = { "AttackCooldown", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASRCannon, AttackCooldown), METADATA_PARAMS(Z_Construct_UClass_ASRCannon_Statics::NewProp_AttackCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::NewProp_AttackCooldown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpeed_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpeed = { "BulletSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASRCannon, BulletSpeed), METADATA_PARAMS(Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASRCannon_Statics::NewProp_MinigameCamera_MetaData[] = {
		{ "Category", "SRCannon" },
		{ "ModuleRelativePath", "Public/SRCannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASRCannon_Statics::NewProp_MinigameCamera = { "MinigameCamera", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASRCannon, MinigameCamera), Z_Construct_UClass_AMinigameCapture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASRCannon_Statics::NewProp_MinigameCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::NewProp_MinigameCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASRCannon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_BarrelRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_BaseSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_RotationComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_AttackCooldown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_BulletSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASRCannon_Statics::NewProp_MinigameCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASRCannon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASRCannon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASRCannon_Statics::ClassParams = {
		&ASRCannon::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASRCannon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASRCannon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASRCannon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASRCannon()
	{
		if (!Z_Registration_Info_UClass_ASRCannon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASRCannon.OuterSingleton, Z_Construct_UClass_ASRCannon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASRCannon.OuterSingleton;
	}
	template<> SHOOTINGRANGE_API UClass* StaticClass<ASRCannon>()
	{
		return ASRCannon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASRCannon);
	ASRCannon::~ASRCannon() {}
	struct Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_Public_SRCannon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_Public_SRCannon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASRCannon, ASRCannon::StaticClass, TEXT("ASRCannon"), &Z_Registration_Info_UClass_ASRCannon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASRCannon), 1085691514U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_Public_SRCannon_h_2605271498(TEXT("/Script/ShootingRange"),
		Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_Public_SRCannon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_Public_SRCannon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
