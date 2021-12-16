// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BugSplatGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class BUGSPLAT_API ABugSplatGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

		virtual void InitGameState() override;
	
};
