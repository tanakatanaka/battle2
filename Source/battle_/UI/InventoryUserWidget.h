// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Struct/ItemParamStruct.h"
#include "InventoryUserWidget.generated.h"

class ADataManageActor;

/**
 * 
 */
UCLASS()
class BATTLE__API UInventoryUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void Setup(ADataManageActor* dataManager);

	void UpdateInventory(int ID, int count);

private:
		void UpdateIconWidget(int index, int count);
		void CreateIconWidget(FItemParamStruct *itemParam, int count);
		TObjectPtr<ADataManageActor> _DataManager;
		TArray<int> _inventoryIDArray;
};
