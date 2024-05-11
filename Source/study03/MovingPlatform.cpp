// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	//UE_LOG(LogTemp, Warning, TEXT("Connection TEST"));
	
}

// Called every frame
// 한글주석이 안된다고? 한글한글한글
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Move platform forwards

	// Get current location
	FVector CurrentLocation = GetActorLocation();

	// Add vector to that location
	CurrentLocation.Y += 1;

	// Set location
	SetActorLocation(CurrentLocation);

	// Send platform back if gone too far


}

