// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPrototype/BomberCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberCharacter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_ABomb_NoRegister();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_ABomberCharacter();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_ABomberCharacter_NoRegister();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_AMine_NoRegister();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_APlayerCharacter();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_APointer_NoRegister();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_ASuperBomb_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSPrototype();
// End Cross Module References
	void ABomberCharacter::StaticRegisterNativesABomberCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberCharacter);
	UClass* Z_Construct_UClass_ABomberCharacter_NoRegister()
	{
		return ABomberCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABomberCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponFire_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponFire;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BombClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BombClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LauncherSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LauncherSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceZ_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceXandY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceXandY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UpVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BurstRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BurstRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MineClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_MineClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxMinePlacingRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMinePlacingRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PointerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuperBombClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SuperBombClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABomberCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSPrototype,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BomberCharacter.h" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::NewProp_WeaponFire_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberCharacter_Statics::NewProp_WeaponFire = { "WeaponFire", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABomberCharacter, WeaponFire), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_WeaponFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_WeaponFire_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::NewProp_BombClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat|Bomb" },
		{ "Comment", "//Bomb\n" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
		{ "ToolTip", "Bomb" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberCharacter_Statics::NewProp_BombClass = { "BombClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABomberCharacter, BombClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABomb_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_BombClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_BombClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::NewProp_LauncherSound_MetaData[] = {
		{ "Category", "Combat|Bomb" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABomberCharacter_Statics::NewProp_LauncherSound = { "LauncherSound", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABomberCharacter, LauncherSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_LauncherSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_LauncherSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxDistanceZ_MetaData[] = {
		{ "Category", "Combat|Rocket Jump" },
		{ "Comment", "//RocketJump\n" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
		{ "ToolTip", "RocketJump" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxDistanceZ = { "MaxDistanceZ", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABomberCharacter, MaxDistanceZ), METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxDistanceZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxDistanceZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxDistanceXandY_MetaData[] = {
		{ "Category", "Combat|Rocket Jump" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxDistanceXandY = { "MaxDistanceXandY", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABomberCharacter, MaxDistanceXandY), METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxDistanceXandY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxDistanceXandY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::NewProp_UpVelocity_MetaData[] = {
		{ "Category", "Combat|Rocket Jump" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberCharacter_Statics::NewProp_UpVelocity = { "UpVelocity", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABomberCharacter, UpVelocity), METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_UpVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_UpVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::NewProp_BurstRate_MetaData[] = {
		{ "Category", "Combat|Burst" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberCharacter_Statics::NewProp_BurstRate = { "BurstRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABomberCharacter, BurstRate), METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_BurstRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_BurstRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MineClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat|Mine" },
		{ "Comment", "//Mine\n" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
		{ "ToolTip", "Mine" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MineClass = { "MineClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABomberCharacter, MineClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AMine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MineClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MineClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxMinePlacingRange_MetaData[] = {
		{ "Category", "Combat|Mine" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxMinePlacingRange = { "MaxMinePlacingRange", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABomberCharacter, MaxMinePlacingRange), METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxMinePlacingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxMinePlacingRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::NewProp_PointerClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat|SuperBomb" },
		{ "Comment", "//SuperBomb\n" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
		{ "ToolTip", "SuperBomb" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberCharacter_Statics::NewProp_PointerClass = { "PointerClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABomberCharacter, PointerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APointer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_PointerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_PointerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABomberCharacter_Statics::NewProp_SuperBombClass_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat|SuperBomb" },
		{ "ModuleRelativePath", "BomberCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABomberCharacter_Statics::NewProp_SuperBombClass = { "SuperBombClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABomberCharacter, SuperBombClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ASuperBomb_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_SuperBombClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::NewProp_SuperBombClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABomberCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberCharacter_Statics::NewProp_WeaponFire,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberCharacter_Statics::NewProp_BombClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberCharacter_Statics::NewProp_LauncherSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxDistanceZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxDistanceXandY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberCharacter_Statics::NewProp_UpVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberCharacter_Statics::NewProp_BurstRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MineClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberCharacter_Statics::NewProp_MaxMinePlacingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberCharacter_Statics::NewProp_PointerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABomberCharacter_Statics::NewProp_SuperBombClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABomberCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberCharacter_Statics::ClassParams = {
		&ABomberCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABomberCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABomberCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABomberCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABomberCharacter()
	{
		if (!Z_Registration_Info_UClass_ABomberCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberCharacter.OuterSingleton, Z_Construct_UClass_ABomberCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABomberCharacter.OuterSingleton;
	}
	template<> FPSPROTOTYPE_API UClass* StaticClass<ABomberCharacter>()
	{
		return ABomberCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberCharacter);
	ABomberCharacter::~ABomberCharacter() {}
	struct Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BomberCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BomberCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABomberCharacter, ABomberCharacter::StaticClass, TEXT("ABomberCharacter"), &Z_Registration_Info_UClass_ABomberCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberCharacter), 1058484634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BomberCharacter_h_510890225(TEXT("/Script/FPSPrototype"),
		Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BomberCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BomberCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
