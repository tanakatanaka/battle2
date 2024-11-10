// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInfoActor.h"

void APlayerInfoActor::GetItem(FItemParamStruct itemInfo, int num)
{
	for (TSharedPtr<ItemParamInfo> item : ItemInfoList)
	{
		if (item->ItemParam->ID == itemInfo.ID)
		{
			item->count += num;
			return;
		}
	}
	/*
	TSharedPtr<ItemParamInfo> newItem = MakeShared< ItemParamInfo >(this);
	newItem->ItemParam;
	newItem->count = num;

	ItemInfoList.Add(newItem);
	*/

}

