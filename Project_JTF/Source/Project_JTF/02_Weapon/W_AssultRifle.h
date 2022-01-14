#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "W_AssultRifle.generated.h"

UCLASS()
class PROJECT_JTF_API AW_AssultRifle : public AActor
{
	GENERATED_BODY()
	
public:	
	AW_AssultRifle();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

};
