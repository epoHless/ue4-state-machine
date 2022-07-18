#include "AttackState.h"

#include "IdleState.h"
#include "JumpState.h"
#include "MoveState.h"
#include "FSMTest/SM/StateProcessor.h"


void UAttackState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
	Character->bOrientRotationToMovement = false;
	Character->GetNavAgentPropertiesRef().bCanCrouch = false;
	Character->MaxWalkSpeed = 200.0f;
	Processor->ReturnOwner()->bUseControllerRotationYaw = true;
	
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
	Character->bOrientRotationToMovement = true;
	Character->GetNavAgentPropertiesRef().bCanCrouch = true;
	Character->MaxWalkSpeed = 600.0f;
	Processor->ReturnOwner()->bUseControllerRotationYaw = false;
}
