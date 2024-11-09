// Fill out your copyright notice in the Description page of Project Settings.


#include "DataManageActor.h"
#include "Engine/DataTable.h"

// Sets default values
void ADataManageActor::Initialize()
{
    // Data Table�A�Z�b�g���擾
    UDataTable* LoadedDataTable = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), nullptr, TEXT("/Game/StylishCombatKit/Struct/DataTable/DT_ItemParaDB.DT_ItemParaDB")));

    if (LoadedDataTable)
    {
        // DataTable�̑S�s���擾
        static const FString ContextString(TEXT("GENERAL"));
        TArray<FItemParamStruct*> AllRows;
        LoadedDataTable->GetAllRows<FItemParamStruct>(ContextString, AllRows);
        ItemParamList.Append(AllRows);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load DataTable in BeginPlay! Check the path or DataTable settings."));
    }
}

