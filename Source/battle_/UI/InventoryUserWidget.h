// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Struct/ItemParamStruct.h"
#include "InventoryUserWidget.generated.h"

class UIconUserWidget;
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

	void UpdateIconWidget(int ID, int count);
private:
		TArray<TObjectPtr<UIconUserWidget>> _IconUserWidgetList;
		TObjectPtr<ADataManageActor> _DataManager;

};
