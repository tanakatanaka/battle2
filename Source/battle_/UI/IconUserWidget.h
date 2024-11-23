// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Struct/ItemParamStruct.h"
#include "Engine/StreamableManager.h"
#include "Engine/AssetManager.h"
#include "UObject/SoftObjectPath.h"
#include "UObject/SoftObjectPtr.h"
#include "IconUserWidget.generated.h"

class UTexture2D;

DECLARE_DELEGATE_OneParam(FIntDelegate, int32);

/**
 * 
 */
UCLASS()
class BATTLE__API UIconUserWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void LoadAssetAsync(const FString& Path);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Icon")
	void CreateIconImage(UTexture2D* LoadedTexture);
	virtual void CreateIconImage_Implementation(UTexture2D* LoadedTexture);

	void BindIntDelegate(const FIntDelegate& Delegate);
	
	UFUNCTION(BlueprintCallable)
	void TriggerDelegate(int32 Value);


private:
	// デリゲートのインスタンス
	FIntDelegate OnIntValueChanged;

};
