// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MultiplayerCourseGameMode.generated.h"

UCLASS(minimalapi)
class AMultiplayerCourseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMultiplayerCourseGameMode();

	UFUNCTION(BlueprintCallable, Category = "GameMode")
	void HostLANGame();

	UFUNCTION(BlueprintCallable, Category = "GameMode")
	void JoinLANGame();
};
