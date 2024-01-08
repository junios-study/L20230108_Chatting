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
	}
}

void ALobbyGM::Logout(AController* Exiting)
{
	//Player Controller ���ڸ� ��� �� �ο��� ���,
	ALobbyGS* GS = GetGameState<ALobbyGS>();
	if (GS)
	{
		GS->DecreasePlayerCount();
	}


	Super::Logout(Exiting);
}
