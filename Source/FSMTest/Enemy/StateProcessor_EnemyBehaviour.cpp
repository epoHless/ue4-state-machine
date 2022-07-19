#include "StateProcessor_EnemyBehaviour.h"

UStateProcessor_EnemyBehaviour::UStateProcessor_EnemyBehaviour()
{	
	Patrol = NewObject<UEnemyState>()->GetClass();
	Engage = NewObject<UEnemyState>()->GetClass();
	Disengage = NewObject<UEnemyState>()->GetClass();
}

void UStateProcessor_EnemyBehaviour::BeginPlay()
{	
	if(Patrol == nullptr || Engage == nullptr || Disengage == nullptr)
	{
		Patrol = NewObject<UEnemyState>()->GetClass();
		Engage = NewObject<UEnemyState>()->GetClass();
		Disengage = NewObject<UEnemyState>()->GetClass();
	}

	Super::BeginPlay();	
}


UState* UStateProcessor_EnemyBehaviour::GetStartupState_Implementation()
{
	return Patrol.GetDefaultObject();
}