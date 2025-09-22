// Copyright Epic Games, Inc. All Rights Reserved.

#include "NpcEqsGameMode.h"
#include "NpcEqsCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANpcEqsGameMode::ANpcEqsGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
