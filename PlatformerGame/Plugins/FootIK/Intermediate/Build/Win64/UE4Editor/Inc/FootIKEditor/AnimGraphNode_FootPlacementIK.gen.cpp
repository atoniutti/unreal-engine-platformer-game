// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootIKEditor/Classes/AnimGraphNode_FootPlacementIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_FootPlacementIK() {}
// Cross Module References
	FOOTIKEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_NoRegister();
	FOOTIKEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_FootPlacementIK();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_FootIKEditor();
	FOOTIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK();
// End Cross Module References
	void UAnimGraphNode_FootPlacementIK::StaticRegisterNativesUAnimGraphNode_FootPlacementIK()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_NoRegister()
	{
		return UAnimGraphNode_FootPlacementIK::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_FootIKEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_FootPlacementIK.h" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_FootPlacementIK.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Classes/AnimGraphNode_FootPlacementIK.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::NewProp_Node = { UE4CodeGen_Private::EPropertyClass::Struct, "Node", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(UAnimGraphNode_FootPlacementIK, Node), Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::NewProp_Node_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_FootPlacementIK>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::ClassParams = {
		&UAnimGraphNode_FootPlacementIK::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x000800A0u,
		nullptr, 0,
		Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_FootPlacementIK()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_FootPlacementIK_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_FootPlacementIK, 2292198922);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_FootPlacementIK(Z_Construct_UClass_UAnimGraphNode_FootPlacementIK, &UAnimGraphNode_FootPlacementIK::StaticClass, TEXT("/Script/FootIKEditor"), TEXT("UAnimGraphNode_FootPlacementIK"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_FootPlacementIK);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
