// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_JTF/01_Player_Character/C_Recruit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Recruit() {}
// Cross Module References
	PROJECT_JTF_API UClass* Z_Construct_UClass_AC_Recruit_NoRegister();
	PROJECT_JTF_API UClass* Z_Construct_UClass_AC_Recruit();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Project_JTF();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void AC_Recruit::StaticRegisterNativesAC_Recruit()
	{
	}
	UClass* Z_Construct_UClass_AC_Recruit_NoRegister()
	{
		return AC_Recruit::StaticClass();
	}
	struct Z_Construct_UClass_AC_Recruit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FPMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Recruit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_JTF,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Recruit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "01_Player_Character/C_Recruit.h" },
		{ "ModuleRelativePath", "01_Player_Character/C_Recruit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Recruit_Statics::NewProp_FPCamera_MetaData[] = {
		{ "Category", "C_Recruit" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "01_Player_Character/C_Recruit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Recruit_Statics::NewProp_FPCamera = { "FPCamera", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Recruit, FPCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Recruit_Statics::NewProp_FPCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Recruit_Statics::NewProp_FPCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Recruit_Statics::NewProp_FPMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "01_Player_Character/C_Recruit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_Recruit_Statics::NewProp_FPMesh = { "FPMesh", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AC_Recruit, FPMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AC_Recruit_Statics::NewProp_FPMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Recruit_Statics::NewProp_FPMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_Recruit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Recruit_Statics::NewProp_FPCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_Recruit_Statics::NewProp_FPMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Recruit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Recruit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Recruit_Statics::ClassParams = {
		&AC_Recruit::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC_Recruit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_Recruit_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AC_Recruit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AC_Recruit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Recruit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Recruit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Recruit, 1211598298);
	template<> PROJECT_JTF_API UClass* StaticClass<AC_Recruit>()
	{
		return AC_Recruit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Recruit(Z_Construct_UClass_AC_Recruit, &AC_Recruit::StaticClass, TEXT("/Script/Project_JTF"), TEXT("AC_Recruit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Recruit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
