// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryUserWidget.h"
#include "IconUserWidget.h"
#include "../DataManageActor.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DataTable.h"

void UInventoryUserWidget::Setup(ADataManageActor* dataManager)
{
	if (dataManager == nullptr)
	{
		return;
	}

	_DataManager = dataManager;
}


void UInventoryUserWidget::UpdateInventory(int ID, int count)
{
	FItemParamStruct *tmpItemParam = nullptr;
/*
	//itemLibCheck
	for(FItemParamStruct *interParam : _DataManager->ItemParamList)
	{
		if(interParam->ID == ID)
		{
			tmpItemParam = interParam;
			break;
		}
	}

	if(tmpItemParam == nullptr)
	{
		return;
	}

	for (int i = 0; i < _inventoryIDArray; ++i)
	{
		if(_inventoryIDArray[i] == ID)
		{
			UpdateIconWidget(i, count);
			return;
		}
	}

	_inventoryIDArray.Add(id);
	CreateIconWidget(tmpItemParam, count);
*/
}

void UInventoryUserWidget::CreateIconWidget(FItemParamStruct *tmpItemParam, int count)
{
	
}

void UInventoryUserWidget::UpdateIconWidget(int index, int count)
{
	
}


