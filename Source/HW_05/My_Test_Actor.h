// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "My_Test_Actor.generated.h"

UCLASS()
class HW_05_API AMy_Test_Actor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMy_Test_Actor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void Move(float DeltaTime);
	void Turn(float DeltaTime);
	void PrintTransform();
	void TriggerEvent();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
private:
	int Count_Random;
	int Count;
	float Timer;
	float Distance_Sum;
};
