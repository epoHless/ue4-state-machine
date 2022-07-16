#pragma once

#include "StateProcessor.h"
#include "State.generated.h"

UCLASS(Abstract, Blueprintable, BlueprintType)
class FSMTEST_API UState : public UObject
{
	GENERATED_BODY()
	
	friend class UAStateProcessor;
public:
	UFUNCTION(Category="State", BlueprintNativeEvent)
	void Start(UAStateProcessor* processor, UCharacterMovementComponent* character);

	UFUNCTION(Category="State", BlueprintNativeEvent, BlueprintCallable)
	void Update(UAStateProcessor* Processor, UCharacterMovementComponent* character);

	UFUNCTION(Category="State", BlueprintNativeEvent)
	void Exit(UAStateProcessor* Processor, UCharacterMovementComponent* character);

	UPROPERTY(EditAnywhere)
	UCharacterMovementComponent* CharacterController;
	
	UPROPERTY()
	FString Name;

	UFUNCTION(Category = "State", BlueprintCallable, BlueprintPure)
	FORCEINLINE FString ReturnName()const { return Name; }
};

inline void UState::Exit_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
}

inline void UState::Update_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
}

inline  void UState::Start_Implementation(UAStateProcessor* Processor, UCharacterMovementComponent* Character)
{
}
