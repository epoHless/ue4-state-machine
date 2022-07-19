#include "TravelerComponent.h"

// #include "AITestSuite/Public/AITestsCommon.h" Returns Error in build, ask prof.
#include "Kismet/GameplayStatics.h"

UTravelerComponent::UTravelerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

}

void UTravelerComponent::BeginPlay()
{
	CurrentWaypoint = InitialPosition;

	Super::BeginPlay();
}

void UTravelerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

AWaypoint* UTravelerComponent::SetCurrentWaypoint(AWaypoint* NewWaypoint)
{
	CurrentWaypoint = NewWaypoint;
	return CurrentWaypoint;
}

// void UTravelerComponent::GetWaypoints()
// {
// 	TArray<AActor*> FoundWaypoints;
// 	UGameplayStatics::GetAllActorsOfClass(FAITestHelpers::GetWorld(), AWaypoint::StaticClass(), FoundWaypoints);
// 	this->Waypoints = dynamic_cast<TArray<AWaypoint*>>(FoundWaypoints);
// }

