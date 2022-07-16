// Fill out your copyright notice in the Description page of Project Settings.
#include "StateProcessor.h"
#include "State.h"
#include "GameFramework/Character.h"

UAStateProcessor::UAStateProcessor()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UAStateProcessor::ChangeState(UState* NewState)
{
	CurrentState->Exit(this, Controller);
	CurrentState = NewState;
	CurrentState->Start(this, Controller);
}

UState* UAStateProcessor::GetStartupState_Implementation()
{
	return nullptr;
}

void UAStateProcessor::BeginPlay()
{
	Owner = Cast<APlayerCharacter, AActor>(GetOwner());

	Super::BeginPlay();
	
	CurrentState = GetStartupState();
	CurrentState->Start(this, Controller);
}

void UAStateProcessor::TickComponent(float DeltaTime, ELevelTick Tick, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, Tick, ThisTickFunction);

	CurrentState->Update(this, Controller);
}