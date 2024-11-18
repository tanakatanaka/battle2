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

	for (int i = 0; i < _inventoryIDArray.Num(); ++i)
	{
		if(_inventoryIDArray[i] == ID)
		{
			Async(EAsyncExecution::TaskGraphMainThread, [this, i, count]()
			{
				UpdateIconWidget(i, count);
			});
			return;
		}
	}

	_inventoryIDArray.Add(ID);
	

	Async(EAsyncExecution::TaskGraphMainThread, [this, tmpItemParam, count]()
	{
		CreateIconWidget(*tmpItemParam, count);
	});
}


void UInventoryUserWidget::CreateIconWidget_Implementation(FItemParamStruct tmpItemParam, int count)
{
}

void UInventoryUserWidget::UpdateIconWidget_Implementation(int index, int count)
{	
}

