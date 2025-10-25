// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInClass_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_InClass;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_InClass()
	{
		if (!Z_Registration_Info_UPackage__Script_InClass.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/InClass",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x701B9F94,
				0xC981257B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_InClass.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_InClass.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_InClass(Z_Construct_UPackage__Script_InClass, TEXT("/Script/InClass"), Z_Registration_Info_UPackage__Script_InClass, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x701B9F94, 0xC981257B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
