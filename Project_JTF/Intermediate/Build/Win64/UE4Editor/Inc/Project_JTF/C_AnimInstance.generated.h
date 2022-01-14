// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_JTF_C_AnimInstance_generated_h
#error "C_AnimInstance.generated.h already included, missing '#pragma once' in C_AnimInstance.h"
#endif
#define PROJECT_JTF_C_AnimInstance_generated_h

#define Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_SPARSE_DATA
#define Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_RPC_WRAPPERS
#define Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUC_AnimInstance(); \
	friend struct Z_Construct_UClass_UC_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UC_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Project_JTF"), NO_API) \
	DECLARE_SERIALIZER(UC_AnimInstance)


#define Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUC_AnimInstance(); \
	friend struct Z_Construct_UClass_UC_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UC_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Project_JTF"), NO_API) \
	DECLARE_SERIALIZER(UC_AnimInstance)


#define Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_AnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_AnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_AnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_AnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_AnimInstance(UC_AnimInstance&&); \
	NO_API UC_AnimInstance(const UC_AnimInstance&); \
public:


#define Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC_AnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UC_AnimInstance(UC_AnimInstance&&); \
	NO_API UC_AnimInstance(const UC_AnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC_AnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC_AnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC_AnimInstance)


#define Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__mSpeed() { return STRUCT_OFFSET(UC_AnimInstance, mSpeed); } \
	FORCEINLINE static uint32 __PPO__mDirection() { return STRUCT_OFFSET(UC_AnimInstance, mDirection); } \
	FORCEINLINE static uint32 __PPO__mPitch() { return STRUCT_OFFSET(UC_AnimInstance, mPitch); }


#define Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_7_PROLOG
#define Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_SPARSE_DATA \
	Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_RPC_WRAPPERS \
	Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_INCLASS \
	Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_PRIVATE_PROPERTY_OFFSET \
	Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_SPARSE_DATA \
	Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_INCLASS_NO_PURE_DECLS \
	Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_JTF_API UClass* StaticClass<class UC_AnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_JTF_Source_Project_JTF_01_Player_Character_C_AnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
