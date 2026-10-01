// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBTTask_ClearBlackBoardValue.h"

#include "ShooterAI.h"
#include "BehaviorTree/BlackboardComponent.h"

#include "Kismet/GameplayStatics.h"

UMyBTTask_ClearBlackBoardValue::UMyBTTask_ClearBlackBoardValue()
{
	NodeName = TEXT("Clear Blackboard Value");
}

EBTNodeResult::Type UMyBTTask_ClearBlackBoardValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	UBlackboardComponent* Blackboard = OwnerComp.GetBlackboardComponent();

	if (Blackboard)
	{
		Blackboard->ClearValue(GetSelectedBlackboardKey());
	}

	return EBTNodeResult::Succeeded;
}
