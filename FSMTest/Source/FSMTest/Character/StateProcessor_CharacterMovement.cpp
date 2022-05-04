#include "StateProcessor_CharacterMovement.h"

#include "FSMTest/SM/PlayerSM/IdleState.h"
#include "FSMTest/SM/PlayerSM/JumpState.h"
#include "FSMTest/SM/PlayerSM/MoveState.h"

UStateProcessor_CharacterMovement::UStateProcessor_CharacterMovement()
{	
	Idle = NewObject<UIdleState>()->GetClass();
	Move = NewObject<UMoveState>()->GetClass();
	Jump = NewObject<UJumpState>()->GetClass();
}

void UStateProcessor_CharacterMovement::BeginPlay()
{	
	if(Idle == nullptr || Move == nullptr || Jump == nullptr)
	{
		Idle = NewObject<UIdleState>()->GetClass();
		Move = NewObject<UMoveState>()->GetClass();
		Jump = NewObject<UJumpState>()->GetClass();
	}

	Super::BeginPlay();	
}


UState* UStateProcessor_CharacterMovement::GetStartupState_Implementation()
{
	return Idle.GetDefaultObject();
}
