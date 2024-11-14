// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SharedPointer.h"
#include "Struct/ItemParamStruct.h"
#include "PlayerInfoActor.generated.h"

class UInventoryUserWidget;

UCLASS()
class BATTLE__API APlayerInfoActor : public AActor
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	void Initialize(UInventoryUserWidget *inventoryWidget);

	UFUNCTION(BlueprintCallable)
	void PickItem(int id, int num);

private:
	TObjectPtr<UInventoryUserWidget> _inventoryWidget;
};
