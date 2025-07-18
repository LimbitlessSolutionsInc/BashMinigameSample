// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Widgets/SplitscreenUI.h"

#ifdef MINIGAMECORE_SplitscreenUI_generated_h
#error "SplitscreenUI.generated.h already included, missing '#pragma once' in SplitscreenUI.h"
#endif
#define MINIGAMECORE_SplitscreenUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UCanvasPanel;
class UOverlay;

// ********** Begin Class USplitscreenUI ***********************************************************
#define FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSplitPanel); \
	DECLARE_FUNCTION(execGetNumSplits);


#define FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_19_CALLBACK_WRAPPERS
MINIGAMECORE_API UClass* Z_Construct_UClass_USplitscreenUI_NoRegister();

#define FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSplitscreenUI(); \
	friend struct Z_Construct_UClass_USplitscreenUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend MINIGAMECORE_API UClass* Z_Construct_UClass_USplitscreenUI_NoRegister(); \
public: \
	DECLARE_CLASS2(USplitscreenUI, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MinigameCore"), Z_Construct_UClass_USplitscreenUI_NoRegister) \
	DECLARE_SERIALIZER(USplitscreenUI)


#define FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USplitscreenUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USplitscreenUI(USplitscreenUI&&) = delete; \
	USplitscreenUI(const USplitscreenUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USplitscreenUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USplitscreenUI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USplitscreenUI) \
	NO_API virtual ~USplitscreenUI();


#define FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_16_PROLOG
#define FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_19_CALLBACK_WRAPPERS \
	FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USplitscreenUI;

// ********** End Class USplitscreenUI *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_MinigameCore_HostProject_Plugins_MinigameCore_Source_MinigameCore_Public_Widgets_SplitscreenUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
