// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPlayer1.h"

// Sets default values
ATestPlayer1::ATestPlayer1()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestPlayer1::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestPlayer1::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestPlayer1::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

