// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootIKRuntime/Classes/DummyClassForFootIKModule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDummyClassForFootIKModule() {}
// Cross Module References
	FOOTIKRUNTIME_API UClass* Z_Construct_UClass_UDummyClassForFootIKModule_NoRegister();
	FOOTIKRUNTIME_API UClass* Z_Construct_UClass_UDummyClassForFootIKModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_FootIKRuntime();
// End Cross Module References
	void UDummyClassForFootIKModule::StaticRegisterNativesUDummyClassForFootIKModule()
	{
	}
	UClass* Z_Construct_UClass_UDummyClassForFootIKModule_NoRegister()
	{
		return UDummyClassForFootIKModule::StaticClass();
	}
	struct Z_Construct_UClass_UDummyClassForFootIKModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDummyClassForFootIKModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FootIKRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDummyClassForFootIKModule_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DummyClassForFootIKModule.h" },
		{ "ModuleRelativePath", "Classes/DummyClassForFootIKModule.h" },
		{ "ToolTip", "@TODO: This class is a junk class, temporarily required due to a bug in the UnrealHeaderTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDummyClassForFootIKModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDummyClassForFootIKModule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDummyClassForFootIKModule_Statics::ClassParams = {
		&UDummyClassForFootIKModule::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UDummyClassForFootIKModule_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDummyClassForFootIKModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDummyClassForFootIKModule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDummyClassForFootIKModule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDummyClassForFootIKModule, 2972672637);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDummyClassForFootIKModule(Z_Construct_UClass_UDummyClassForFootIKModule, &UDummyClassForFootIKModule::StaticClass, TEXT("/Script/FootIKRuntime"), TEXT("UDummyClassForFootIKModule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDummyClassForFootIKModule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
