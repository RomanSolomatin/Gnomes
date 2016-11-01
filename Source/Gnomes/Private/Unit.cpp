// DigitalDominus (C) 2016

#include "Gnomes.h"
#include "Unit.h"


// Sets default values
AUnit::AUnit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	// We set tick functionality false by default in our base class
	PrimaryActorTick.bCanEverTick = false;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = StaticMesh;
	StaticMesh->OnBeginCursorOver.AddDynamic(this, &AUnit::OnBeginMouseOver);
	StaticMesh->OnEndCursorOver.AddDynamic(this, &AUnit::OnEndMouseOver);
}

// Called when the game starts or when spawned
void AUnit::BeginPlay()
{
	Super::BeginPlay();

	// Find all meshes in actor
	for (UActorComponent* Mesh : GetComponentsByClass(UMeshComponent::StaticClass()))
	{
		UMeshComponent* ThisMesh = Cast<UMeshComponent>(Mesh);
		if (ThisMesh != nullptr)
		{
			Meshes.Push(ThisMesh);
		}
	}
}

// Called every frame
void AUnit::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}

// Begin mouse over event
void AUnit::OnBeginMouseOver(UPrimitiveComponent* TouchedComponent)
{
	for (UMeshComponent* Mesh : Meshes)
	{
		Mesh->SetRenderCustomDepth(true);
		Mesh->SetCustomDepthStencilValue((uint8)Color);
	}

	//if (GEngine != nullptr)
	//{
	//	GEngine->AddOnScreenDebugMessage(-1, 3.f, FColor::Cyan, TEXT("Mouse Over"));
	//}
}

// End mouse over event
void AUnit::OnEndMouseOver(UPrimitiveComponent* TouchedComponent)
{
	for (UMeshComponent* Mesh : Meshes)
	{
		Mesh->SetRenderCustomDepth(false);
	}
}

