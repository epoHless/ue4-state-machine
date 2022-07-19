// Fill out your copyright notice in the Description page of Project Settings.


#include "FSMTest/SM/EnemySM/EnemyState.h"

void UEnemyState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	Super::Start_Implementation(Processor, Character);
}

void UEnemyState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	Super::Update_Implementation(Processor, Character);
}

void UEnemyState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	Super::Exit_Implementation(Processor, Character);
}
