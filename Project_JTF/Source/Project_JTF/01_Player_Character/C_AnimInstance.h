#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "C_AnimInstance.generated.h"

UCLASS()
class PROJECT_JTF_API UC_AnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
#pragma region UE Function
public :
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
#pragma endregion

#pragma region Character Val
private :
	class ACharacter* mOwnerCharacter;

protected :
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float mSpeed;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float mDirection;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Animation")
		float mPitch;
#pragma endregion
};
