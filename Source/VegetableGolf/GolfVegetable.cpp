// Fill out your copyright notice in the Description page of Project Settings.


#include "GolfVegetable.h"
#include "Components/StaticMeshComponent.h"
#include "misc/Paths.h"

// Sets default values
AGolfVegetable::AGolfVegetable()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh"));
    SetRootComponent(StaticMesh);
    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
}

// Called when the game starts or when spawned
void AGolfVegetable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AGolfVegetable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AGolfVegetable::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

