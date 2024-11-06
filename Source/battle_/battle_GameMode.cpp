// Copyright Epic Games, Inc. All Rights Reserved.

#include "battle_GameMode.h"
#include "battle_Character.h"
#include "UObject/ConstructorHelpers.h"

Abattle_GameMode::Abattle_GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
