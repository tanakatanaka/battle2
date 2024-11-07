// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItemParamStruct.generated.h"

USTRUCT(BlueprintType)
struct FItemParamStruct : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MyStruct")
    int32 ID;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MyStruct")
    FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MyStruct")
    FString ImageFileName;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="MyStruct")
    FString Text;

};