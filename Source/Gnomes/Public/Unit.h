// DigitalDominus (C) 2016

#pragma once

#include "GameFramework/Actor.h"
#include "Gnomes.h"
#include "Unit.generated.h"

/** StaSIIA RPG System */
USTRUCT(BlueprintType, Category = "Stats")
struct GNOMES_API FUnitStats
{
	GENERATED_BODY()

	// Stamina value
	UPROPERTY()
	int32 Stamina;

	// Strength value
	UPROPERTY()
	int32 Strength;

	// Intelligence value
	UPROPERTY()
	int32 Intelligence;

	// Initiative value
	UPROPERTY()
	int32 Initiative;

	// Agility value
	UPROPERTY()
	int32 Agility;

	// All units have min 1 point on each stat by default
	FUnitStats()
	{
		Stamina = 1;
		Strength = 1;
		Intelligence = 1;
		Initiative = 1;
		Agility = 1;
	}
};

UCLASS()
class GNOMES_API AUnit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUnit();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// On Begin Mouse over event
	UFUNCTION()
	void OnBeginMouseOver(UPrimitiveComponent* TouchedComponent);

	// On End Mouse over event
	UFUNCTION()
	void OnEndMouseOver(UPrimitiveComponent* TouchedComponent);


protected:

	// Static Mesh represents an unit in world
	UPROPERTY(VisibleAnywhere)
	class UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, Category = "Unit Stats")
	FUnitStats Stats;

	// Array to store meshes
	TArray<UMeshComponent*> Meshes;

	// Set deafult stencil color
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "On Mouse Over")
	EStencilColor Color = EStencilColor::SC_White;
};
