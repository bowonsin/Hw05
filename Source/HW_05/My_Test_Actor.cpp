// My_test_Actor.cpp

#include "My_Test_Actor.h"
#include "Engine/Engine.h"

AMy_Test_Actor::AMy_Test_Actor()
{
	PrimaryActorTick.bCanEverTick = true;
	Count = 0;
	Timer = 0;
	Distance_Sum = 0;
}

// Called when the game starts or when spawned
void AMy_Test_Actor::BeginPlay()
{
	Super::BeginPlay();
	
	PrintTransform();
	AMy_Test_Actor::SetActorLocation(FVector(0, 0, 0));
	AMy_Test_Actor::SetActorRotation(FRotator(100.0f,100.0f,100.0f));
	

}

// Called every frame
void AMy_Test_Actor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Timer += 10 * DeltaTime;
	if (Count < 10 && Timer > 12.0f )
	{
		Move(DeltaTime);
		Turn(DeltaTime);
		Count++;
		PrintTransform();
		Timer = 0;
		TriggerEvent();
	}

}
void AMy_Test_Actor::PrintTransform()
{
	FVector ActorLocation = GetActorLocation();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Hello Unreal5"));
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, FString::Printf(TEXT("Actor : %s"), *GetName()));
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, FString::Printf(TEXT("Actor : %s"), *ActorLocation.ToString()));
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, FString::Printf(TEXT("Count : %d"), Count));
		if (Count == 10)
		{
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Purple, FString::Printf(TEXT("Event : %d"), Count_Random));
			GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Purple, FString::Printf(TEXT("Sum: %f"), Distance_Sum));
			
		}
	}
}


void AMy_Test_Actor::Move(float DeltaTime)
{
	FVector Test= GetActorLocation();
	float Moving = 15.0f;
	Test.X += Moving;//(150.0f * DeltaTime); 시간 값 받아서 호출되는 시간맞쳐서 속도 조절
	AMy_Test_Actor::SetActorLocation(Test);
	Distance_Sum += Moving;
}
void AMy_Test_Actor::Turn(float DeltaTime)
{
	FRotator Test = GetActorRotation();
	Test.Roll += 10.0f;//(150.0f * DeltaTime); 위에 랑 마찬가지로
	AMy_Test_Actor::SetActorRotation(Test);
}

void AMy_Test_Actor::TriggerEvent() 
{
	if (FMath::RandRange(0, 1))
		Count_Random++;
}

