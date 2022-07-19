#pragma once

#include "CoreMinimal.h"
#include "Waypoint.h"
#include "Components/ActorComponent.h"
#include "TravelerComponent.generated.h"

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class FSMTEST_API UTravelerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UTravelerComponent();

	UPROPERTY(EditAnywhere)
	AWaypoint* InitialPosition = nullptr;

	UPROPERTY(VisibleAnywhere)
	AWaypoint* CurrentWaypoint = nullptr;	
	
protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category="Traveler", BlueprintPure)
	FORCEINLINE AWaypoint* GetInitialWaypoint() { return InitialPosition; }

	UFUNCTION(BlueprintCallable, Category="Traveler", BlueprintPure)
	FORCEINLINE AWaypoint* GetCurrentWaypoint() { return CurrentWaypoint; }

	UFUNCTION(BlueprintCallable, Category="Traveler")
	void SetInitialWaypoint(AWaypoint* NewWaypoint) { InitialPosition = NewWaypoint; }

	UFUNCTION(BlueprintCallable, Category="Traveler")
	AWaypoint* SetCurrentWaypoint(AWaypoint* NewWaypoint);
	
private:
	UPROPERTY()
	TArray<AWaypoint*> Waypoints;

	// UFUNCTION(BlueprintCallable, Category="Traveler")
	// void GetWaypoints();
};
