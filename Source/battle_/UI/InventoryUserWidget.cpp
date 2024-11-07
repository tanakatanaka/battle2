// Fill out your copyright notice in the Description page of Project Settings.


#include "InventoryUserWidget.h"
#include "../Struct/ItemParamStruct.h"
#include "Engine/DataTable.h"

void UInventoryUserWidget::ReadStruct()
{
    a = 1;

    // Data Tableアセットを取得
    static ConstructorHelpers::FObjectFinder<UDataTable> DataTableObj(TEXT("DataTable'/All/Game/StylishCombatKit/Struct/DataTable/DT_ItemParaDB.DT_ItemParaDB'"));
    
    if (DataTableObj.Succeeded())
    {
        UDataTable* DataTable = DataTableObj.Object;

        for (const auto& Row : DataTable->GetRowMap())
        {
            FItemParamStruct* DataRow = (FItemParamStruct*)(Row.Value);

            if (DataRow)
            {
                /*
                // 各プロパティにアクセス
                UE_LOG(LogTemp, Log, TEXT("Name: %s, Age: %d, Score: %f"),
                    *DataRow->Name,
                    DataRow->Age,
                    DataRow->Score);
                */
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load DataTable"));
    }
    
}