// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef LAST_DOOR_Last_DoorProjectile_generated_h
#error "Last_DoorProjectile.generated.h already included, missing '#pragma once' in Last_DoorProjectile.h"
#endif
#define LAST_DOOR_Last_DoorProjectile_generated_h

#define Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALast_DoorProjectile(); \
	friend struct Z_Construct_UClass_ALast_DoorProjectile_Statics; \
public: \
	DECLARE_CLASS(ALast_DoorProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Last_Door"), NO_API) \
	DECLARE_SERIALIZER(ALast_DoorProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALast_DoorProjectile(); \
	friend struct Z_Construct_UClass_ALast_DoorProjectile_Statics; \
public: \
	DECLARE_CLASS(ALast_DoorProjectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Last_Door"), NO_API) \
	DECLARE_SERIALIZER(ALast_DoorProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALast_DoorProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALast_DoorProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALast_DoorProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALast_DoorProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALast_DoorProjectile(ALast_DoorProjectile&&); \
	NO_API ALast_DoorProjectile(const ALast_DoorProjectile&); \
public:


#define Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALast_DoorProjectile(ALast_DoorProjectile&&); \
	NO_API ALast_DoorProjectile(const ALast_DoorProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALast_DoorProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALast_DoorProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALast_DoorProjectile)


#define Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ALast_DoorProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ALast_DoorProjectile, ProjectileMovement); }


#define Last_Door_Source_Last_Door_Last_DoorProjectile_h_9_PROLOG
#define Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_RPC_WRAPPERS \
	Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_INCLASS \
	Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_INCLASS_NO_PURE_DECLS \
	Last_Door_Source_Last_Door_Last_DoorProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Last_Door_Source_Last_Door_Last_DoorProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
