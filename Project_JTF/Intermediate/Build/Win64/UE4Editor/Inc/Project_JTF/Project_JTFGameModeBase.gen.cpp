// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_JTF/Project_JTFGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_JTFGameModeBase() {}
// Cross Module References
	PROJECT_JTF_API UClass* Z_Construct_UClass_AProject_JTFGameModeBase_NoRegister();
	PROJECT_JTF_API UClass* Z_Construct_UClass_AProject_JTFGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Project_JTF();
// End Cross Module References
	void AProject_JTFGameModeBase::StaticRegisterNativesAProject_JTFGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AProject_JTFGameModeBase_NoRegister()
	{
		return AProject_JTFGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProject_JTFGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject_JTFGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_JTF,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_JTFGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Project_JTFGameModeBase.h" },
		{ "ModuleRelativePath", "Project_JTFGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject_JTFGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_JTFGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProject_JTFGameModeBase_Statics::ClassParams = {
		&AProject_JTFGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AProject_JTFGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProject_JTFGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProject_JTFGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProject_JTFGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProject_JTFGameModeBase, 4168198921);
	template<> PROJECT_JTF_API UClass* StaticClass<AProject_JTFGameModeBase>()
	{
		return AProject_JTFGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_JTFGameModeBase(Z_Construct_UClass_AProject_JTFGameModeBase, &AProject_JTFGameModeBase::StaticClass, TEXT("/Script/Project_JTF"), TEXT("AProject_JTFGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_JTFGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
