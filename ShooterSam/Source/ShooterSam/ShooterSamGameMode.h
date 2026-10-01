// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ShooterSamGameMode.generated.h"

class AShooterSamCharacter;

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AShooterSamGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AShooterSamGameMode();

	TArray<AShooterSamCharacter*> EnemyCharacters;

	FTimerHandle LevelReloadTimerHandle;

	int32 DeadEnemies = 0;

	void OnEnemyKilled();
	void OnPlayerKilled();

	void ReloadLevel();

protected:
	virtual void BeginPlay() override;
};



