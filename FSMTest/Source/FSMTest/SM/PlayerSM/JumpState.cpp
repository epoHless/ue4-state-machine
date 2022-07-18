#include "JumpState.h"
#include "IdleState.h"

void UJumpState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	SetName("Jumping");
}

void UJumpState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	if (!Character->IsFalling())
	{
		Processor->ChangeState(NewObject<UIdleState>());
	}
}

void UJumpState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
}
