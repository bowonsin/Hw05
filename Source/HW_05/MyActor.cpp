// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay() // 맨 처음 시작 할따 호출
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Hello, World!"));

	FVector ActorLocation = GetActorLocation();
	/*
	if (GEngine)
		;
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Hello Unreal5"));
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, FString::Printf(TEXT("Actor : %s"), *GetName()));
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, FString::Printf(TEXT("Actor : %s"), ActorLocation.ToString()));
	}
	*/

	AActor::SetActorLocation(FVector(0,0,0));
	//AActor::SetActorRotation(FRotator(100.0f, 100.0f, 100.0f));

}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	
	

}