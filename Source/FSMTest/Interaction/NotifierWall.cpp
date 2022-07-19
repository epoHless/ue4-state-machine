// Fill out your copyright notice in the Description page of Project Settings.


#include "NotifierWall.h"


// Sets default values
ANotifierWall::ANotifierWall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Component = CreateDefaultSubobject<UBoxComponent>("Box");
	//
	// Component->SetSimulatePhysics(false);
	// Component->SetGenerateOverlapEvents(true);
	// Component->BodyInstance.SetCollisionProfileName("OverlapAllDynamic");
	// Component->OnComponentBeginOverlap.AddDynamic(this, &ANotifierWall::OnHitComp);

	Component->SetBoxExtent(ComponentBounds);
	
	RootComponent = Component;
}

// Called when the game starts or when spawned
void ANotifierWall::BeginPlay()
{
	Super::BeginPlay();

	Component->SetBoxExtent(ComponentBounds);
	Component->SetHiddenInGame(false);
	
}

void ANotifierWall::OnHitComp(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bfromSweep, const FHitResult& SweepResult)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, TEXT("I Overlapped Something"));
	}
}

// Called every frame
void ANotifierWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

