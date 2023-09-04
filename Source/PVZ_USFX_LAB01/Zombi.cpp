// Fill out your copyright notice in the Description page of Project Settings.


#include "Zombi.h"
#include "Components/StaticMeshComponent.h"
// Sets default values
AZombi::AZombi()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ZombiMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Zombi Mesh"));
	
}

// Called when the game starts or when spawned
void AZombi::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AZombi::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector TargetLocation = FVector(100.0f, 0.0f, 0.0f); // Cambia la ubicación objetivo según tus necesidades
	float MovementSpeed = 100.0f; // Velocidad de movimiento

	// Calcula la dirección y distancia al objetivo
	FVector Direction = (TargetLocation - this->GetActorLocation()).GetSafeNormal();
	float DistanceToTarget = FVector::Dist(TargetLocation, this->GetActorLocation());

	// Calcula el desplazamiento en este frame
	float DeltaMove = MovementSpeed * GetWorld()->DeltaTimeSeconds;

	if (DeltaMove > DistanceToTarget)
	{
		// Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
		this->SetActorLocation(TargetLocation);
	}
	else
	{
		// Mueve el objeto en la dirección calculada
		this->AddActorWorldOffset(Direction * DeltaMove);
	}
}

