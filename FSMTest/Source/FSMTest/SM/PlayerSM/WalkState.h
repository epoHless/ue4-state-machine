﻿#pragma once
#include "FSMTest/SM/State.h"
#include "WalkState.generated.h"

UCLASS(BlueprintType)
class FSMTEST_API UWalkState : public UState
{
	GENERATED_BODY()
public:
	virtual void Start_Implementation(UAStateProcessor* processor, UCharacterMovementComponent* Character) override;
	virtual void Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character) override;
	virtual void Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character) override;
protected:
};