// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPrototype/MageCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMageCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_ABorderPole_NoRegister();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_AEnemyCharacter();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_AMageCharacter();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_AMageCharacter_NoRegister();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_AMagicBall_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSPrototype();
// End Cross Module References
	DEFINE_FUNCTION(AMageCharacter::execSpawnMagicBall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnMagicBall();
		P_NATIVE_END;
	}
	void AMageCharacter::StaticRegisterNativesAMageCharacter()
	{
		UClass* Class = AMageCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnMagicBall", &AMageCharacter::execSpawnMagicBall },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMageCharacter_SpawnMagicBall_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMageCharacter_SpawnMagicBall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MageCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMageCharacter_SpawnMagicBall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMageCharacter, nullptr, "SpawnMagicBall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMageCharacter_SpawnMagicBall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMageCharacter_SpawnMagicBall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMageCharacter_SpawnMagicBall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMageCharacter_SpawnMagicBall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMageCharacter);
	UClass* Z_Construct_UClass_AMageCharacter_NoRegister()
	{
		return AMageCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMageCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BallSpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BallSpawnPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MagicBallClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MagicBallClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BorderPoleClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BorderPoleClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TeleportSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMageCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSPrototype,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMageCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMageCharacter_SpawnMagicBall, "SpawnMagicBall" }, // 1102901608
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MageCharacter.h" },
		{ "ModuleRelativePath", "MageCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageCharacter_Statics::NewProp_BallSpawnPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MageCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MageCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMageCharacter_Statics::NewProp_BallSpawnPoint = { "BallSpawnPoint", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMageCharacter, BallSpawnPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMageCharacter_Statics::NewProp_BallSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMageCharacter_Statics::NewProp_BallSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageCharacter_Statics::NewProp_MagicBallClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MageCharacter" },
		{ "ModuleRelativePath", "MageCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMageCharacter_Statics::NewProp_MagicBallClass = { "MagicBallClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMageCharacter, MagicBallClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMagicBall_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMageCharacter_Statics::NewProp_MagicBallClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMageCharacter_Statics::NewProp_MagicBallClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageCharacter_Statics::NewProp_BorderPoleClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MageCharacter" },
		{ "ModuleRelativePath", "MageCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMageCharacter_Statics::NewProp_BorderPoleClass = { "BorderPoleClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMageCharacter, BorderPoleClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABorderPole_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMageCharacter_Statics::NewProp_BorderPoleClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMageCharacter_Statics::NewProp_BorderPoleClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMageCharacter_Statics::NewProp_TeleportSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "MageCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMageCharacter_Statics::NewProp_TeleportSound = { "TeleportSound", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMageCharacter, TeleportSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMageCharacter_Statics::NewProp_TeleportSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMageCharacter_Statics::NewProp_TeleportSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMageCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageCharacter_Statics::NewProp_BallSpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageCharacter_Statics::NewProp_MagicBallClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageCharacter_Statics::NewProp_BorderPoleClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMageCharacter_Statics::NewProp_TeleportSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMageCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMageCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMageCharacter_Statics::ClassParams = {
		&AMageCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMageCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMageCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMageCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMageCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMageCharacter()
	{
		if (!Z_Registration_Info_UClass_AMageCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMageCharacter.OuterSingleton, Z_Construct_UClass_AMageCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMageCharacter.OuterSingleton;
	}
	template<> FPSPROTOTYPE_API UClass* StaticClass<AMageCharacter>()
	{
		return AMageCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMageCharacter);
	AMageCharacter::~AMageCharacter() {}
	struct Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_MageCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_MageCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMageCharacter, AMageCharacter::StaticClass, TEXT("AMageCharacter"), &Z_Registration_Info_UClass_AMageCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMageCharacter), 3789615041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_MageCharacter_h_3712968261(TEXT("/Script/FPSPrototype"),
		Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_MageCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_MageCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
