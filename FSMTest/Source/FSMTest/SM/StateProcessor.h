// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "CoreMinimal.h"
#include "FSMTest/Player/PlayerCharacter.h"
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
	void ChangeState(UState* NewState);	

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE UState* GetCurrentState()const { return CurrentState; }

	UFUNCTION(Category="Processor", BlueprintCallable)
	void SetController(UCharacterMovementComponent* NewController) {Controller = NewController;}

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE APlayerCharacter* ReturnOwner() { return Owner; }

protected:
	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
								   FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(Category="Processor", BlueprintNativeEvent)
	UState* GetStartupState();	

	UPROPERTY(VisibleAnywhere)
	UState* CurrentState;

	UPROPERTY(VisibleAnywhere)
	UCharacterMovementComponent* Controller;

	UPROPERTY(VisibleAnywhere)
	APlayerCharacter* Owner;
	
};
