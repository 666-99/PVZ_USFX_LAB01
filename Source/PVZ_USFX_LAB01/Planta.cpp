// Fill out your copyright notice in the Description page of Project Settings.


#include "Planta.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
APlanta::APlanta()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PlantaMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plant Mesh"));
}

// Called when the game starts or when spawned
void APlanta::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlanta::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

