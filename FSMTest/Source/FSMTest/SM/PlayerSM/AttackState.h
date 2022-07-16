﻿#pragma once
#include "FSMTest/SM/State.h"
#include "AttackState.generated.h"

UCLASS(BlueprintType)
class FSMTEST_API UAttackState : public UState
{
	GENERATED_BODY()
public:
	virtual void Start_Implementation(UAStateProcessor* processor, UCharacterMovementComponent* character) override;
	virtual void Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character) override;
	virtual void Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character) override;
protected:
};
