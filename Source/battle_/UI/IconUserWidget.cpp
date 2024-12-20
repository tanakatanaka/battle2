// Fill out your copyright notice in the Description page of Project Settings.
#include "IconUserWidget.h"
#include "Engine/Texture2D.h"
#include "UObject/ConstructorHelpers.h"
#include "Misc/Paths.h"

void UIconUserWidget::LoadAssetAsync(const FString& Path)
{
     FString AssetPath = "/Game/Textures/" + Path + "." + Path;

    // ソフトオブジェクトパスを生成
    FSoftObjectPath SoftObjectPath(AssetPath);

    // 非同期ロードを開始
    UAssetManager::GetStreamableManager().RequestAsyncLoad(SoftObjectPath, FStreamableDelegate::CreateLambda([SoftObjectPath, this]()
    {
        UObject* LoadedAsset = SoftObjectPath.ResolveObject();
        UTexture2D* LoadedTexture = Cast<UTexture2D>(LoadedAsset);

        if (LoadedTexture)
        {
            CreateIconImage(LoadedTexture);
        }
    }));
}

void UIconUserWidget::CreateIconImage_Implementation(UTexture2D* LoadedTexture)
{
}

void UIconUserWidget::TriggerDelegate(int32 Value)
{
    if (OnIntValueChanged.IsBound())
    {
        OnIntValueChanged.Execute(Value);
    }
}

void UIconUserWidget::BindIntDelegate(const FIntDelegate& Delegate)
{
    OnIntValueChanged = Delegate; // デリゲートを代入
}