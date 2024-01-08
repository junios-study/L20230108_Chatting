// Fill out your copyright notice in the Description page of Project Settings.


#include "TitleWidgetBase.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"

void UTitleWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();

	MakeRoomButton = Cast<UButton>(GetWidgetFromName(TEXT("MakeRoomButton")));
	ConnectServerButton = Cast<UButton>(GetWidgetFromName(TEXT("ConnectServerButton")));
	IPTextBox = Cast<UEditableTextBox>(GetWidgetFromName(TEXT("IPTextBox")));

}
