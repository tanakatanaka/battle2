// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Struct/ItemParamStruct.h"
#include "InventoryUserWidget.generated.h"

class UIconUserWidget;

/**
 * 
 */
UCLASS()
class BATTLE__API UInventoryUserWidget : public UUserWidget
{
	GENERATED_BODY()
	TArray<UIconUserWidget*> UIconUserWidgetList;

};
