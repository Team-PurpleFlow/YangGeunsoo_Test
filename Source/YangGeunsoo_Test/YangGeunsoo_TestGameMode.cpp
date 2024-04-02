// Copyright Epic Games, Inc. All Rights Reserved.

#include "YangGeunsoo_TestGameMode.h"
#include "YangGeunsoo_TestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AYangGeunsoo_TestGameMode::AYangGeunsoo_TestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
