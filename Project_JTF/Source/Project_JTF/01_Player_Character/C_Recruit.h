#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "C_Recruit.generated.h"

UCLASS()
class PROJECT_JTF_API AC_Recruit : public ACharacter
{
	GENERATED_BODY()

public :
	AC_Recruit();

#pragma region Components
private :
	UPROPERTY(VisibleDefaultsOnly)
		class UCameraComponent* FPCamera;

	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
		USkeletalMeshComponent* FPMesh;

#pragma endregion

#pragma region Unreal Function
protected :
	virtual void BeginPlay() override;

public :	
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
#pragma endregion

#pragma region Character Movement
private :
	void MoveForward(float AxisValue);
	void MoveRight(float AxisValue);
#pragma endregion

#pragma region Player Look
private :
	void OnLookHorizontal(float AxisValue);
	void OnLookVertical(float AxisValue);
#pragma endregion

#pragma region Combat

#pragma endregion
};
