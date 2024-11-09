// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Struct/ItemParamStruct.h"
#include "PlayerInfoActor.generated.h"

UCLASS()
class BATTLE__API APlayerInfoActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlayerInfoActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class ItemParamInfo
	{
	public:
		FItemParamStruct ItemParam;
		int count;
	};

	//éÊìæÇµÇΩÉAÉCÉeÉÄèÓïÒ
	TArray<ItemParamInfo*> ItemInfoList;

};
