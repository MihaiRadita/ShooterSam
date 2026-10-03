// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyBTTask_ClearBlackBoardValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyBTTask_ClearBlackBoardValue() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
SHOOTERSAM_API UClass* Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue();
SHOOTERSAM_API UClass* Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShooterSam();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyBTTask_ClearBlackBoardValue *******************************************
void UMyBTTask_ClearBlackBoardValue::StaticRegisterNativesUMyBTTask_ClearBlackBoardValue()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyBTTask_ClearBlackBoardValue;
UClass* UMyBTTask_ClearBlackBoardValue::GetPrivateStaticClass()
{
	using TClass = UMyBTTask_ClearBlackBoardValue;
	if (!Z_Registration_Info_UClass_UMyBTTask_ClearBlackBoardValue.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyBTTask_ClearBlackBoardValue"),
			Z_Registration_Info_UClass_UMyBTTask_ClearBlackBoardValue.InnerSingleton,
			StaticRegisterNativesUMyBTTask_ClearBlackBoardValue,
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
	return Z_Registration_Info_UClass_UMyBTTask_ClearBlackBoardValue.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue_NoRegister()
{
	return UMyBTTask_ClearBlackBoardValue::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyBTTask_ClearBlackBoardValue.h" },
		{ "ModuleRelativePath", "MyBTTask_ClearBlackBoardValue.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyBTTask_ClearBlackBoardValue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ShooterSam,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue_Statics::ClassParams = {
	&UMyBTTask_ClearBlackBoardValue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue()
{
	if (!Z_Registration_Info_UClass_UMyBTTask_ClearBlackBoardValue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyBTTask_ClearBlackBoardValue.OuterSingleton, Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyBTTask_ClearBlackBoardValue.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyBTTask_ClearBlackBoardValue);
UMyBTTask_ClearBlackBoardValue::~UMyBTTask_ClearBlackBoardValue() {}
// ********** End Class UMyBTTask_ClearBlackBoardValue *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_MyBTTask_ClearBlackBoardValue_h__Script_ShooterSam_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyBTTask_ClearBlackBoardValue, UMyBTTask_ClearBlackBoardValue::StaticClass, TEXT("UMyBTTask_ClearBlackBoardValue"), &Z_Registration_Info_UClass_UMyBTTask_ClearBlackBoardValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyBTTask_ClearBlackBoardValue), 185492171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_MyBTTask_ClearBlackBoardValue_h__Script_ShooterSam_2522480523(TEXT("/Script/ShooterSam"),
	Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_MyBTTask_ClearBlackBoardValue_h__Script_ShooterSam_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShooterSam_Source_ShooterSam_MyBTTask_ClearBlackBoardValue_h__Script_ShooterSam_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
