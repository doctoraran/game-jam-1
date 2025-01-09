// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealProject/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCard() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UNREALPROJECT_API UClass* Z_Construct_UClass_UCard();
UNREALPROJECT_API UClass* Z_Construct_UClass_UCard_NoRegister();
UPackage* Z_Construct_UPackage__Script_UnrealProject();
// End Cross Module References

// Begin Class UCard
void UCard::StaticRegisterNativesUCard()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCard);
UClass* Z_Construct_UClass_UCard_NoRegister()
{
	return UCard::StaticClass();
}
struct Z_Construct_UClass_UCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Card.h" },
		{ "ModuleRelativePath", "Card.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_UnrealProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCard_Statics::ClassParams = {
	&UCard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::Class_MetaDataParams), Z_Construct_UClass_UCard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCard()
{
	if (!Z_Registration_Info_UClass_UCard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCard.OuterSingleton, Z_Construct_UClass_UCard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCard.OuterSingleton;
}
template<> UNREALPROJECT_API UClass* StaticClass<UCard>()
{
	return UCard::StaticClass();
}
UCard::UCard(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCard);
UCard::~UCard() {}
// End Class UCard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_U2462878_OneDrive___University_of_Huddersfield_Documents_Git_game_jam_1_UnrealProject_Source_UnrealProject_Card_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCard, UCard::StaticClass, TEXT("UCard"), &Z_Registration_Info_UClass_UCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCard), 2129519466U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_U2462878_OneDrive___University_of_Huddersfield_Documents_Git_game_jam_1_UnrealProject_Source_UnrealProject_Card_h_1724024432(TEXT("/Script/UnrealProject"),
	Z_CompiledInDeferFile_FID_Users_U2462878_OneDrive___University_of_Huddersfield_Documents_Git_game_jam_1_UnrealProject_Source_UnrealProject_Card_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_U2462878_OneDrive___University_of_Huddersfield_Documents_Git_game_jam_1_UnrealProject_Source_UnrealProject_Card_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
