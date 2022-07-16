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

	UPROPERTY(EditDefaultsOnly)
	UState* IdleState;

	UPROPERTY(EditDefaultsOnly)
	UState* MoveState;

	UPROPERTY(EditDefaultsOnly)
	UState* JumpState;

	UPROPERTY(EditDefaultsOnly)
	UState* CrouchState;

public:
	UStateProcessor_CharacterMovement();

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE UState* GetIdleState(){return IdleState;}

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE UState* GetMoveState(){return MoveState;}

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE UState* GetJumpState(){return JumpState;}

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE UState* GetCrouchState(){return CrouchState;}
	
	virtual void BeginPlay() override;

protected:
	virtual UState* GetStartupState_Implementation() override;
};
