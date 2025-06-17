// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Bullet.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Turet.generated.h"

UCLASS()
class FORMATIONUNREAL_API ATuret : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATuret();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float Range;

	UPROPERTY(EditAnywhere)
	float FireShot;

	float bidon;

	UPROPERTY(EditAnywhere)
	USceneComponent* SpawnPosition;

	UPROPERTY()
	AActor* Target;

	UPROPERTY(EditAnywhere)
	TSubclassOf<ABullet> BulletPrefab;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* StaticMesh;
};
