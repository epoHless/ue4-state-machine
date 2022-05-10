// Fill out your copyright notice in the Description page of Project Settings.
#include "StateProcessor.h"
#include "State.h"

UAStateProcessor::UAStateProcessor()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UAStateProcessor::ChangeState(TSubclassOf<UState> NewState)
{
	CurrentState->Exit(this, Controller);
	CurrentState = NewState.GetDefaultObject();
	CurrentState->Start(this, Controller);
}

UState* UAStateProcessor::GetStartupState_Implementation()
{
	return nullptr;
}

void UAStateProcessor::BeginPlay()
{	
	Super::BeginPlay();
	
	CurrentState = GetStartupState();
	CurrentState->Start(this, Controller);
}

void UAStateProcessor::TickComponent(float DeltaTime, ELevelTick Tick, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, Tick, ThisTickFunction);

	CurrentState->Update(this, Controller);
}