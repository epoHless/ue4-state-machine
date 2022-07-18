#include "PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	GetCharacterMovement()->NavAgentProps.bCanCrouch = true; 
	
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f,350.0f,0.0f);

}

void APlayerCharacter::BeginPlay()
{	
	Super::BeginPlay();
	GetCharacterMovement()->JumpZVelocity = JumpHeight;
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
	
	PlayerInputComponent->BindAction(TEXT("AttackStance"), IE_Pressed, this, &APlayerCharacter::ActivateAStance);
	PlayerInputComponent->BindAction(TEXT("AttackStance"), IE_Released, this, &APlayerCharacter::DeactivateAStance);
	
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
	const auto YawRotation = GetControlRotation().Yaw;
	const auto NewRotation = UKismetMathLibrary::MakeRotator(0,0,YawRotation);	
	AddMovementInput(UKismetMathLibrary::GetRightVector(NewRotation), value);
}

void APlayerCharacter::MoveForward(float value)
{
	const auto YawRotation = GetControlRotation().Yaw;
	const auto NewRotation = UKismetMathLibrary::MakeRotator(0,0,YawRotation);	
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

void APlayerCharacter::ActivateAStance(){ AttackStance = true; }
void APlayerCharacter::DeactivateAStance(){ AttackStance = false; }
