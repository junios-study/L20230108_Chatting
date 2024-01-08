// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "LobbyPC.generated.h"

class ULobbyWidgetBase;
/**
 * 
 */
UCLASS()
class CHATTING_API ALobbyPC : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
	TObjectPtr<ULobbyWidgetBase> LobbyWidgetObject;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
	//TSubclassOf<ULobbyWidgetBase> LobbyWidgetClass;
	
};
