// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
INCLASS_API UClass* Z_Construct_UClass_AFPSGameMode();
INCLASS_API UClass* Z_Construct_UClass_AFPSGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_InClass();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSGameMode *************************************************************
void AFPSGameMode::StaticRegisterNativesAFPSGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSGameMode;
UClass* AFPSGameMode::GetPrivateStaticClass()
{
	using TClass = AFPSGameMode;
	if (!Z_Registration_Info_UClass_AFPSGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSGameMode"),
			Z_Registration_Info_UClass_AFPSGameMode.InnerSingleton,
			StaticRegisterNativesAFPSGameMode,
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
	return Z_Registration_Info_UClass_AFPSGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSGameMode_NoRegister()
{
	return AFPSGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSGameMode.h" },
		{ "ModuleRelativePath", "Public/FPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSGameMode_Statics::ClassParams = {
	&AFPSGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSGameMode()
{
	if (!Z_Registration_Info_UClass_AFPSGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSGameMode.OuterSingleton, Z_Construct_UClass_AFPSGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSGameMode.OuterSingleton;
}
AFPSGameMode::AFPSGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSGameMode);
AFPSGameMode::~AFPSGameMode() {}
// ********** End Class AFPSGameMode ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_FPSGameMode_h__Script_InClass_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSGameMode, AFPSGameMode::StaticClass, TEXT("AFPSGameMode"), &Z_Registration_Info_UClass_AFPSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSGameMode), 2628314629U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_FPSGameMode_h__Script_InClass_1263370360(TEXT("/Script/InClass"),
	Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_FPSGameMode_h__Script_InClass_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_FPSGameMode_h__Script_InClass_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
