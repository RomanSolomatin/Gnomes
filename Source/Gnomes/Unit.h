// DigitalDominus (C) 2016

#pragma once

#include "GameFramework/Actor.h"
#include "Unit.generated.h"

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

	/** StaSIIA RPG System */

	// Returns current value of Stamina
	FORCEINLINE int32 GetStaminaValue() { return Stamina; }

	// Returns current value of Strength
	FORCEINLINE int32 GetStrengthValue() { return Strength; }

	// Returns current value of Intelligence
	FORCEINLINE int32 GetIntelligenceValue() { return Intelligence; }

	// Returns current value of Initiative
	FORCEINLINE int32 GetInitiativeValue() { return Initiative; }

	// Returns current value of Agility
	FORCEINLINE int32 GetAgilityValue() { return Agility; }


protected:

	// Static Mesh represents an unit in world
	// UPROPERTY!
	class UStaticMeshComponent* Mesh;

	// Stamina value
	// UPROPERTY!
	int32 Stamina;

	// Strength value
	int32 Strength;

	// Intelligence value
	int32 Intelligence;

	// Initiative value
	int32 Initiative;

	// Agility value
	int32 Agility;	
};
