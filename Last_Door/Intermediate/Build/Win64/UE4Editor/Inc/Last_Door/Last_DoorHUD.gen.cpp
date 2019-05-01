// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Last_Door/Last_DoorHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLast_DoorHUD() {}
// Cross Module References
	LAST_DOOR_API UClass* Z_Construct_UClass_ALast_DoorHUD_NoRegister();
	LAST_DOOR_API UClass* Z_Construct_UClass_ALast_DoorHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Last_Door();
// End Cross Module References
	void ALast_DoorHUD::StaticRegisterNativesALast_DoorHUD()
	{
	}
	UClass* Z_Construct_UClass_ALast_DoorHUD_NoRegister()
	{
		return ALast_DoorHUD::StaticClass();
	}
	struct Z_Construct_UClass_ALast_DoorHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALast_DoorHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Last_Door,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALast_DoorHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Last_DoorHUD.h" },
		{ "ModuleRelativePath", "Last_DoorHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALast_DoorHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALast_DoorHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALast_DoorHUD_Statics::ClassParams = {
		&ALast_DoorHUD::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008002ACu,
		nullptr, 0,
		nullptr, 0,
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ALast_DoorHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALast_DoorHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALast_DoorHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALast_DoorHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALast_DoorHUD, 2071548616);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALast_DoorHUD(Z_Construct_UClass_ALast_DoorHUD, &ALast_DoorHUD::StaticClass, TEXT("/Script/Last_Door"), TEXT("ALast_DoorHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALast_DoorHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
