#include "CrouchState.h"

#include "AttackState.h"
#include "IdleState.h"
#include "JumpState.h"
#include "MoveState.h"
#include "FSMTest/SM/StateProcessor.h"


void UCrouchState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	Name = "Walking";
}

void UCrouchState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	
	if (!character->IsCrouching())
	{
		if (character->Velocity == FVector::ZeroVector)
			Processor->ChangeState(NewObject<UIdleState>());
		else
			Processor->ChangeState(NewObject<UMoveState>());
		if (Processor->ReturnOwner()->AttackStance)
		{
			Processor->ChangeState(NewObject<UAttackState>());
		}
	}
}

void UCrouchState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
}
