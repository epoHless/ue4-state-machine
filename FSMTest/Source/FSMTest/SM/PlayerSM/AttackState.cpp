#include "AttackState.h"

void UAttackState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	ToggleCamera(Processor->ReturnOwner()->AttackStanceMovementSpeed, false, Character, Processor);
	
	SetName("Focusing");
}

void UAttackState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	if (!Processor->ReturnOwner()->AttackStance)
	{
		if (Character->Velocity == FVector::ZeroVector)
			Processor->ChangeState(NewObject<UIdleState>());
		else
			Processor->ChangeState(NewObject<UMoveState>());
		
		if (Character->IsFalling())
		{
			Processor->ChangeState(NewObject<UJumpState>());
		}
	}
}

void UAttackState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	ToggleCamera(Processor->ReturnOwner()->MovementSpeed, true, Character, Processor);
}

void UAttackState::ToggleCamera(float MoveSpeed, bool Toggle, UCharacterMovementComponent* Character, UAStateProcessor* Processor)
{
	Character->bOrientRotationToMovement = Toggle;
	Character->GetNavAgentPropertiesRef().bCanCrouch = Toggle;
	Character->MaxWalkSpeed = MoveSpeed;
	Processor->ReturnOwner()->bUseControllerRotationYaw = !Toggle;
}
