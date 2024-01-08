// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyWidgetBase.h"
#include "Components/ScrollBox.h"
#include "Components/EditableTextBox.h"
#include "Components/TextBlock.h"

void ULobbyWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerCountTextBox = Cast<UTextBlock>(GetWidgetFromName("PlayerCountTextBox"));
	ChatScrollBox = Cast<UScrollBox>(GetWidgetFromName("ChatScrollBox"));
	ChatInputTextBox = Cast<UEditableTextBox>(GetWidgetFromName("ChatInputTextBox"));
}

void ULobbyWidgetBase::UpdatePlayerCount(int32 InPlayerCount)
{
	if (PlayerCountTextBox)
	{
		FString Message = FString::Printf(TEXT("%d 명"), InPlayerCount);
		PlayerCountTextBox->SetText(FText::FromString(Message));
	}
}
