// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HUB/GameHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameHUD() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AHUD();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
INCLASS_API UClass* Z_Construct_UClass_AGameHUD();
INCLASS_API UClass* Z_Construct_UClass_AGameHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_InClass();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGameHUD *****************************************************************
void AGameHUD::StaticRegisterNativesAGameHUD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGameHUD;
UClass* AGameHUD::GetPrivateStaticClass()
{
	using TClass = AGameHUD;
	if (!Z_Registration_Info_UClass_AGameHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameHUD"),
			Z_Registration_Info_UClass_AGameHUD.InnerSingleton,
			StaticRegisterNativesAGameHUD,
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
	return Z_Registration_Info_UClass_AGameHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameHUD_NoRegister()
{
	return AGameHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUB/GameHUD.h" },
		{ "ModuleRelativePath", "Public/HUB/GameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairTexture_MetaData[] = {
		{ "Category", "GameHUD" },
		{ "ModuleRelativePath", "Public/HUB/GameHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_CrosshairTexture = { "CrosshairTexture", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameHUD, CrosshairTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairTexture_MetaData), NewProp_CrosshairTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_CrosshairTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_InClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameHUD_Statics::ClassParams = {
	&AGameHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameHUD()
{
	if (!Z_Registration_Info_UClass_AGameHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameHUD.OuterSingleton, Z_Construct_UClass_AGameHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameHUD.OuterSingleton;
}
AGameHUD::AGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameHUD);
AGameHUD::~AGameHUD() {}
// ********** End Class AGameHUD *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_HUB_GameHUD_h__Script_InClass_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameHUD, AGameHUD::StaticClass, TEXT("AGameHUD"), &Z_Registration_Info_UClass_AGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameHUD), 2007014895U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_HUB_GameHUD_h__Script_InClass_3937525194(TEXT("/Script/InClass"),
	Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_HUB_GameHUD_h__Script_InClass_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221_Graphic_2_VGP221Winter2026_InClass_InClass_Source_InClass_Public_HUB_GameHUD_h__Script_InClass_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
