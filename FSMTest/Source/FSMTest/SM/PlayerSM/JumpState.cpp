#include "JumpState.h"
#include "IdleState.h"

void UJumpState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	Name = "Jumping";
}

void UJumpState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	if (!character->IsFalling())
	{
		Processor->ChangeState(NewObject<UIdleState>());
	}
}

void UJumpState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
}
