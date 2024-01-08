// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGM.h"
#include "LobbyGS.h"

void ALobbyGM::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
	//Player Controller 숫자를 세어서 총 인원를 계산, GameState 저장

	ALobbyGS* GS = GetGameState<ALobbyGS>();
	if (GS)
	{
		GS->IncreasePlayerCount();
	}
}

void ALobbyGM::Logout(AController* Exiting)
{
	//Player Controller 숫자를 세어서 총 인원를 계산,
	ALobbyGS* GS = GetGameState<ALobbyGS>();
	if (GS)
	{
		GS->DecreasePlayerCount();
	}


	Super::Logout(Exiting);
}
