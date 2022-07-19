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
	void Start(UAStateProcessor* processor, UCharacterMovementComponent* Character);

	UFUNCTION(Category="State", BlueprintNativeEvent, BlueprintCallable)
	void Update(UAStateProcessor* Processor, UCharacterMovementComponent* Character);

	UFUNCTION(Category="State", BlueprintNativeEvent)
	void Exit(UAStateProcessor* Processor, UCharacterMovementComponent* Character);

	UPROPERTY(EditAnywhere)
	UCharacterMovementComponent* CharacterController;	

	UFUNCTION(Category = "State", BlueprintCallable, BlueprintPure)
	FORCEINLINE FString ReturnName()const { return Name; }

	UFUNCTION(Category = "State", BlueprintCallable)
	void SetName(FString NewName) { Name = NewName; }

private:
	UPROPERTY()
	FString Name;
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
