// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "BS_Character.generated.h"

UCLASS()
class BUGSPLAT_API ABS_Character : public ACharacter , public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABS_Character();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	UPROPERTY(BlueprintReadOnly)
	class UBS_ASComponent* MyASComp;

	UPROPERTY(BlueprintReadOnly)
	class UBS_AttSetBase* MyAttributes;

	virtual void Falling() override;

	UFUNCTION(BlueprintImplementableEvent)
	void OnFalling();

	UFUNCTION(BlueprintCallable)
		void CrashTheGame();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
