// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "../Public/MyBaseCharacter.h"
#include "C:\Program Files/Epic Games/UE_5.2/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputAction.h"
#include "C:\Program Files/Epic Games/UE_5.2/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputMappingContext.h"
#include "C:\Program Files/Epic Games/UE_5.2/Engine/Plugins/EnhancedInput/Source/EnhancedInput/Public/InputModifiers.h"
#include "TP_ThirdPersonCharacter.generated.h"


UCLASS(config = Game)
class ATP_ThirdPersonCharacter : public AMyBaseCharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;

public:

	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* pawnMapping;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* moveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* rotateAction;

	UPROPERTY(EditAnywhere)
	float MoveScale;

	UPROPERTY(EditAnywhere)
	float RotateScale;

	UPROPERTY(EditAnywhere)
	class UFloatingPawnMovement* movement;

public:
	ATP_ThirdPersonCharacter();

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);


protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// To add mapping context
	virtual void BeginPlay();

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};
