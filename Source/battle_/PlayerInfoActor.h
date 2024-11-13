// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SharedPointer.h"
#include "Struct/ItemParamStruct.h"
#include "PlayerInfoActor.generated.h"

UCLASS()
class BATTLE__API APlayerInfoActor : public AActor
{
	GENERATED_BODY()

	

public:
	TMap<int, int> ItemIdMap;

	UFUNCTION(BlueprintCallable)
	void PickItem(int id, int num);
};
