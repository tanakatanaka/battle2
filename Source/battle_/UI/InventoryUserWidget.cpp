// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryUserWidget.h"
#include "../Struct/ItemParamStruct.h"
#include "Engine/DataTable.h"

void UInventoryUserWidget::ReadStruct()
{
    a = 1;

    // Data Tableアセットを取得
    UDataTable* LoadedDataTable = Cast<UDataTable>(StaticLoadObject(UDataTable::StaticClass(), nullptr, TEXT("/Game/StylishCombatKit/Struct/DataTable/DT_ItemParaDB.DT_ItemParaDB")));

    if (LoadedDataTable)
    {
        // DataTableの全行を取得
        static const FString ContextString(TEXT("GENERAL"));
        TArray<FItemParamStruct*> AllRows;
        LoadedDataTable->GetAllRows<FItemParamStruct>(ContextString, AllRows);

        for (auto& Row : AllRows)
        {
            if (Row)
            {
               
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load DataTable in BeginPlay! Check the path or DataTable settings."));
    }
}