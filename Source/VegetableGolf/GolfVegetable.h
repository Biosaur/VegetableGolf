// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "GolfVegetable.generated.h"

UCLASS()
class VEGETABLEGOLF_API AGolfVegetable : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AGolfVegetable();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    UPROPERTY(VisibleAnywhere)
    class UStaticMeshComponent* StaticMesh;
    class USpringArmComponent* SpringArm;
    class UCameraComponent* Camera;

};