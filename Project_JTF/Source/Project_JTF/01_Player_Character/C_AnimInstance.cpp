#include "C_AnimInstance.h"
#include "Utilities/Helpers.h"

#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

void UC_AnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	mOwnerCharacter = Cast<ACharacter>(TryGetPawnOwner());
}

void UC_AnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!mOwnerCharacter) return;

	mSpeed = mOwnerCharacter->GetVelocity().Size2D();
	mDirection = CalculateDirection(mOwnerCharacter->GetVelocity(), mOwnerCharacter->GetControlRotation());
	mPitch = mOwnerCharacter->GetBaseAimRotation().Pitch;
}
