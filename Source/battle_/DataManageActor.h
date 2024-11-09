// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Struct/ItemParamStruct.h"
#include "DataManageActor.generated.h"

UCLASS()
class BATTLE__API ADataManageActor : public AActor
{
	GENERATED_BODY()

public:
		UFUNCTION(BlueprintCallable)
		void Initialize();

private:
	TArray<FItemParamStruct*> ItemParamList;
};
