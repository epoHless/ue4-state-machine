#include "AttackState.h"

#include "IdleState.h"
#include "JumpState.h"
#include "MoveState.h"
#include "FSMTest/SM/StateProcessor.h"


void UAttackState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->bEnableOnScreenDebugMessages = true;
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Attack Start"));
	character->bOrientRotationToMovement = false;
	character->GetNavAgentPropertiesRef().bCanCrouch = false;
	character->MaxWalkSpeed = 300.0f;
	Processor->ReturnOwner()->bUseControllerRotationYaw = true;
}

void UAttackState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Attacking"));
	
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
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, TEXT("attack End"));
	character->bOrientRotationToMovement = true;
	character->GetNavAgentPropertiesRef().bCanCrouch = true;
	character->MaxWalkSpeed = 600.0f;
	Processor->ReturnOwner()->bUseControllerRotationYaw = false;

}
