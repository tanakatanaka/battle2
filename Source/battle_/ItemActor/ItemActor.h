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
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemParam")
	FItemParamStruct ItemParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ItemParam")
	int count;
};
