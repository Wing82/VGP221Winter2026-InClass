// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HUB/GameHUD.h"

#ifdef INCLASS_GameHUD_generated_h
#error "GameHUD.generated.h already included, missing '#pragma once' in GameHUD.h"
#endif
#define INCLASS_GameHUD_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameHUD *****************************************************************
INCLASS_API UClass* Z_Construct_UClass_AGameHUD_NoRegister();

#define FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_HUB_GameHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INCLASS_API UClass* Z_Construct_UClass_AGameHUD_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/InClass"), Z_Construct_UClass_AGameHUD_NoRegister) \
	DECLARE_SERIALIZER(AGameHUD)


#define FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_HUB_GameHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameHUD(AGameHUD&&) = delete; \
	AGameHUD(const AGameHUD&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameHUD) \
	NO_API virtual ~AGameHUD();


#define FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_HUB_GameHUD_h_13_PROLOG
#define FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_HUB_GameHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_HUB_GameHUD_h_16_INCLASS_NO_PURE_DECLS \
	FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_HUB_GameHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameHUD;

// ********** End Class AGameHUD *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_HUB_GameHUD_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
