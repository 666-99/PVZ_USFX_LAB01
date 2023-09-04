// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB01/Zombi.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombi() {}
// Cross Module References
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombi_NoRegister();
	PVZ_USFX_LAB01_API UClass* Z_Construct_UClass_AZombi();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB01();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AZombi::StaticRegisterNativesAZombi()
	{
	}
	UClass* Z_Construct_UClass_AZombi_NoRegister()
	{
		return AZombi::StaticClass();
	}
	struct Z_Construct_UClass_AZombi_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZombiMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ZombiMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombi_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB01,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombi_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Zombi.h" },
		{ "ModuleRelativePath", "Zombi.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombi_Statics::NewProp_ZombiMesh_MetaData[] = {
		{ "Category", "Zombi" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Zombi.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombi_Statics::NewProp_ZombiMesh = { "ZombiMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombi, ZombiMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AZombi_Statics::NewProp_ZombiMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombi_Statics::NewProp_ZombiMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombi_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombi_Statics::NewProp_ZombiMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombi_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombi>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombi_Statics::ClassParams = {
		&AZombi::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AZombi_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombi_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AZombi_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombi_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombi()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombi_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombi, 2060220639);
	template<> PVZ_USFX_LAB01_API UClass* StaticClass<AZombi>()
	{
		return AZombi::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombi(Z_Construct_UClass_AZombi, &AZombi::StaticClass, TEXT("/Script/PVZ_USFX_LAB01"), TEXT("AZombi"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombi);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
