// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_JTF/02_Weapon/W_AssultRifle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeW_AssultRifle() {}
// Cross Module References
	PROJECT_JTF_API UClass* Z_Construct_UClass_AW_AssultRifle_NoRegister();
	PROJECT_JTF_API UClass* Z_Construct_UClass_AW_AssultRifle();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Project_JTF();
// End Cross Module References
	void AW_AssultRifle::StaticRegisterNativesAW_AssultRifle()
	{
	}
	UClass* Z_Construct_UClass_AW_AssultRifle_NoRegister()
	{
		return AW_AssultRifle::StaticClass();
	}
	struct Z_Construct_UClass_AW_AssultRifle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AW_AssultRifle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_JTF,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AW_AssultRifle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "02_Weapon/W_AssultRifle.h" },
		{ "ModuleRelativePath", "02_Weapon/W_AssultRifle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AW_AssultRifle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AW_AssultRifle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AW_AssultRifle_Statics::ClassParams = {
		&AW_AssultRifle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AW_AssultRifle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AW_AssultRifle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AW_AssultRifle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AW_AssultRifle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AW_AssultRifle, 1131237136);
	template<> PROJECT_JTF_API UClass* StaticClass<AW_AssultRifle>()
	{
		return AW_AssultRifle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AW_AssultRifle(Z_Construct_UClass_AW_AssultRifle, &AW_AssultRifle::StaticClass, TEXT("/Script/Project_JTF"), TEXT("AW_AssultRifle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AW_AssultRifle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
