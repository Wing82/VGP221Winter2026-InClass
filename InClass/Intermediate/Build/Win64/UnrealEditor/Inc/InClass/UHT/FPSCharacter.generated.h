// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/FPSCharacter.h"

#ifdef INCLASS_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define INCLASS_FPSCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AFPSCharacter ************************************************************
#define FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndJump); \
	DECLARE_FUNCTION(execStartJump); \
	DECLARE_FUNCTION(execMoveRightTest); \
	DECLARE_FUNCTION(execMoveForwardTest);


INCLASS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();

#define FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INCLASS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InClass"), Z_Construct_UClass_AFPSCharacter_NoRegister) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AFPSCharacter(AFPSCharacter&&) = delete; \
	AFPSCharacter(const AFPSCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter) \
	NO_API virtual ~AFPSCharacter();


#define FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h_9_PROLOG
#define FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AFPSCharacter;

// ********** End Class AFPSCharacter **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
