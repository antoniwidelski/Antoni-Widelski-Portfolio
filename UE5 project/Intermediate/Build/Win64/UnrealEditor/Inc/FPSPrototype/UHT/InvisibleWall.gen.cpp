// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPrototype/InvisibleWall.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvisibleWall() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_AInvisibleWall();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_AInvisibleWall_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSPrototype();
// End Cross Module References
	void AInvisibleWall::StaticRegisterNativesAInvisibleWall()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInvisibleWall);
	UClass* Z_Construct_UClass_AInvisibleWall_NoRegister()
	{
		return AInvisibleWall::StaticClass();
	}
	struct Z_Construct_UClass_AInvisibleWall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Box;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInvisibleWall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSPrototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvisibleWall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InvisibleWall.h" },
		{ "ModuleRelativePath", "InvisibleWall.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInvisibleWall_Statics::NewProp_Box_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InvisibleWall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InvisibleWall.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInvisibleWall_Statics::NewProp_Box = { "Box", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInvisibleWall, Box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInvisibleWall_Statics::NewProp_Box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInvisibleWall_Statics::NewProp_Box_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInvisibleWall_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInvisibleWall_Statics::NewProp_Box,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInvisibleWall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInvisibleWall>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInvisibleWall_Statics::ClassParams = {
		&AInvisibleWall::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInvisibleWall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInvisibleWall_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInvisibleWall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInvisibleWall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInvisibleWall()
	{
		if (!Z_Registration_Info_UClass_AInvisibleWall.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInvisibleWall.OuterSingleton, Z_Construct_UClass_AInvisibleWall_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInvisibleWall.OuterSingleton;
	}
	template<> FPSPROTOTYPE_API UClass* StaticClass<AInvisibleWall>()
	{
		return AInvisibleWall::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInvisibleWall);
	AInvisibleWall::~AInvisibleWall() {}
	struct Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_InvisibleWall_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_InvisibleWall_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInvisibleWall, AInvisibleWall::StaticClass, TEXT("AInvisibleWall"), &Z_Registration_Info_UClass_AInvisibleWall, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInvisibleWall), 1161894777U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_InvisibleWall_h_53197430(TEXT("/Script/FPSPrototype"),
		Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_InvisibleWall_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_InvisibleWall_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
