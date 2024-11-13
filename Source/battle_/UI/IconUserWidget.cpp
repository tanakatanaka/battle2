// Fill out your copyright notice in the Description page of Project Settings.
#include "IconUserWidget.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Engine/Texture2D.h"
#include "Engine/PostProcessVolume.h"


UTexture2D* UIconUserWidget::LoadTextureFromFile()
{
    const FString& ImagePath = _ItemParam.ImageFileName;

    // ファイルをバイト配列に読み込む
    TArray<uint8> ImageData;
    if (!FFileHelper::LoadFileToArray(ImageData, *ImagePath))
    {
        UE_LOG(LogTemp, Error, TEXT("Failed to load image file: %s"), *ImagePath);
        return nullptr;
    }

    // ImageWrapper モジュールの取得と初期化
    IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
    TSharedPtr<IImageWrapper> ImageWrapper = ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);

    // 画像データをデコード
    if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(ImageData.GetData(), ImageData.Num()))
    {
        // 画像の幅と高さを取得
        int32 Width = ImageWrapper->GetWidth();
        int32 Height = ImageWrapper->GetHeight();

        TArray<uint8> RawData;
        if (ImageWrapper->GetRaw(ERGBFormat::BGRA, 8, RawData))
        {
            // テクスチャ作成
            UTexture2D* Texture = UTexture2D::CreateTransient(Width, Height, PF_B8G8R8A8);

            // テクスチャの設定
            void* TextureData = Texture->GetPlatformData()->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
            FMemory::Memcpy(TextureData, RawData.GetData(), RawData.Num());
            Texture->GetPlatformData()->Mips[0].BulkData.Unlock();

            // テクスチャを更新
            Texture->UpdateResource();

            return Texture;
        }
    }

    UE_LOG(LogTemp, Error, TEXT("Failed to decode image data."));
    return nullptr;
}

void UIconUserWidget::UpdateIconInfo(FItemParamStruct itemParam, int count)
{
    _ItemParam = itemParam;
    _count = count;
}


