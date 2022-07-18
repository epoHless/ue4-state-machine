#include "IdleState.h"

#include "AttackState.h"
#include "WalkState.h"
#include "JumpState.h"
#include "MoveState.h"
#include "FSMTest/SM/StateProcessor.h"


void UIdleState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	SetName("Idle");
}

void UIdleState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	if (Character->Velocity.Size() > 0.0f)
	{
		Processor->ChangeState(NewObject<UMoveState>());
	}
	if (Character->IsFalling())
	{
		Processor->ChangeState(NewObject<UJumpState>());
	}
	if (Character->IsCrouching())
	{
		Processor->ChangeState(NewObject<UWalkState>());
	}
	if (Processor->ReturnOwner()->AttackStance)
	{
		Processor->ChangeState(NewObject<UAttackState>());
	}
}

void UIdleState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
}
