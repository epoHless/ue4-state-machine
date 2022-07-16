#include "AttackState.h"

#include "IdleState.h"
#include "JumpState.h"
#include "MoveState.h"
#include "FSMTest/SM/StateProcessor.h"


void UAttackState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	character->bOrientRotationToMovement = false;
	character->GetNavAgentPropertiesRef().bCanCrouch = false;
	character->MaxWalkSpeed = 200.0f;
	Processor->ReturnOwner()->bUseControllerRotationYaw = true;
	Name = "Focusing";
}

void UAttackState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	if (!Processor->ReturnOwner()->AttackStance)
	{
		if (character->Velocity == FVector::ZeroVector)
			Processor->ChangeState(NewObject<UIdleState>());
		else
			Processor->ChangeState(NewObject<UMoveState>());
	}
}

void UAttackState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	character->bOrientRotationToMovement = true;
	character->GetNavAgentPropertiesRef().bCanCrouch = true;
	character->MaxWalkSpeed = 600.0f;
	Processor->ReturnOwner()->bUseControllerRotationYaw = false;

}
