#include "Waypoint.h"

AWaypoint::AWaypoint()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AWaypoint::BeginPlay()
{
	Super::BeginPlay();
	
}

void AWaypoint::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AWaypoint* AWaypoint::GetRandomWaypoint()
{
	return this->Waypoints[FMath::RandRange(0, Waypoints.Num())];
}

