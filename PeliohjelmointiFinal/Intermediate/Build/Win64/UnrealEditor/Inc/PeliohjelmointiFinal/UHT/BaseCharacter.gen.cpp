// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PeliohjelmointiFinal/BaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
PELIOHJELMOINTIFINAL_API UClass* Z_Construct_UClass_ABaseCharacter();
PELIOHJELMOINTIFINAL_API UClass* Z_Construct_UClass_ABaseCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_PeliohjelmointiFinal();
// End Cross Module References

// Begin Class ABaseCharacter Function HealthCalc
struct Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics
{
	struct BaseCharacter_eventHealthCalc_Parms
	{
		float delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BaseCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Step 5: Expose a method\n" },
#endif
		{ "ModuleRelativePath", "BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Step 5: Expose a method" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseCharacter_eventHealthCalc_Parms, delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::NewProp_delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABaseCharacter, nullptr, "HealthCalc", nullptr, nullptr, Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::BaseCharacter_eventHealthCalc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::BaseCharacter_eventHealthCalc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABaseCharacter_HealthCalc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABaseCharacter_HealthCalc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABaseCharacter::execHealthCalc)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HealthCalc(Z_Param_delta);
	P_NATIVE_END;
}
// End Class ABaseCharacter Function HealthCalc

// Begin Class ABaseCharacter
void ABaseCharacter::StaticRegisterNativesABaseCharacter()
{
	UClass* Class = ABaseCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HealthCalc", &ABaseCharacter::execHealthCalc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseCharacter);
UClass* Z_Construct_UClass_ABaseCharacter_NoRegister()
{
	return ABaseCharacter::StaticClass();
}
struct Z_Construct_UClass_ABaseCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BaseCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BaseCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "BaseCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Step 2: Expose a float property\n" },
#endif
		{ "ModuleRelativePath", "BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Step 2: Expose a float property" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[] = {
		{ "Category", "BaseCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Step 3: Expose a boolean property\n" },
#endif
		{ "ModuleRelativePath", "BaseCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Step 3: Expose a boolean property" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static void NewProp_isDead_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABaseCharacter_HealthCalc, "HealthCalc" }, // 4084373405
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABaseCharacter, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
void Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isDead_SetBit(void* Obj)
{
	((ABaseCharacter*)Obj)->isDead = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABaseCharacter), &Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isDead_MetaData), NewProp_isDead_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseCharacter_Statics::NewProp_isDead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_PeliohjelmointiFinal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseCharacter_Statics::ClassParams = {
	&ABaseCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABaseCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseCharacter()
{
	if (!Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton, Z_Construct_UClass_ABaseCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseCharacter.OuterSingleton;
}
template<> PELIOHJELMOINTIFINAL_API UClass* StaticClass<ABaseCharacter>()
{
	return ABaseCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseCharacter);
ABaseCharacter::~ABaseCharacter() {}
// End Class ABaseCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Peliohjelmointi_UE_TwinStick_UE_TwinStick_PeliohjelmointiFinal_Source_PeliohjelmointiFinal_BaseCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseCharacter, ABaseCharacter::StaticClass, TEXT("ABaseCharacter"), &Z_Registration_Info_UClass_ABaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseCharacter), 2611046008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Peliohjelmointi_UE_TwinStick_UE_TwinStick_PeliohjelmointiFinal_Source_PeliohjelmointiFinal_BaseCharacter_h_2700971491(TEXT("/Script/PeliohjelmointiFinal"),
	Z_CompiledInDeferFile_FID_Peliohjelmointi_UE_TwinStick_UE_TwinStick_PeliohjelmointiFinal_Source_PeliohjelmointiFinal_BaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Peliohjelmointi_UE_TwinStick_UE_TwinStick_PeliohjelmointiFinal_Source_PeliohjelmointiFinal_BaseCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
