// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSPrototype/BarbarianCharacter.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBarbarianCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_ABarbarianCharacter();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_ABarbarianCharacter_NoRegister();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_AEnemyCharacter();
	FPSPROTOTYPE_API UClass* Z_Construct_UClass_UDamageComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FPSPrototype();
// End Cross Module References
	DEFINE_FUNCTION(ABarbarianCharacter::execOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Comp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Overlap(Z_Param_Comp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABarbarianCharacter::execJumpAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JumpAttack();
		P_NATIVE_END;
	}
	void ABarbarianCharacter::StaticRegisterNativesABarbarianCharacter()
	{
		UClass* Class = ABarbarianCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "JumpAttack", &ABarbarianCharacter::execJumpAttack },
			{ "Overlap", &ABarbarianCharacter::execOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABarbarianCharacter_JumpAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarbarianCharacter_JumpAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BarbarianCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABarbarianCharacter_JumpAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABarbarianCharacter, nullptr, "JumpAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABarbarianCharacter_JumpAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarbarianCharacter_JumpAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABarbarianCharacter_JumpAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABarbarianCharacter_JumpAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics
	{
		struct BarbarianCharacter_eventOverlap_Parms
		{
			UPrimitiveComponent* Comp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Comp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Comp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_Comp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_Comp = { "Comp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BarbarianCharacter_eventOverlap_Parms, Comp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_Comp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_Comp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BarbarianCharacter_eventOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BarbarianCharacter_eventOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BarbarianCharacter_eventOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((BarbarianCharacter_eventOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BarbarianCharacter_eventOverlap_Parms), &Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BarbarianCharacter_eventOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_Comp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BarbarianCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABarbarianCharacter, nullptr, "Overlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::BarbarianCharacter_eventOverlap_Parms), Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABarbarianCharacter_Overlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABarbarianCharacter_Overlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABarbarianCharacter);
	UClass* Z_Construct_UClass_ABarbarianCharacter_NoRegister()
	{
		return ABarbarianCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABarbarianCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_JumpPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlashSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SlashSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABarbarianCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSPrototype,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABarbarianCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABarbarianCharacter_JumpAttack, "JumpAttack" }, // 275370694
		{ &Z_Construct_UFunction_ABarbarianCharacter_Overlap, "Overlap" }, // 2973268586
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarbarianCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BarbarianCharacter.h" },
		{ "ModuleRelativePath", "BarbarianCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_HitBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BarbarianCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BarbarianCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_HitBox = { "HitBox", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarbarianCharacter, HitBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_HitBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_HitBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_DamageComp_MetaData[] = {
		{ "Category", "BarbarianCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BarbarianCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_DamageComp = { "DamageComp", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarbarianCharacter, DamageComp), Z_Construct_UClass_UDamageComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_DamageComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_DamageComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BarbarianCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarbarianCharacter, Damage), METADATA_PARAMS(Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_JumpPower_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BarbarianCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_JumpPower = { "JumpPower", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarbarianCharacter, JumpPower), METADATA_PARAMS(Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_JumpPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_JumpPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_SlashSound_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "BarbarianCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_SlashSound = { "SlashSound", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABarbarianCharacter, SlashSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_SlashSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_SlashSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABarbarianCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_HitBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_DamageComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_JumpPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABarbarianCharacter_Statics::NewProp_SlashSound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABarbarianCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABarbarianCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABarbarianCharacter_Statics::ClassParams = {
		&ABarbarianCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABarbarianCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABarbarianCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABarbarianCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABarbarianCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABarbarianCharacter()
	{
		if (!Z_Registration_Info_UClass_ABarbarianCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABarbarianCharacter.OuterSingleton, Z_Construct_UClass_ABarbarianCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABarbarianCharacter.OuterSingleton;
	}
	template<> FPSPROTOTYPE_API UClass* StaticClass<ABarbarianCharacter>()
	{
		return ABarbarianCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABarbarianCharacter);
	ABarbarianCharacter::~ABarbarianCharacter() {}
	struct Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABarbarianCharacter, ABarbarianCharacter::StaticClass, TEXT("ABarbarianCharacter"), &Z_Registration_Info_UClass_ABarbarianCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABarbarianCharacter), 891153606U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_3875900306(TEXT("/Script/FPSPrototype"),
		Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
