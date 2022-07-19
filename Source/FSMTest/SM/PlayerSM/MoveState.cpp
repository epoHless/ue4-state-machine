#include "MoveState.h"

void UMoveState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	SetName("Moving");
}

void UMoveState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	if (Character->Velocity == FVector::ZeroVector)
	{
		Processor->ChangeState(NewObject<UIdleState>());
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

void UMoveState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
}
