#include "IdleState.h"

#include "AttackState.h"
#include "CrouchState.h"
#include "JumpState.h"
#include "MoveState.h"
#include "FSMTest/SM/StateProcessor.h"


void UIdleState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	Name = "Idle";
}

void UIdleState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	if (character->Velocity.Size() > 0.0f)
	{
		Processor->ChangeState(NewObject<UMoveState>());
	}
	if (character->IsFalling())
	{
		Processor->ChangeState(NewObject<UJumpState>());
	}
	if (character->IsCrouching())
	{
		Processor->ChangeState(NewObject<UCrouchState>());
	}
	if (Processor->ReturnOwner()->AttackStance)
	{
		Processor->ChangeState(NewObject<UAttackState>());
	}
}

void UIdleState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
}
