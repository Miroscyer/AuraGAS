// Copyright Miros


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::AuraGameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	AuraGameplayTags.Attribute_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.Armor"), FString("Reduces damage taken, improves Block Chance"));
}
