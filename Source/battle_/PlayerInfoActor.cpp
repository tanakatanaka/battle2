// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerInfoActor.h"

void APlayerInfoActor::PickItem(FItemParamStruct itemInfo, int num)
{
	for (ItemParamInfo item : ItemInfoList)
	{
		if (item.ItemParam.ID == itemInfo.ID)
		{
			item.count += num;
			return;
		}
	}
	
	ItemParamInfo newItem;
	newItem.ItemParam = itemInfo;
	newItem.count = num;

	ItemInfoList.Add(newItem);
	

}

