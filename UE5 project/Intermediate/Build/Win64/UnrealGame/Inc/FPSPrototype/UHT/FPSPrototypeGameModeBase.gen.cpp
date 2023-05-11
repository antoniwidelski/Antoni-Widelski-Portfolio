// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPrototype/FPSPrototypeGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSPrototypeGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_AFPSPrototypeGameModeBase();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_AFPSPrototypeGameModeBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSPrototype();
// End Cross Module References
	void AFPSPrototypeGameModeBase::StaticRegisterNativesAFPSPrototypeGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFPSPrototypeGameModeBase);
	UClass* Z_Construct_UClass_AFPSPrototypeGameModeBase_NoRegister()
	{
		return AFPSPrototypeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WinScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WinScreenClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoseScreenClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_LoseScreenClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSPrototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "FPSPrototypeGameModeBase.h" },
		{ "ModuleRelativePath", "FPSPrototypeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::NewProp_WinScreenClass_MetaData[] = {
		{ "Category", "FPSPrototypeGameModeBase" },
		{ "ModuleRelativePath", "FPSPrototypeGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::NewProp_WinScreenClass = { "WinScreenClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFPSPrototypeGameModeBase, WinScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::NewProp_WinScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::NewProp_WinScreenClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::NewProp_LoseScreenClass_MetaData[] = {
		{ "Category", "FPSPrototypeGameModeBase" },
		{ "ModuleRelativePath", "FPSPrototypeGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::NewProp_LoseScreenClass = { "LoseScreenClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFPSPrototypeGameModeBase, LoseScreenClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::NewProp_LoseScreenClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::NewProp_LoseScreenClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::NewProp_WinScreenClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::NewProp_LoseScreenClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSPrototypeGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::ClassParams = {
		&AFPSPrototypeGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSPrototypeGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AFPSPrototypeGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFPSPrototypeGameModeBase.OuterSingleton, Z_Construct_UClass_AFPSPrototypeGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFPSPrototypeGameModeBase.OuterSingleton;
	}
	template<> FPSPROTOTYPE_API UClass* StaticClass<AFPSPrototypeGameModeBase>()
	{
		return AFPSPrototypeGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSPrototypeGameModeBase);
	AFPSPrototypeGameModeBase::~AFPSPrototypeGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_FPSPrototypeGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_FPSPrototypeGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFPSPrototypeGameModeBase, AFPSPrototypeGameModeBase::StaticClass, TEXT("AFPSPrototypeGameModeBase"), &Z_Registration_Info_UClass_AFPSPrototypeGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFPSPrototypeGameModeBase), 1314020347U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_FPSPrototypeGameModeBase_h_1398217931(TEXT("/Script/FPSPrototype"),
		Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_FPSPrototypeGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_FPSPrototypeGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
