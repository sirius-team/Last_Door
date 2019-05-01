// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Last_DoorGameMode.h"
#include "Last_DoorHUD.h"
#include "Last_DoorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALast_DoorGameMode::ALast_DoorGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALast_DoorHUD::StaticClass();
}
