#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

class PROJECT_JTF_API Helpers
{
public:
	template<typename T>
	static void GetAsset(T** OutObject, FString InPath)
	{
		ConstructorHelpers::FObjectFinder<T> asset(*InPath);
		*OutObject = asset.Object;
	}

	template<typename T>
	static void GetClass(TSubclassOf<T>* OutObject, FString InPath)
	{
		ConstructorHelpers::FClassFinder<T> asset(*InPath);
		*OutObject = asset.Class;
	}

	template<typename T>
	static void GetAssetDynamic(T** OutObject, FString InPath)
	{
		*OutObject = Cast<T>(StaticLoadObject(T::StaticClass(), NULL, *InPath));
	}

	template<typename T>
	static void CreateComponent(AActor* InActor, T** OutComponent, FName InName, USceneComponent* InParent = nullptr)
	{
		*OutComponent = InActor->CreateDefaultSubobject<T>(InName);

		if (!!InParent)
		{
			(*OutComponent)->SetupAttachment(InParent);
			return;
		}

		InActor->SetRootComponent(*OutComponent);
	}


	template<typename T>
	static void CreateActorComponent(AActor* InActor, T** OutComponent, FName InName)
	{
		*OutComponent = InActor->CreateDefaultSubobject<T>(InName);
	}

	template<typename T>
	static T* GetComponent(AActor* InActor)
	{
		return Cast<T>(InActor->GetComponentByClass(T::StaticClass()));
	}

	template<typename T>
	static T* GetComponent(AActor* InActor, FString InComponentName)
	{
		TArray<T*> components;
		InActor->GetComponents<T>(components);

		for (T* component : components)
		{
			if (component->GetName() == InComponentName)
				return component;
		}

		return nullptr;
	}


	template<typename T>
	static T* FindActor(UWorld* InWorld, int32 InIndex = 0)
	{
		TArray<AActor*> actors;
		UGameplayStatics::GetAllActorsOfClass(InWorld, T::StaticClass(), actors);

		if (actors.Num() < 1)
			return nullptr;

		return Cast<T>(actors[InIndex]);
	}

	template<typename T>
	static void FindActors(UWorld* InWorld, TArray<T*>& OutActors)
	{
		TArray<AActor*> actors;
		UGameplayStatics::GetAllActorsOfClass(InWorld, T::StaticClass(), actors);

		for (AActor* actor : actors)
		{
			T* obj = Cast<T>(actor);

			if (obj) OutActors.Add(obj);
		}
	}

	static FLinearColor GetRandomColor()
	{
		FLinearColor color;
		color.R = UKismetMathLibrary::RandomFloatInRange(0, 1);
		color.G = UKismetMathLibrary::RandomFloatInRange(0, 1);
		color.B = UKismetMathLibrary::RandomFloatInRange(0, 1);
		color.A = 1.0f;

		return color;
	}

	static FString GetStringFromEnum(FString InTypeName, int32 InIndex)
	{
		UEnum* ptr = FindObject<UEnum>(ANY_PACKAGE, *InTypeName, true);
		return ptr->GetNameStringByIndex(InIndex);
	}
};
