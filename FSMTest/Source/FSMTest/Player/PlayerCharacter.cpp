#include "PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->NavAgentProps.bCanCrouch = true; 
	
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

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &APlayerCharacter::Jump);
	PlayerInputComponent->BindAction(TEXT("Crouch"), IE_Pressed, this, &APlayerCharacter::CrouchPlayer);
	PlayerInputComponent->BindAction(TEXT("Crouch"), IE_Released, this, &APlayerCharacter::UncrouchPlayer);
	
	//Bind Movement
	PlayerInputComponent->BindAxis(TEXT("Sideways"), this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAxis(TEXT("Forward"), this, &APlayerCharacter::MoveForward);

	//Bind Rotation
	PlayerInputComponent->BindAxis(TEXT("PitchRotation"), this, &APlayerCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis(TEXT("YawRotation"), this, &APlayerCharacter::AddControllerYawInput);
}

void APlayerCharacter::MoveRight(float value)
{
	AddMovementInput(GetActorRightVector(), value);
}

void APlayerCharacter::MoveForward(float value)
{
	AddMovementInput(GetActorForwardVector(), value);	
}

void APlayerCharacter::CrouchPlayer()
{
	Crouch();
}

void APlayerCharacter::UncrouchPlayer()
{
	UnCrouch();
}
