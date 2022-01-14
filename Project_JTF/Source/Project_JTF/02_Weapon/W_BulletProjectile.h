#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "W_BulletProjectile.generated.h"

UCLASS()
class PROJECT_JTF_API AW_BulletProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	AW_BulletProjectile();

#pragma region UE Function
protected:
	virtual void BeginPlay() override;
#pragma endregion

#pragma region
public :
	UPROPERTY(VisibleDefaultsOnly)
		class UCapsuleComponent* Capsule;

	UPROPERTY(VisibleDefaultsOnly)
		class UStaticMeshComponent* Mesh;

	UPROPERTY(VisibleDefaultsOnly)
		class UProjectileMovementComponent* Projectile;
#pragma endregion

private :
	UFUNCTION()
		void OnHit();

public :
	void Shot(const FVector& InDirection;)
};
