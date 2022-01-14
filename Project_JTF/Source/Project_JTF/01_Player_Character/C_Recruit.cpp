#include "C_Recruit.h"
#include "Utilities/Helpers.h"

#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

#include "Components/SkeletalMeshComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"

#include "Camera/CameraComponent.h"

AC_Recruit::AC_Recruit()
{
	PrimaryActorTick.bCanEverTick = true;

	Helpers::CreateComponent<UCameraComponent>(this, &FPCamera, "1st Person Cam", GetCapsuleComponent());
	FPCamera->SetRelativeLocation(FVector(0, 0, BaseEyeHeight + 20.0f));
	FPCamera->bUsePawnControlRotation = true;

	USkeletalMesh* mesh;
	Helpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/3rd_Person/Mesh/SK_Mannequin.SK_Mannequin'");
	GetMesh()->SetSkeletalMesh(mesh);
	GetMesh()->SetRelativeLocation(FVector(0, 0, -90));
	GetMesh()->SetRelativeRotation(FRotator(0, -90, 0));
	GetMesh()->SetOwnerNoSee(true);

	Helpers::CreateComponent<USkeletalMeshComponent>(this, &FPMesh, "1st Person Mesh", FPCamera);
	Helpers::GetAsset<USkeletalMesh>(&mesh, "SkeletalMesh'/Game/1st_Person/Character/Mesh/SK_Mannequin_Arms.SK_Mannequin_Arms'");
	FPMesh->SetSkeletalMesh(mesh);
	FPMesh->SetRelativeLocation(FVector(25, 0, -155));
	FPMesh->SetRelativeRotation(FRotator(10, 0, 0));
	FPMesh->SetOnlyOwnerSee(true);
	

	TSubclassOf<UAnimInstance> animInstance;
	Helpers::GetClass<UAnimInstance>(&animInstance, "AnimBlueprint'/Game/01_Player/ABP_TP_Recruit.ABP_TP_Recruit_C'");
	GetMesh()->SetAnimInstanceClass(animInstance);

	Helpers::GetClass<UAnimInstance>(&animInstance, "AnimBlueprint'/Game/01_Player/ABP_FP_Recruit.ABP_FP_Recruit_C'");
	FPMesh->SetAnimInstanceClass(animInstance);

	GetCharacterMovement()->MaxWalkSpeed = 400;
}

void AC_Recruit::BeginPlay()
{
	Super::BeginPlay();
	
}

void AC_Recruit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AC_Recruit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AC_Recruit::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AC_Recruit::MoveRight);
	PlayerInputComponent->BindAxis("LookHorizontal", this, &AC_Recruit::OnLookHorizontal);
	PlayerInputComponent->BindAxis("LookVertical", this, &AC_Recruit::OnLookVertical);

}

void AC_Recruit::MoveForward(float AxisValue)
{
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetForwardVector().GetSafeNormal();

	AddMovementInput(direction, AxisValue);
}

void AC_Recruit::MoveRight(float AxisValue)
{
	FRotator rotator = FRotator(0, GetControlRotation().Yaw, 0);
	FVector direction = FQuat(rotator).GetRightVector().GetSafeNormal();

	AddMovementInput(direction, AxisValue);
}

void AC_Recruit::OnLookHorizontal(float AxisValue)
{
	AddControllerYawInput(AxisValue);
}

void AC_Recruit::OnLookVertical(float AxisValue)
{
	AddControllerPitchInput(AxisValue);
}

