#include "PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f,500.0f,0.0f);
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Bind Movement
	PlayerInputComponent->BindAxis("Sideways", this, &APlayerCharacter::MoveVert);
	PlayerInputComponent->BindAxis("Forward", this, &APlayerCharacter::MoveHori);

	//Bind Rotation
	PlayerInputComponent->BindAxis("PitchRotation", this, &APlayerCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("YawRotation", this, &APlayerCharacter::AddControllerYawInput);
}

void APlayerCharacter::MoveVert(float speed)
{
	AddMovementInput(GetActorRightVector(), speed);
}

void APlayerCharacter::MoveHori(float speed)
{
	AddMovementInput(GetActorForwardVector(), speed);	
}

