// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HW_05/My_Test_Actor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy_Test_Actor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
HW_05_API UClass* Z_Construct_UClass_AMy_Test_Actor();
HW_05_API UClass* Z_Construct_UClass_AMy_Test_Actor_NoRegister();
UPackage* Z_Construct_UPackage__Script_HW_05();
// End Cross Module References

// Begin Class AMy_Test_Actor
void AMy_Test_Actor::StaticRegisterNativesAMy_Test_Actor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMy_Test_Actor);
UClass* Z_Construct_UClass_AMy_Test_Actor_NoRegister()
{
	return AMy_Test_Actor::StaticClass();
}
struct Z_Construct_UClass_AMy_Test_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "My_Test_Actor.h" },
		{ "ModuleRelativePath", "My_Test_Actor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMy_Test_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMy_Test_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_HW_05,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMy_Test_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMy_Test_Actor_Statics::ClassParams = {
	&AMy_Test_Actor::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMy_Test_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMy_Test_Actor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMy_Test_Actor()
{
	if (!Z_Registration_Info_UClass_AMy_Test_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMy_Test_Actor.OuterSingleton, Z_Construct_UClass_AMy_Test_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMy_Test_Actor.OuterSingleton;
}
template<> HW_05_API UClass* StaticClass<AMy_Test_Actor>()
{
	return AMy_Test_Actor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMy_Test_Actor);
AMy_Test_Actor::~AMy_Test_Actor() {}
// End Class AMy_Test_Actor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Hw05_Source_HW_05_My_Test_Actor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMy_Test_Actor, AMy_Test_Actor::StaticClass, TEXT("AMy_Test_Actor"), &Z_Registration_Info_UClass_AMy_Test_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMy_Test_Actor), 1661527068U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Hw05_Source_HW_05_My_Test_Actor_h_1157342410(TEXT("/Script/HW_05"),
	Z_CompiledInDeferFile_FID_Hw05_Source_HW_05_My_Test_Actor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Hw05_Source_HW_05_My_Test_Actor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
