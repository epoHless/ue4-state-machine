// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FSMTest/SM/State.h"
#include "EnemyState.generated.h"

/**
 * 
 */
UCLASS()
class FSMTEST_API UEnemyState : public UState
{
	GENERATED_BODY()
public:
	virtual void Start_Implementation(UAStateProcessor* processor, UCharacterMovementComponent* character) override;
	virtual void Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character) override;
	virtual void Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character) override;
};
