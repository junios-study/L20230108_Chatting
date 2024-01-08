// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyPC.h"
#include "LobbyWidgetBase.h"


void ALobbyPC::BeginPlay()
{
	FSoftClassPath LobbyWidgetClass(TEXT("/Script/UMGEditor.WidgetBlueprint'/Game/Blueprints/Lobby/WBP_Lobby.WBP_Lobby_C'"));
	UClass* WidgetClass = LobbyWidgetClass.TryLoadClass<UUserWidget>();

	if (WidgetClass && IsLocalPlayerController())
	{
		LobbyWidgetObject = CreateWidget<UUserWidget>(this, WidgetClass);
		if (LobbyWidgetObject)
		{
			LobbyWidgetObject->AddToViewport();
			//LobbyWidgetObject->RemoveFromViewport();
		}
	}
}
