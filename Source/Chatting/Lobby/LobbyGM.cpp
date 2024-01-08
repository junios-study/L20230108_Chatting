// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGM.h"
#include "LobbyGS.h"

void ALobbyGM::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
	//Player Controller ���ڸ� ��� �� �ο��� ���, GameState ����

	ALobbyGS* GS = GetGameState<ALobbyGS>();
	if (GS)
	{
		GS->IncreasePlayerCount();
		GS->OnRep_PlayerCount(); //Only server call
	}
}

void ALobbyGM::Logout(AController* Exiting)
{
	//Player Controller ���ڸ� ��� �� �ο��� ���,
	ALobbyGS* GS = GetGameState<ALobbyGS>();
	if (GS)
	{
		GS->DecreasePlayerCount();
		GS->OnRep_PlayerCount(); //Only server call
	}


	Super::Logout(Exiting);
}
