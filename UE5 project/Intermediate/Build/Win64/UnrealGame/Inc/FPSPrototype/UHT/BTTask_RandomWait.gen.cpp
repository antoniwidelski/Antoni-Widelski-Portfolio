// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPrototype/BTTask_RandomWait.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_RandomWait() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_UBTTask_RandomWait();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_UBTTask_RandomWait_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSPrototype();
// End Cross Module References
	void UBTTask_RandomWait::StaticRegisterNativesUBTTask_RandomWait()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_RandomWait);
	UClass* Z_Construct_UClass_UBTTask_RandomWait_NoRegister()
	{
		return UBTTask_RandomWait::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_RandomWait_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_RandomWait_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSPrototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_RandomWait_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_RandomWait.h" },
		{ "ModuleRelativePath", "BTTask_RandomWait.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_RandomWait_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_RandomWait>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_RandomWait_Statics::ClassParams = {
		&UBTTask_RandomWait::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_RandomWait_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_RandomWait_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_RandomWait()
	{
		if (!Z_Registration_Info_UClass_UBTTask_RandomWait.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_RandomWait.OuterSingleton, Z_Construct_UClass_UBTTask_RandomWait_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_RandomWait.OuterSingleton;
	}
	template<> FPSPROTOTYPE_API UClass* StaticClass<UBTTask_RandomWait>()
	{
		return UBTTask_RandomWait::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_RandomWait);
	UBTTask_RandomWait::~UBTTask_RandomWait() {}
	struct Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BTTask_RandomWait_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BTTask_RandomWait_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_RandomWait, UBTTask_RandomWait::StaticClass, TEXT("UBTTask_RandomWait"), &Z_Registration_Info_UClass_UBTTask_RandomWait, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_RandomWait), 2411179463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BTTask_RandomWait_h_3545046607(TEXT("/Script/FPSPrototype"),
		Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BTTask_RandomWait_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BTTask_RandomWait_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
