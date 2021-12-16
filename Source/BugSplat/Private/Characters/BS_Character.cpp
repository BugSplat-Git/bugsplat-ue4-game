// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/BS_Character.h"
#include "Abilities/BS_ASComponent.h"
#include "Abilities/BS_AttSetBase.h"

// Sets default values
ABS_Character::ABS_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyASComp = CreateDefaultSubobject<UBS_ASComponent>(TEXT("Ability System Component"));

	MyAttributes = CreateDefaultSubobject<UBS_AttSetBase>(TEXT("My Attributes"));

}

// Called when the game starts or when spawned
void ABS_Character::BeginPlay()
{
	Super::BeginPlay();

	MyASComp->InitAbilityActorInfo(this, this);
	
}

// Called every frame
void ABS_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABS_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent*  ABS_Character::GetAbilitySystemComponent() const
{
	return MyASComp;
}

void ABS_Character::Falling()
{
	OnFalling();
}

void ABS_Character::CrashTheGame()
{
	*(volatile int *)0 = 0;
}

