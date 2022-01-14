// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_JTF/01_Player_Character/C_AnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_AnimInstance() {}
// Cross Module References
	PROJECT_JTF_API UClass* Z_Construct_UClass_UC_AnimInstance_NoRegister();
	PROJECT_JTF_API UClass* Z_Construct_UClass_UC_AnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Project_JTF();
// End Cross Module References
	void UC_AnimInstance::StaticRegisterNativesUC_AnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UC_AnimInstance_NoRegister()
	{
		return UC_AnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UC_AnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mPitch_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mPitch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UC_AnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_JTF,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_AnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "01_Player_Character/C_AnimInstance.h" },
		{ "ModuleRelativePath", "01_Player_Character/C_AnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mSpeed_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "01_Player_Character/C_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mSpeed = { "mSpeed", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_AnimInstance, mSpeed), METADATA_PARAMS(Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mDirection_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "01_Player_Character/C_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mDirection = { "mDirection", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_AnimInstance, mDirection), METADATA_PARAMS(Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mPitch_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "01_Player_Character/C_AnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mPitch = { "mPitch", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UC_AnimInstance, mPitch), METADATA_PARAMS(Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mPitch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UC_AnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UC_AnimInstance_Statics::NewProp_mPitch,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UC_AnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC_AnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UC_AnimInstance_Statics::ClassParams = {
		&UC_AnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UC_AnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UC_AnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UC_AnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UC_AnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UC_AnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UC_AnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UC_AnimInstance, 1531689467);
	template<> PROJECT_JTF_API UClass* StaticClass<UC_AnimInstance>()
	{
		return UC_AnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UC_AnimInstance(Z_Construct_UClass_UC_AnimInstance, &UC_AnimInstance::StaticClass, TEXT("/Script/Project_JTF"), TEXT("UC_AnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UC_AnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
