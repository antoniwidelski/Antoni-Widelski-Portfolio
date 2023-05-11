// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPrototype/BorderPole.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBorderPole() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_ABorderPole();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_ABorderPole_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSPrototype();
// End Cross Module References
	void ABorderPole::StaticRegisterNativesABorderPole()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABorderPole);
	UClass* Z_Construct_UClass_ABorderPole_NoRegister()
	{
		return ABorderPole::StaticClass();
	}
	struct Z_Construct_UClass_ABorderPole_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABorderPole_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSPrototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABorderPole_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BorderPole.h" },
		{ "ModuleRelativePath", "BorderPole.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABorderPole_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABorderPole>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABorderPole_Statics::ClassParams = {
		&ABorderPole::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABorderPole_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABorderPole_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABorderPole()
	{
		if (!Z_Registration_Info_UClass_ABorderPole.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABorderPole.OuterSingleton, Z_Construct_UClass_ABorderPole_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABorderPole.OuterSingleton;
	}
	template<> FPSPROTOTYPE_API UClass* StaticClass<ABorderPole>()
	{
		return ABorderPole::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABorderPole);
	ABorderPole::~ABorderPole() {}
	struct Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BorderPole_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BorderPole_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABorderPole, ABorderPole::StaticClass, TEXT("ABorderPole"), &Z_Registration_Info_UClass_ABorderPole, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABorderPole), 2232212523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BorderPole_h_2244762136(TEXT("/Script/FPSPrototype"),
		Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BorderPole_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BorderPole_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
