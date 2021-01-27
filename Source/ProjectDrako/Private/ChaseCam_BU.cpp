// Fill out your copyright notice in the Description page of Project Settings.


#include "ChaseCam_BU.h"

// Sets default values
AChaseCam_BU::AChaseCam_BU()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChaseCam_BU::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChaseCam_BU::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AChaseCam_BU::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

