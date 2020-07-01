// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UE4_Udemy_1_6HUD.generated.h"

UCLASS()
class AUE4_Udemy_1_6HUD : public AHUD
{
	GENERATED_BODY()

public:
	AUE4_Udemy_1_6HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

