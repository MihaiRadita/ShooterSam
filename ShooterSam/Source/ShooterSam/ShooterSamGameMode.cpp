// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterSamGameMode.h"

#include "ShooterSamCharacter.h"
#include "ShooterAI.h"

#include "Kismet/GameplayStatics.h"
#include "AIController.h"

AShooterSamGameMode::AShooterSamGameMode()
{
	// stub
}

void AShooterSamGameMode::OnEnemyKilled()
{
    DeadEnemies++;

    UE_LOG(
        LogTemp,
        Display,
        TEXT("Enemy killed: %d / %d"),
        DeadEnemies,
        EnemyCharacters.Num()
    );

    if (EnemyCharacters.Num() > 0 && DeadEnemies >= EnemyCharacters.Num())
    {
        DeadEnemies = 0;

        GetWorld()->GetTimerManager().SetTimer(
            LevelReloadTimerHandle,
            this,
            &AShooterSamGameMode::ReloadLevel,
            2.0f,
            false
        );
    }
}

void AShooterSamGameMode::OnPlayerKilled()
{
    GetWorld()->GetTimerManager().SetTimer(
        LevelReloadTimerHandle,
        this,
        &AShooterSamGameMode::ReloadLevel,
        2.0f,
        false
    );
}

void AShooterSamGameMode::ReloadLevel()
{
    const FString LevelName = UGameplayStatics::GetCurrentLevelName(this, true);

    UGameplayStatics::OpenLevel(this, FName(*LevelName));
}

void AShooterSamGameMode::BeginPlay()
{
    Super::BeginPlay();

    AShooterSamCharacter* Player =
        Cast<AShooterSamCharacter>(
            UGameplayStatics::GetPlayerPawn(GetWorld(), 0)
        );

    TArray<AActor*> ShooterCharacters;

    UGameplayStatics::GetAllActorsOfClass(
        GetWorld(),
        AShooterSamCharacter::StaticClass(),
        ShooterCharacters
    );

    for (AActor* Actor : ShooterCharacters)
    {
        AShooterSamCharacter* Character =
            Cast<AShooterSamCharacter>(Actor);

        if (Character)
        {
            // Daca NU este player controller, il consideram enemy
            if (!Character->IsPlayerControlled())
            {
                EnemyCharacters.Add(Character);
            }
        }
    }

    UE_LOG(
        LogTemp,
        Display,
        TEXT("Found %d enemies"),
        EnemyCharacters.Num()
    );

    // Pornirea AI-urilor tale
    TArray<AActor*> ShooterAIActors;

    UGameplayStatics::GetAllActorsOfClass(
        GetWorld(),
        AShooterAI::StaticClass(),
        ShooterAIActors
    );

    for (AActor* ShooterAIActor : ShooterAIActors)
    {
        AShooterAI* ShooterAI = Cast<AShooterAI>(ShooterAIActor);

        if (ShooterAI)
        {
            ShooterAI->StartBehaviourTree(Player);

            UE_LOG(
                LogTemp,
                Display,
                TEXT("%s starting behavior tree"),
                *ShooterAI->GetActorNameOrLabel()
            );
        }
    }
}
