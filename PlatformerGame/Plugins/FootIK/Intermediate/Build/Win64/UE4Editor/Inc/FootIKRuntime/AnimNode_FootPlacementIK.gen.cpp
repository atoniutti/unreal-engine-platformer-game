// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FootIKRuntime/Classes/AnimNode_FootPlacementIK.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_FootPlacementIK() {}
// Cross Module References
	FOOTIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK();
	UPackage* Z_Construct_UPackage__Script_FootIKRuntime();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
// End Cross Module References
class UScriptStruct* FAnimNode_FootPlacementIK::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FOOTIKRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK, Z_Construct_UPackage__Script_FootIKRuntime(), TEXT("AnimNode_FootPlacementIK"), sizeof(FAnimNode_FootPlacementIK), Get_Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_FootPlacementIK(FAnimNode_FootPlacementIK::StaticStruct, TEXT("/Script/FootIKRuntime"), TEXT("AnimNode_FootPlacementIK"), false, nullptr, nullptr);
static struct FScriptStruct_FootIKRuntime_StaticRegisterNativesFAnimNode_FootPlacementIK
{
	FScriptStruct_FootIKRuntime_StaticRegisterNativesFAnimNode_FootPlacementIK()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimNode_FootPlacementIK")),new UScriptStruct::TCppStructOps<FAnimNode_FootPlacementIK>);
	}
} ScriptStruct_FootIKRuntime_StaticRegisterNativesFAnimNode_FootPlacementIK;
	struct Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitZOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitZOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StretchLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StretchLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowStretching_MetaData[];
#endif
		static void NewProp_bAllowStretching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowStretching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTargetSpaceBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_JointTargetSpaceBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTargetLocationSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_JointTargetLocationSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JointTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JointTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IKBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IKBone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AnimNode_FootPlacementIK.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_FootPlacementIK>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Classes/AnimNode_FootPlacementIK.h" },
		{ "ToolTip", "time to blend in/out node's influence" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_BlendTime = { UE4CodeGen_Private::EPropertyClass::Float, "BlendTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacementIK, BlendTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_BlendTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_HitZOffset_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Classes/AnimNode_FootPlacementIK.h" },
		{ "ToolTip", "Z offset from hit point, to correct effector location" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_HitZOffset = { UE4CodeGen_Private::EPropertyClass::Float, "HitZOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacementIK, HitZOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_HitZOffset_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_HitZOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_StretchLimits_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Classes/AnimNode_FootPlacementIK.h" },
		{ "ToolTip", "limits for bone stretching" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_StretchLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "StretchLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacementIK, StretchLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_StretchLimits_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_StretchLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_bAllowStretching_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Classes/AnimNode_FootPlacementIK.h" },
		{ "ToolTip", "if set, node can stretch as much as possible, bone to catch effector location" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_bAllowStretching_SetBit(void* Obj)
	{
		((FAnimNode_FootPlacementIK*)Obj)->bAllowStretching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_bAllowStretching = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowStretching", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, sizeof(uint8), UE4CodeGen_Private::ENativeBool::NotNative, sizeof(FAnimNode_FootPlacementIK), &Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_bAllowStretching_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_bAllowStretching_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_bAllowStretching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetSpaceBoneName_MetaData[] = {
		{ "Category", "JointTarget" },
		{ "ModuleRelativePath", "Classes/AnimNode_FootPlacementIK.h" },
		{ "ToolTip", "If EffectorLocationSpace is a bone, this is the bone to use. *" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetSpaceBoneName = { UE4CodeGen_Private::EPropertyClass::Name, "JointTargetSpaceBoneName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacementIK, JointTargetSpaceBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetSpaceBoneName_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetSpaceBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetLocationSpace_MetaData[] = {
		{ "Category", "JointTarget" },
		{ "ModuleRelativePath", "Classes/AnimNode_FootPlacementIK.h" },
		{ "ToolTip", "Reference frame of Effector Location." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetLocationSpace = { UE4CodeGen_Private::EPropertyClass::Byte, "JointTargetLocationSpace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacementIK, JointTargetLocationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetLocationSpace_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetLocationSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetLocation_MetaData[] = {
		{ "Category", "JointTarget" },
		{ "ModuleRelativePath", "Classes/AnimNode_FootPlacementIK.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Effector Location. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "JointTargetLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacementIK, JointTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_IKBone_MetaData[] = {
		{ "Category", "IK" },
		{ "ModuleRelativePath", "Classes/AnimNode_FootPlacementIK.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_IKBone = { UE4CodeGen_Private::EPropertyClass::Struct, "IKBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(FAnimNode_FootPlacementIK, IKBone), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_IKBone_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_IKBone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_HitZOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_StretchLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_bAllowStretching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetSpaceBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetLocationSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_JointTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::NewProp_IKBone,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FootIKRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_FootPlacementIK",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		sizeof(FAnimNode_FootPlacementIK),
		alignof(FAnimNode_FootPlacementIK),
		Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_FootIKRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_FootPlacementIK"), sizeof(FAnimNode_FootPlacementIK), Get_Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_FootPlacementIK_CRC() { return 602153001U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
