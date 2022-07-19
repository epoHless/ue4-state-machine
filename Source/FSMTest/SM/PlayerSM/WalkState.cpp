#include "WalkState.h"

void UWalkState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	SetName("Walking");
}

void UWalkState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{	
	if (!Character->IsCrouching())
	{
		if (Character->Velocity == FVector::ZeroVector)
			Processor->ChangeState(NewObject<UIdleState>());
		else
			Processor->ChangeState(NewObject<UMoveState>());
		if (Processor->ReturnOwner()->AttackStance)
		{
			Processor->ChangeState(NewObject<UAttackState>());
		}
	}
}

void UWalkState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
}
