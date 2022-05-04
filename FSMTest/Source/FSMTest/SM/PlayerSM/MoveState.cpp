#include "MoveState.h"

#include "GameFramework/CharacterMovementComponent.h"

void UMoveState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->bEnableOnScreenDebugMessages = true;
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Move Start"));
}

void UMoveState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Moving"));
}

void UMoveState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Move End"));
}
