// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "My_Test_Actor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HW_05_My_Test_Actor_generated_h
#error "My_Test_Actor.generated.h already included, missing '#pragma once' in My_Test_Actor.h"
#endif
#define HW_05_My_Test_Actor_generated_h

#define FID_Hw05_Source_HW_05_My_Test_Actor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMy_Test_Actor(); \
	friend struct Z_Construct_UClass_AMy_Test_Actor_Statics; \
public: \
	DECLARE_CLASS(AMy_Test_Actor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HW_05"), NO_API) \
	DECLARE_SERIALIZER(AMy_Test_Actor)


#define FID_Hw05_Source_HW_05_My_Test_Actor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMy_Test_Actor(AMy_Test_Actor&&); \
	AMy_Test_Actor(const AMy_Test_Actor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy_Test_Actor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy_Test_Actor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMy_Test_Actor) \
	NO_API virtual ~AMy_Test_Actor();


#define FID_Hw05_Source_HW_05_My_Test_Actor_h_9_PROLOG
#define FID_Hw05_Source_HW_05_My_Test_Actor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Hw05_Source_HW_05_My_Test_Actor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Hw05_Source_HW_05_My_Test_Actor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HW_05_API UClass* StaticClass<class AMy_Test_Actor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Hw05_Source_HW_05_My_Test_Actor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
