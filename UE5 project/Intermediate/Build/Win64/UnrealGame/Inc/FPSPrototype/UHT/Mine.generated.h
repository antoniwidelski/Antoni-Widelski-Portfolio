// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Mine.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class UDamageType;
#ifdef FPSPROTOTYPE_Mine_generated_h
#error "Mine.generated.h already included, missing '#pragma once' in Mine.h"
#endif
#define FPSPROTOTYPE_Mine_generated_h

#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_SPARSE_DATA
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageTaken);


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageTaken);


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_ACCESSORS
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_CALLBACK_WRAPPERS
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMine(); \
	friend struct Z_Construct_UClass_AMine_Statics; \
public: \
	DECLARE_CLASS(AMine, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMine)


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAMine(); \
	friend struct Z_Construct_UClass_AMine_Statics; \
public: \
	DECLARE_CLASS(AMine, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSPrototype"), NO_API) \
	DECLARE_SERIALIZER(AMine)


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMine(AMine&&); \
	NO_API AMine(const AMine&); \
public: \
	NO_API virtual ~AMine();


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMine(AMine&&); \
	NO_API AMine(const AMine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMine); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMine) \
	NO_API virtual ~AMine();


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_8_PROLOG
#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_SPARSE_DATA \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_RPC_WRAPPERS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_ACCESSORS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_CALLBACK_WRAPPERS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_INCLASS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_SPARSE_DATA \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_ACCESSORS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_CALLBACK_WRAPPERS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_INCLASS_NO_PURE_DECLS \
	FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSPROTOTYPE_API UClass* StaticClass<class AMine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_nauka_FPSPrototype_Source_FPSPrototype_Mine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
