// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LobbyWidgetBase.generated.h"


class UTextBlock;
class UScrollBox;
class UEditableTextBox;

/**
 * 
 */
UCLASS()
class CHATTING_API ULobbyWidgetBase : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	void UpdatePlayerCount(int32 InPlayerCount);

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "UI")
	TObjectPtr<UTextBlock> PlayerCountTextBox;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "UI")
	TObjectPtr<UScrollBox> ChatScrollBox;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "UI")
	TObjectPtr<UEditableTextBox> ChatInputTextBox;

};
