// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE4_Udemy_1_6GameMode.h"
#include "UE4_Udemy_1_6HUD.h"
#include "UE4_Udemy_1_6Character.h"
#include "UObject/ConstructorHelpers.h"

AUE4_Udemy_1_6GameMode::AUE4_Udemy_1_6GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUE4_Udemy_1_6HUD::StaticClass();
}
