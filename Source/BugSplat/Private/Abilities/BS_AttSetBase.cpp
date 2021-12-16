// Fill out your copyright notice in the Description page of Project Settings.

#include "Abilities/BS_AttSetBase.h"
#include "GameplayEffectExtension.h"


/** Clamping stuff */
void UBS_AttSetBase::PostGameplayEffectExecute(const FGameplayEffectModCallbackData &Data)
{
	//Max Health
	if (Data.EvaluatedData.Attribute == GetMaxHealthAttribute())
	{
		SetMaxHealth(FMath::Max(GetMaxHealth(), 0.f));
	}

	//Max Stamina
	if (Data.EvaluatedData.Attribute == GetMaxStaminaAttribute())
	{
		SetMaxStamina(FMath::Max(GetMaxStamina(), 0.f));
	}

	//Health
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
	}
	//Stamina
	if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
	{
		SetStamina(FMath::Clamp(GetStamina(), 0.f, GetMaxStamina()));
	}
}
