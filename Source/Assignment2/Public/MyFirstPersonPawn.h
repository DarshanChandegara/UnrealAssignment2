// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h" 
#include "MyBaseCharacter.h"
#include "Components/CapsuleComponent.h"
#include "C:\Program Files/Epic Games/UE_5.2/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputAction.h"
#include "C:\Program Files/Epic Games/UE_5.2/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputMappingContext.h"
#include "C:\Program Files/Epic Games/UE_5.2/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputModifiers.h"
#include "MyFirstPersonPawn.generated.h"

UCLASS()
class ASSIGNMENT2_API AMyFirstPersonPawn : public AMyBaseCharacter
{
	GENERATED_BODY()

public:
	AMyFirstPersonPawn();

	void Move(const struct FInputActionValue& action);

	void Rotate(const struct FInputActionValue& action);

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;



public:
	UPROPERTY(EditAnywhere)
	USpringArmComponent* springArm;

	UPROPERTY(EditAnywhere)
	UCameraComponent* camera;

	UPROPERTY(EditAnywhere)
	class UFloatingPawnMovement* movement;

	UPROPERTY(EditAnywhere)
	float MoveScale;

	UPROPERTY(EditAnywhere)
	float RotateScale;

	UPROPERTY()
	UInputMappingContext* pawnMapping;

	UPROPERTY()
	UInputAction* moveAction;

	UPROPERTY()
	UInputAction* rotateAction;

	UPROPERTY()
	UInputAction* jumpAction; 

};
