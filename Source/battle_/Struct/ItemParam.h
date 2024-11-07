// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ItemParam.generated.h"

/**
 * 
 */
UCLASS()
class BATTLE__API UItemParam : public UObject
{
	GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int32 Id;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    int32 count;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
    FString Text;
	
};
