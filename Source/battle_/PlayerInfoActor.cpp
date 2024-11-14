// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInfoActor.h"
#include "UI/InventoryUserWidget.h"

void APlayerInfoActor::Initialize(UInventoryUserWidget *inventoryWidget)
{
    _inventoryWidget = inventoryWidget;
}


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

