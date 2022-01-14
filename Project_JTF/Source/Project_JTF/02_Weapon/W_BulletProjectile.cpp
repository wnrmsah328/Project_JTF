#include "W_BulletProjectile.h"
#include "Utilities/Helpers.h"

#include "GameFramework/ProjectileMovementComponent.h"

#include "Components/StaticMeshComponent.h"
#include "Components/CapsuleComponent.h"

#include "Materials/MaterialInstanceConstant.h"

AW_BulletProjectile::AW_BulletProjectile()
{
	Helpers::CreateComponent<UCapsuleComponent>(this, &Capsule, "Capsule Coli");
	Helpers::CreateComponent<UStaticMeshComponent>(this, &Mesh, "Mesh", Capsule);
	Helpers::CreateActorComponent<UProjectileMovementComponent>(this, &Projectile, "ProjectileMove");
}

void AW_BulletProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}



