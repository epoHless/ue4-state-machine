// Fill out your copyright notice in the Description page of Project Settings.


#include "KickableBall.h"


// Sets default values
AKickableBall::AKickableBall()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Ball Mesh");
	//
	// Mesh->SetSimulatePhysics(true);
	// Mesh->SetNotifyRigidBodyCollision(true);
	// Mesh->BodyInstance.SetCollisionProfileName("BlockAllDynamic");
	// Mesh->OnComponentHit.AddDynamic(this, &AKickableBall::OnHitComp);

	RootComponent = Mesh;
}

// Called when the game starts or when spawned
void AKickableBall::BeginPlay()
{
	Super::BeginPlay();

	
	
}

void AKickableBall::OnHitComp(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComp != NULL))
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("I Hit: %s"), *OtherActor->GetName()));
	}
}

// Called every frame
void AKickableBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

