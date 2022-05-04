#include "JumpState.h"

void UJumpState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->bEnableOnScreenDebugMessages = true;
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Jump Start"));
}

void UJumpState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Jumping"));
}

void UJumpState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Jump End"));
}
