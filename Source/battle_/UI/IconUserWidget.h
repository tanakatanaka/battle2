// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Struct/ItemParamStruct.h"
#include "IconUserWidget.generated.h"

class UTexture2D;


/**
 * 
 */
UCLASS()
class BATTLE__API UIconUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UTexture2D* LoadTextureFromFile();
	void UpdateIconInfo(FItemParamStruct itemParam, int count);
private:
	FItemParamStruct _ItemParam;
	int _count;


};
