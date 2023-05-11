// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPrototype/DamageComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_UDamageComponent();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_UDamageComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSPrototype();
// End Cross Module References
	void UDamageComponent::StaticRegisterNativesUDamageComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageComponent);
	UClass* Z_Construct_UClass_UDamageComponent_NoRegister()
	{
		return UDamageComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDamageComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSPrototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DamageComponent.h" },
		{ "ModuleRelativePath", "DamageComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageComponent_Statics::ClassParams = {
		&UDamageComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageComponent()
	{
		if (!Z_Registration_Info_UClass_UDamageComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageComponent.OuterSingleton, Z_Construct_UClass_UDamageComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageComponent.OuterSingleton;
	}
	template<> FPSPROTOTYPE_API UClass* StaticClass<UDamageComponent>()
	{
		return UDamageComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageComponent);
	UDamageComponent::~UDamageComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_DamageComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_DamageComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageComponent, UDamageComponent::StaticClass, TEXT("UDamageComponent"), &Z_Registration_Info_UClass_UDamageComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageComponent), 3015246280U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_DamageComponent_h_337829054(TEXT("/Script/FPSPrototype"),
		Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_DamageComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_DamageComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
