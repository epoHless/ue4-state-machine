#pragma once

#include "CoreMinimal.h"
#include "FSMTest/SM/StateProcessor.h"
#include "FSMTest/SM/EnemySM/EnemyState.h"
#include "StateProcessor_EnemyBehaviour.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent, DisplayName="Enemy State Processor"))
class FSMTEST_API UStateProcessor_EnemyBehaviour : public UAStateProcessor
{
private:
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnemyState> Patrol;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnemyState> Engage;
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnemyState> Disengage;	

public:
	UStateProcessor_EnemyBehaviour();

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE TSubclassOf<UState> GetPatrolState(){return Patrol;}

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE TSubclassOf<UState> GetEngageState(){return Engage;}

	UFUNCTION(Category="Processor", BlueprintCallable, BlueprintPure)
	FORCEINLINE TSubclassOf<UState> GetDisengageState(){return Disengage;}
	
	virtual void BeginPlay() override;

protected:
	virtual UState* GetStartupState_Implementation() override;
};
