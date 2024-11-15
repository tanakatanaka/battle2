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

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Icon")
	void UpdateIconWidget(int index, int count);
	virtual void UpdateIconWidget_Implementation(int index, int count);


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Icon")
	void CreateIconWidget(FItemParamStruct itemParam, int count);
	virtual void CreateIconWidget_Implementation(FItemParamStruct itemParam, int count);

private:
		

		

		TObjectPtr<ADataManageActor> _DataManager;
		TArray<int> _inventoryIDArray;
};
