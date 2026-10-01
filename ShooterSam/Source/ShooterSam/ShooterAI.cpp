// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterAI.h"

#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"

void AShooterAI::BeginPlay()
{
	Super::BeginPlay();

	
}

void AShooterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);


	if (PlayerPawn)
	{

		if (LineOfSightTo(PlayerPawn))
		{
			SetFocus(PlayerPawn);
			MoveToActor(PlayerPawn, 200.f);
		}
		else
		{
			StopMovement();
			ClearFocus(EAIFocusPriority::Gameplay);
		}
	}
	*/
}

void AShooterAI::StartBehaviourTree(AShooterSamCharacter* Player)
{
	UE_LOG(LogTemp, Display, TEXT("START BEHAVIOUR TREE"));

	if (!EnemyAIBehaviourTree)
	{
		UE_LOG(LogTemp, Error, TEXT("EnemyAIBehaviourTree IS NULL"));
		return;
	}

	MyCharacter = Cast<AShooterSamCharacter>(GetPawn());

	if (!MyCharacter)
	{
		UE_LOG(LogTemp, Error, TEXT("MyCharacter IS NULL"));
		return;
	}

	if (!Player)
	{
		UE_LOG(LogTemp, Error, TEXT("Player IS NULL"));
		return;
	}

	PlayerCharacter = Player;

	RunBehaviorTree(EnemyAIBehaviourTree);

	UBlackboardComponent* MyBlackboard = GetBlackboardComponent();

	if (!MyBlackboard)
	{
		UE_LOG(LogTemp, Error, TEXT("BLACKBOARD IS NULL"));
		return;
	}

	if (PlayerCharacter)
	{
		MyBlackboard->SetValueAsVector(TEXT("Startlocation"), MyCharacter->GetActorLocation());

		FVector PlayerLocation = Player->GetActorLocation();
		FVector EnemyLocation = MyCharacter->GetActorLocation();

		UE_LOG(LogTemp, Display, TEXT("Vector: %s"), *PlayerLocation.ToString());
		UE_LOG(LogTemp, Display, TEXT("Vector: %s"), *EnemyLocation.ToString());
	}
}
