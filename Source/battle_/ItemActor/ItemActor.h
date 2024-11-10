// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Struct/ItemParamStruct.h"
#include "ItemActor.generated.h"

UCLASS()
class BATTLE__API AItemActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemParam")
	FItemParamStruct ItemParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemParam")
	int count;
};
