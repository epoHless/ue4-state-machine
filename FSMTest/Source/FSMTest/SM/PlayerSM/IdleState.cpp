#include "IdleState.h"
#include "FSMTest/SM/StateProcessor.h"
#include "FSMTest/Character/StateProcessor_CharacterMovement.h"


void UIdleState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->bEnableOnScreenDebugMessages = true;
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Idle Start"));
}

void UIdleState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->AddOnScreenDebugMessage(0, 2, FColor::Blue, TEXT("Idleing"));
}

void UIdleState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* character)
{
	GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Blue, TEXT("Idle End"));
}
