// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class FSMTEST_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	APlayerCharacter();

	UPROPERTY(EditAnywhere)
	float MovementSpeed = 600.0f;

	UPROPERTY(EditAnywhere)
	float AttackStanceMovementSpeed = 200.0f;

	UPROPERTY(EditAnywhere)
	float RollHeight = 50.0f;

	UPROPERTY(EditAnywhere)
	float JumpHeight = 460.0f;
	
	UPROPERTY(EditAnywhere)
	bool AttackStance = false;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FORCEINLINE bool IsAttacking() const { return AttackStance; }

private:
	
	void MoveRight(float value);
	void MoveForward(float value);

	void CrouchPlayer();
	void UncrouchPlayer();

	void JumpCharacter();
	void RollCharacter();
	
	void ActivateAStance();
	void DeactivateAStance();
};


