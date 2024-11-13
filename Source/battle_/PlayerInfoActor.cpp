// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInfoActor.h"

void APlayerInfoActor::PickItem(int id, int num)
{
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
}

