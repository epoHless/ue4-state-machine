// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "NotifierWall.generated.h"

UCLASS()
class FSMTEST_API ANotifierWall : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANotifierWall();

	UPROPERTY()
	UBoxComponent* Component;
	UPROPERTY(EditAnywhere)
	FVector ComponentBounds;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void OnHitComp(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
