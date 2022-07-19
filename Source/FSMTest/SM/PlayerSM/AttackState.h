#pragma once

#include "States.hpp"
#include "AttackState.generated.h"

UCLASS(BlueprintType)
class FSMTEST_API UAttackState : public UState
{
	GENERATED_BODY()
public:
	virtual void Start_Implementation(UAStateProcessor* processor, UCharacterMovementComponent* Character) override;
	virtual void Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character) override;
	virtual void Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character) override;
protected:
	void ToggleCamera(float MoveSpeed, bool Toggle, UCharacterMovementComponent* Character, UAStateProcessor* Processor);
};
