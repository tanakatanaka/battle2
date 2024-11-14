// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInfoActor.h"
#include "UI/InventoryUserWidget.h"

//callbyBP
void APlayerInfoActor::SetInventoryWidget(UInventoryUserWidget *inventoryWidget)
{
    _inventoryWidget = inventoryWidget;
}

//callbyBP
UInventoryUserWidget* APlayerInfoActor::GetInventoryWidget()
{
    return _inventoryWidget;
}

//callbyBP
void APlayerInfoActor::PickItem(int id, int num)
{


    /*
    for (TPair<int, int> &Pair : ItemIdMap) 
    {
        if (Pair.Key == id) 
        {
            Pair.Value += num;
            return;
        }
    }

    //if noItem
    ItemIdMap.Add(id, num);
    */
}

