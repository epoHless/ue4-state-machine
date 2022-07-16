#include "PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->NavAgentProps.bCanCrouch = true; 
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f,500.0f,0.0f);

	GetCharacterMovement()->JumpZVelocity = JumpHeight;
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

	PlayerInputComponent->BindAction(TEXT("Jump"), IE_Pressed, this, &APlayerCharacter::JumpCharacter);
	PlayerInputComponent->BindAction(TEXT("Roll"), IE_Pressed, this, &APlayerCharacter::RollCharacter);
	
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
	auto YawRotation = GetControlRotation().Yaw;
	auto NewRotation = UKismetMathLibrary::MakeRotator(0,0,YawRotation);	
	AddMovementInput(UKismetMathLibrary::GetRightVector(NewRotation), value);
}

void APlayerCharacter::MoveForward(float value)
{
	auto YawRotation = GetControlRotation().Yaw;
	auto NewRotation = UKismetMathLibrary::MakeRotator(0,0,YawRotation);	
	AddMovementInput(UKismetMathLibrary::GetForwardVector(NewRotation), value);
}

void APlayerCharacter::CrouchPlayer()
{
	Crouch();
}

void APlayerCharacter::UncrouchPlayer()
{
	UnCrouch();
}

void APlayerCharacter::JumpCharacter()
{
	GetCharacterMovement()->JumpZVelocity = JumpHeight;	
	Jump();
}

void APlayerCharacter::RollCharacter()
{
	GetCharacterMovement()->JumpZVelocity = RollHeight;
	Jump();
}
