// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BarbarianCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPSPROTOTYPE_BarbarianCharacter_generated_h
#error "BarbarianCharacter.generated.h already included, missing '#pragma once' in BarbarianCharacter.h"
#endif
#define FPSPROTOTYPE_BarbarianCharacter_generated_h

#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_SPARSE_DATA
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOverlap); \
	DECLARE_FUNCTION(execJumpAttack);


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOverlap); \
	DECLARE_FUNCTION(execJumpAttack);


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_ACCESSORS
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABarbarianCharacter(); \
	friend struct Z_Construct_UClass_ABarbarianCharacter_Statics; \
public: \
	DECLARE_CLASS(ABarbarianCharacter, AEnemyCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSPrototype"), NO_API) \
	DECLARE_SERIALIZER(ABarbarianCharacter)


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_INCLASS \
private: \
	static void StaticRegisterNativesABarbarianCharacter(); \
	friend struct Z_Construct_UClass_ABarbarianCharacter_Statics; \
public: \
	DECLARE_CLASS(ABarbarianCharacter, AEnemyCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSPrototype"), NO_API) \
	DECLARE_SERIALIZER(ABarbarianCharacter)


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABarbarianCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABarbarianCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarbarianCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarbarianCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarbarianCharacter(ABarbarianCharacter&&); \
	NO_API ABarbarianCharacter(const ABarbarianCharacter&); \
public: \
	NO_API virtual ~ABarbarianCharacter();


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABarbarianCharacter(ABarbarianCharacter&&); \
	NO_API ABarbarianCharacter(const ABarbarianCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABarbarianCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABarbarianCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABarbarianCharacter) \
	NO_API virtual ~ABarbarianCharacter();


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_7_PROLOG
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_SPARSE_DATA \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_RPC_WRAPPERS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_ACCESSORS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_INCLASS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_SPARSE_DATA \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_ACCESSORS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_INCLASS_NO_PURE_DECLS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROTOTYPE_API UClass* StaticClass<class ABarbarianCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_BarbarianCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
