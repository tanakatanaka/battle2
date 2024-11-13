// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryUserWidget.h"
#include "IconUserWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/DataTable.h"

void UInventoryUserWidget::Setup()
{

}

void UInventoryUserWidget::UpdateIconWidget()
{
	int newID = 0;
	TObjectPtr<UIconUserWidget> newWidget = CreateWidget<UIconUserWidget>(this);
	//newWidget->UpdateIconInfo(null, 0);
	
	//Game

	UIconUserWidgetList.Add(newWidget);
}