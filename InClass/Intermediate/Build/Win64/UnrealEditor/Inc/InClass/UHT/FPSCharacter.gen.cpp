// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/FPSCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
INCLASS_API UClass* Z_Construct_UClass_AFPSCharacter();
INCLASS_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_InClass();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AFPSCharacter Function EndJump *******************************************
struct Z_Construct_UFunction_AFPSCharacter_EndJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "EndJump", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_EndJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_EndJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execEndJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndJump();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function EndJump *********************************************

// ********** Begin Class AFPSCharacter Function MoveForwardTest ***********************************
struct Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics
{
	struct FPSCharacter_eventMoveForwardTest_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventMoveForwardTest_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "MoveForwardTest", Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::FPSCharacter_eventMoveForwardTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::FPSCharacter_eventMoveForwardTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_MoveForwardTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveForwardTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execMoveForwardTest)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveForwardTest(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function MoveForwardTest *************************************

// ********** Begin Class AFPSCharacter Function MoveRightTest *************************************
struct Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics
{
	struct FPSCharacter_eventMoveRightTest_Parms
	{
		float value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPSCharacter_eventMoveRightTest_Parms, value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "MoveRightTest", Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::FPSCharacter_eventMoveRightTest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::FPSCharacter_eventMoveRightTest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFPSCharacter_MoveRightTest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_MoveRightTest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execMoveRightTest)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MoveRightTest(Z_Param_value);
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function MoveRightTest ***************************************

// ********** Begin Class AFPSCharacter Function StartJump *****************************************
struct Z_Construct_UFunction_AFPSCharacter_StartJump_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "StartJump", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AFPSCharacter_StartJump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFPSCharacter_StartJump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFPSCharacter::execStartJump)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartJump();
	P_NATIVE_END;
}
// ********** End Class AFPSCharacter Function StartJump *******************************************

// ********** Begin Class AFPSCharacter ************************************************************
void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
{
	UClass* Class = AFPSCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EndJump", &AFPSCharacter::execEndJump },
		{ "MoveForwardTest", &AFPSCharacter::execMoveForwardTest },
		{ "MoveRightTest", &AFPSCharacter::execMoveRightTest },
		{ "StartJump", &AFPSCharacter::execStartJump },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AFPSCharacter;
UClass* AFPSCharacter::GetPrivateStaticClass()
{
	using TClass = AFPSCharacter;
	if (!Z_Registration_Info_UClass_AFPSCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("FPSCharacter"),
			Z_Registration_Info_UClass_AFPSCharacter.InnerSingleton,
			StaticRegisterNativesAFPSCharacter,
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
	return Z_Registration_Info_UClass_AFPSCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
{
	return AFPSCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AFPSCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/FPSCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/FPSCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_EndJump, "EndJump" }, // 2189433000
		{ &Z_Construct_UFunction_AFPSCharacter_MoveForwardTest, "MoveForwardTest" }, // 28215217
		{ &Z_Construct_UFunction_AFPSCharacter_MoveRightTest, "MoveRightTest" }, // 1887396389
		{ &Z_Construct_UFunction_AFPSCharacter_StartJump, "StartJump" }, // 3893168374
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_InClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
	&AFPSCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFPSCharacter()
{
	if (!Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFPSCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
AFPSCharacter::~AFPSCharacter() {}
// ********** End Class AFPSCharacter **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h__Script_InClass_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFPSCharacter, AFPSCharacter::StaticClass, TEXT("AFPSCharacter"), &Z_Registration_Info_UClass_AFPSCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSCharacter), 3249587407U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h__Script_InClass_1748387951(TEXT("/Script/InClass"),
	Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h__Script_InClass_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_chinw_Documents_TFS_Term_5_VGP221Winter2026_InClass_InClass_Source_InClass_Public_Player_FPSCharacter_h__Script_InClass_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
