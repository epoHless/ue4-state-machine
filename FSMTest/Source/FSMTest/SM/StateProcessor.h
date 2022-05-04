// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "StateProcessor.generated.h"

class UState;

UCLASS(Abstract, BlueprintType)
class FSMTEST_API UAStateProcessor : public UActorComponent
{
	GENERATED_BODY()

public:
	UAStateProcessor();

	UFUNCTION(BlueprintCallable)
	void ChangeState(TSubclassOf<UState> NewState);	

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE UState* GetCurrentState()const { return CurrentState; }

	UFUNCTION(Category="Processor", BlueprintCallable)
	void SetController(UCharacterMovementComponent* NewController) {Controller = NewController;}

protected:
	virtual void BeginPlay() override;

	UFUNCTION(Category="Processor", BlueprintNativeEvent)
	UState* GetStartupState();
	
private:
	UPROPERTY(VisibleAnywhere)
	UState* CurrentState;

	UPROPERTY(VisibleAnywhere)
	UCharacterMovementComponent* Controller;
	
};
