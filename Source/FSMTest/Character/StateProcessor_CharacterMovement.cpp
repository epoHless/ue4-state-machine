#include "StateProcessor_CharacterMovement.h"
#include "FSMTest/Player/PlayerCharacter.h"
#include "FSMTest/SM/PlayerSM/IdleState.h"
#include "FSMTest/SM/PlayerSM/JumpState.h"
#include "FSMTest/SM/PlayerSM/MoveState.h"
#include "GameFramework/Character.h"

UStateProcessor_CharacterMovement::UStateProcessor_CharacterMovement()
{
	
	IdleState = NewObject<UIdleState>();
	MoveState = NewObject<UMoveState>();
	JumpState = NewObject<UJumpState>();
}

void UStateProcessor_CharacterMovement::BeginPlay()
{
	Controller = Cast<APlayerCharacter, AActor>(GetOwner())->GetCharacterMovement();
	
	if(IdleState == nullptr || MoveState == nullptr || JumpState == nullptr)
	{
		IdleState = NewObject<UIdleState>();
		MoveState = NewObject<UMoveState>();
		JumpState = NewObject<UJumpState>();
	}

	Super::BeginPlay();	
}


UState* UStateProcessor_CharacterMovement::GetStartupState_Implementation()
{
	return IdleState;
}
