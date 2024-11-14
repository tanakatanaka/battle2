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

void UInventoryUserWidget::UpdateIconWidget(int ID, int count)
{
	FItemParamStruct *tmpItemParam = nullptr;

	for(FItemParamStruct *interParam : _DataManager->ItemParamList)
	{
		if(interParam->ID == ID)
		{
			tmpItemParam = interParam;
			break;
		}
	}

	




}


