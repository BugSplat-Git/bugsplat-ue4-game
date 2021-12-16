// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "BS_AttSetBase.generated.h"


#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * Base Attributes for BugSplat
 */
UCLASS()
class BUGSPLAT_API UBS_AttSetBase : public UAttributeSet
{
	GENERATED_BODY()

public:

	/** Survival */
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, MaxHealth);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, Health);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, MaxStamina);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, Stamina);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData HealthRegen;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, HealthRegen);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData StaminaRegen;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, StaminaRegen);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MoveSpeed;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, MoveSpeed);



	/**  Armor = BaseArmor * IncreasedArmor */
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData BaseArmor;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, BaseArmor);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData IncreasedArmor;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, IncreasedArmor);



	/** FinalDamage = (BaseDamage * IncreasedDamage) * MoreDamage */
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData BaseDamage;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, BaseDamage);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData IncreasedDamage;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, IncreasedDamage);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData MoreDamage;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, MoreDamage);



	/** CriticalStrikeChance = BaseCriticalChance * IncreasedCriticalChance */
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData BaseCriticalChance;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, BaseCriticalChance);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData IncreasedCriticalChance;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, IncreasedCriticalChance);

	/** Crit Multi */
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData BaseCriticalStrikeMultiplier;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, BaseCriticalStrikeMultiplier);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData IncreasedCriticalStrikeMultiplier;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, IncreasedCriticalStrikeMultiplier);



	/** AttackSpeed = BaseAttackSpeed * IncreasedAttackSpeed */
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData BaseAttackSpeed;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, BaseAttackSpeed);

	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData IncreasedAttackSpeed;
	ATTRIBUTE_ACCESSORS(UBS_AttSetBase, IncreasedAttackSpeed);


public:

	/** Override Functions */
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData &Data) override;

};
