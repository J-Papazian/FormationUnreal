#include "Turet.h"

// Sets default values
ATuret::ATuret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Turret"));
	SpawnPosition = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPosition"));

	SpawnPosition->SetupAttachment(StaticMesh);

	RootComponent = StaticMesh;
}

// Called when the game starts or when spawned
void ATuret::BeginPlay()
{
	Super::BeginPlay();
	
	bidon = FireShot;
}

// Called every frame
void ATuret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (bidon <= 0.0f)
	{
		ABullet* newBullet = GetWorld()->SpawnActor<ABullet>(BulletPrefab, SpawnPosition->GetComponentTransform());
		bidon = FireShot;
	}

	bidon -= 0.1f;
}
