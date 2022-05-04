#pragma once

#include "CoreMinimal.h"
#include "FSMTest/SM/StateProcessor.h"
#include "StateProcessor_CharacterMovement.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class FSMTEST_API UStateProcessor_CharacterMovement : public UAStateProcessor
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UState> Idle;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UState> Move;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UState> Jump;

public:
	UStateProcessor_CharacterMovement();

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE TSubclassOf<UState> GetIdleState(){return Idle;}

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE TSubclassOf<UState> GetMoveState(){return Move;}

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE TSubclassOf<UState> GetJumpState(){return Jump;}
	
	virtual void BeginPlay() override;

protected:
	virtual UState* GetStartupState_Implementation() override;
};
