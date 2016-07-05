// Fill out your copyright notice in the Description page of Project Settings.

#include "Gnomes.h"
#include "Unit.h"


// Sets default values
AUnit::AUnit()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUnit::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("I am a unit"));
	
}

// Called every frame
void AUnit::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

