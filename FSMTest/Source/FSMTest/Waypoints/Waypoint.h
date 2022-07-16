#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Waypoint.generated.h"

UCLASS()
class FSMTEST_API AWaypoint : public AActor
{
	GENERATED_BODY()
	
public:	
	AWaypoint();

	UPROPERTY(EditAnywhere)
	AWaypoint* NextWaypoint;

	UPROPERTY(EditAnywhere)
	AWaypoint* PreviousWaypoint;

	UPROPERTY(EditAnywhere)
	TArray<AWaypoint*> Waypoints;
protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Waypoint", BlueprintPure)
	FORCEINLINE AWaypoint* GetNextWaypoint() { return NextWaypoint; }

	UFUNCTION(BlueprintCallable, Category = "Waypoint", BlueprintPure)
	FORCEINLINE AWaypoint* GetPreviousWaypoint() { return PreviousWaypoint; }

	UFUNCTION(BlueprintCallable, Category = "Waypoint", BlueprintPure)
	AWaypoint* GetRandomWaypoint();
};
