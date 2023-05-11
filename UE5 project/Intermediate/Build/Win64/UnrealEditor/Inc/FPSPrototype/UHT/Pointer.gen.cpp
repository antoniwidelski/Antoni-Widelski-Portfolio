// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPrototype/Pointer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_APointer();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_APointer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSPrototype();
// End Cross Module References
	void APointer::StaticRegisterNativesAPointer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APointer);
	UClass* Z_Construct_UClass_APointer_NoRegister()
	{
		return APointer::StaticClass();
	}
	struct Z_Construct_UClass_APointer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APointer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSPrototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Pointer.h" },
		{ "ModuleRelativePath", "Pointer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APointer_Statics::NewProp_Mesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Pointer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pointer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APointer_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0040000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APointer, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APointer_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APointer_Statics::NewProp_Mesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APointer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APointer_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APointer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APointer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APointer_Statics::ClassParams = {
		&APointer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APointer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APointer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APointer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APointer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APointer()
	{
		if (!Z_Registration_Info_UClass_APointer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APointer.OuterSingleton, Z_Construct_UClass_APointer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APointer.OuterSingleton;
	}
	template<> FPSPROTOTYPE_API UClass* StaticClass<APointer>()
	{
		return APointer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APointer);
	APointer::~APointer() {}
	struct Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Pointer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Pointer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APointer, APointer::StaticClass, TEXT("APointer"), &Z_Registration_Info_UClass_APointer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APointer), 3900962463U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Pointer_h_3492389875(TEXT("/Script/FPSPrototype"),
		Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Pointer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Pointer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
