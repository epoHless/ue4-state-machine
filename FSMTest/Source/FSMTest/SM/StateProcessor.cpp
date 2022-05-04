// Fill out your copyright notice in the Description page of Project Settings.
#include "StateProcessor.h"
#include "State.h"

UAStateProcessor::UAStateProcessor()
{
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
