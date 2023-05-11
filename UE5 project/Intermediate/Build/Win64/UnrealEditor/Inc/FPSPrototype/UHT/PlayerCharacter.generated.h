// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSPROTOTYPE_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define FPSPROTOTYPE_PlayerCharacter_generated_h

#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_SPARSE_DATA
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetUACC); \
	DECLARE_FUNCTION(execGetSACT); \
	DECLARE_FUNCTION(execGetFACT); \
	DECLARE_FUNCTION(execGetMACT); \
	DECLARE_FUNCTION(execGetChargingPoints);


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetUACC); \
	DECLARE_FUNCTION(execGetSACT); \
	DECLARE_FUNCTION(execGetFACT); \
	DECLARE_FUNCTION(execGetMACT); \
	DECLARE_FUNCTION(execGetChargingPoints);


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_ACCESSORS
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSPrototype"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSPrototype"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	NO_API virtual ~APlayerCharacter();


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter) \
	NO_API virtual ~APlayerCharacter();


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_7_PROLOG
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_SPARSE_DATA \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_RPC_WRAPPERS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_ACCESSORS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_INCLASS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_SPARSE_DATA \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_ACCESSORS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_INCLASS_NO_PURE_DECLS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROTOTYPE_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
