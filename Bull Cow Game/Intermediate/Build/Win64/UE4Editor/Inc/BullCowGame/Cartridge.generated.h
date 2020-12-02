// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BULLCOWGAME_Cartridge_generated_h
#error "Cartridge.generated.h already included, missing '#pragma once' in Cartridge.h"
#endif
#define BULLCOWGAME_Cartridge_generated_h

#define Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_RPC_WRAPPERS
#define Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCartridge(); \
	friend struct Z_Construct_UClass_UCartridge_Statics; \
public: \
	DECLARE_CLASS(UCartridge, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/BullCowGame"), NO_API) \
	DECLARE_SERIALIZER(UCartridge)


#define Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCartridge(); \
	friend struct Z_Construct_UClass_UCartridge_Statics; \
public: \
	DECLARE_CLASS(UCartridge, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/BullCowGame"), NO_API) \
	DECLARE_SERIALIZER(UCartridge)


#define Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCartridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCartridge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCartridge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCartridge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCartridge(UCartridge&&); \
	NO_API UCartridge(const UCartridge&); \
public:


#define Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCartridge(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCartridge(UCartridge&&); \
	NO_API UCartridge(const UCartridge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCartridge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCartridge); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCartridge)


#define Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_PRIVATE_PROPERTY_OFFSET
#define Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_10_PROLOG
#define Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_PRIVATE_PROPERTY_OFFSET \
	Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_RPC_WRAPPERS \
	Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_INCLASS \
	Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_PRIVATE_PROPERTY_OFFSET \
	Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_INCLASS_NO_PURE_DECLS \
	Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BULLCOWGAME_API UClass* StaticClass<class UCartridge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bull_Cow_Game_Source_BullCowGame_Console_Cartridge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
