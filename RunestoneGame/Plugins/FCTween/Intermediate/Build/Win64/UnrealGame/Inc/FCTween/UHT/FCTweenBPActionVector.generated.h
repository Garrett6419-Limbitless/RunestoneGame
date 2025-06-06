// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Blueprints/FCTweenBPActionVector.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class UFCTweenBPActionVector;
enum class EFCEase : uint8;
#ifdef FCTWEEN_FCTweenBPActionVector_generated_h
#error "FCTweenBPActionVector.generated.h already included, missing '#pragma once' in FCTweenBPActionVector.h"
#endif
#define FCTWEEN_FCTweenBPActionVector_generated_h

#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_9_DELEGATE \
struct _Script_FCTween_eventTweenUpdateVectorOutputPin_Parms \
{ \
	FVector Value; \
}; \
static inline void FTweenUpdateVectorOutputPin_DelegateWrapper(const FMulticastScriptDelegate& TweenUpdateVectorOutputPin, FVector Value) \
{ \
	_Script_FCTween_eventTweenUpdateVectorOutputPin_Parms Parms; \
	Parms.Value=Value; \
	TweenUpdateVectorOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_SPARSE_DATA
#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTweenVectorCustomCurve); \
	DECLARE_FUNCTION(execTweenVector);


#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTweenVectorCustomCurve); \
	DECLARE_FUNCTION(execTweenVector);


#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_ACCESSORS
#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFCTweenBPActionVector(); \
	friend struct Z_Construct_UClass_UFCTweenBPActionVector_Statics; \
public: \
	DECLARE_CLASS(UFCTweenBPActionVector, UFCTweenBPAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), NO_API) \
	DECLARE_SERIALIZER(UFCTweenBPActionVector)


#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUFCTweenBPActionVector(); \
	friend struct Z_Construct_UClass_UFCTweenBPActionVector_Statics; \
public: \
	DECLARE_CLASS(UFCTweenBPActionVector, UFCTweenBPAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FCTween"), NO_API) \
	DECLARE_SERIALIZER(UFCTweenBPActionVector)


#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPActionVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPActionVector) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPActionVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPActionVector); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCTweenBPActionVector(UFCTweenBPActionVector&&); \
	NO_API UFCTweenBPActionVector(const UFCTweenBPActionVector&); \
public: \
	NO_API virtual ~UFCTweenBPActionVector();


#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFCTweenBPActionVector(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFCTweenBPActionVector(UFCTweenBPActionVector&&); \
	NO_API UFCTweenBPActionVector(const UFCTweenBPActionVector&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFCTweenBPActionVector); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFCTweenBPActionVector); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFCTweenBPActionVector) \
	NO_API virtual ~UFCTweenBPActionVector();


#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_11_PROLOG
#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_RPC_WRAPPERS \
	FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_INCLASS \
	FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_SPARSE_DATA \
	FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_ACCESSORS \
	FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FCTWEEN_API UClass* StaticClass<class UFCTweenBPActionVector>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_zombi_Downloads_Minigame_Plugins_FCTween_HostProject_Plugins_FCTween_Source_FCTween_Public_Blueprints_FCTweenBPActionVector_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
