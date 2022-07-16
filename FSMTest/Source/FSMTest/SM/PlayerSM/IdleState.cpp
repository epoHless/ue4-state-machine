#include "IdleState.h"

#include "CrouchState.h"
#include "JumpState.h"
#include "MoveState.h"
#include "FSMTest/SM/StateProcessor.h"


void UIdleState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->bEnableOnScreenDebugMessages = true;
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Idle Start"));
}

void UIdleState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Idleing"));
	
	if (character->Velocity.Size() > 0.0f)
	{
		Processor->ChangeState(NewObject<UMoveState>());
	}
	if (character->IsFalling())
	{
		Processor->ChangeState(NewObject<UJumpState>());
	}
	if (character->IsCrouching())
	{
		Processor->ChangeState(NewObject<UCrouchState>());
	}
}

void UIdleState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, TEXT("Idle End"));
}
