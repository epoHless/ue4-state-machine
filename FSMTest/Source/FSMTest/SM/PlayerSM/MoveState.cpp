#include "MoveState.h"

#include "AttackState.h"
#include "CrouchState.h"
#include "IdleState.h"
#include "JumpState.h"
#include "GameFramework/CharacterMovementComponent.h"

void UMoveState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	Name = "Moving";
}

void UMoveState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{

	if (character->Velocity == FVector::ZeroVector)
	{
		Processor->ChangeState(NewObject<UIdleState>());
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

void UMoveState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
}
