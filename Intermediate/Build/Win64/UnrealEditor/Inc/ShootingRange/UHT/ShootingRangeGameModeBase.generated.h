// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ShootingRangeGameModeBase.h"

#ifdef SHOOTINGRANGE_ShootingRangeGameModeBase_generated_h
#error "ShootingRangeGameModeBase.generated.h already included, missing '#pragma once' in ShootingRangeGameModeBase.h"
#endif
#define SHOOTINGRANGE_ShootingRangeGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AShootingRangeGameModeBase ***********************************************
SHOOTINGRANGE_API UClass* Z_Construct_UClass_AShootingRangeGameModeBase_NoRegister();

#define FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootingRangeGameModeBase(); \
	friend struct Z_Construct_UClass_AShootingRangeGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SHOOTINGRANGE_API UClass* Z_Construct_UClass_AShootingRangeGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AShootingRangeGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootingRange"), Z_Construct_UClass_AShootingRangeGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AShootingRangeGameModeBase)


#define FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootingRangeGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AShootingRangeGameModeBase(AShootingRangeGameModeBase&&) = delete; \
	AShootingRangeGameModeBase(const AShootingRangeGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootingRangeGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootingRangeGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootingRangeGameModeBase) \
	NO_API virtual ~AShootingRangeGameModeBase();


#define FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h_12_PROLOG
#define FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AShootingRangeGameModeBase;

// ********** End Class AShootingRangeGameModeBase *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Documents_ShootingRange_Source_ShootingRange_ShootingRangeGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
