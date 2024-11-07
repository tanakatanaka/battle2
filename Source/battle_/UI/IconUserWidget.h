// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IconUserWidget.generated.h"

class UItemParam;


/**
 * 
 */
UCLASS()
class BATTLE__API UIconUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
	UItemParam* m_baseParam;
	

};
