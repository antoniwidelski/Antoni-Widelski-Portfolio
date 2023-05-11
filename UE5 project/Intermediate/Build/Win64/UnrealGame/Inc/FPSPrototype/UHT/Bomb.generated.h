// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Bomb.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef FPSPROTOTYPE_Bomb_generated_h
#error "Bomb.generated.h already included, missing '#pragma once' in Bomb.h"
#endif
#define FPSPROTOTYPE_Bomb_generated_h

#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_SPARSE_DATA
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_ACCESSORS
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend struct Z_Construct_UClass_ABomb_Statics; \
public: \
	DECLARE_CLASS(ABomb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSPrototype"), NO_API) \
	DECLARE_SERIALIZER(ABomb)


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABomb(); \
	friend struct Z_Construct_UClass_ABomb_Statics; \
public: \
	DECLARE_CLASS(ABomb, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSPrototype"), NO_API) \
	DECLARE_SERIALIZER(ABomb)


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomb(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomb) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public: \
	NO_API virtual ~ABomb();


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomb(ABomb&&); \
	NO_API ABomb(const ABomb&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomb); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomb); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomb) \
	NO_API virtual ~ABomb();


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_9_PROLOG
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_SPARSE_DATA \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_RPC_WRAPPERS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_ACCESSORS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_INCLASS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_SPARSE_DATA \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_ACCESSORS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_INCLASS_NO_PURE_DECLS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROTOTYPE_API UClass* StaticClass<class ABomb>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Bomb_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
