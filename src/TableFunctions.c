#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Functions.h"

void AddNicknameToTable(char Nickname[40], int Score)
{
	strcpy(Player.StructNickname, Nickname);
	Player.StructScore = Score;
	FILE *Table = fopen("Table.dat","ab");
	fwrite(&Player, sizeof(Player), 1, Table);
	fclose(Table);
}

int ShowTable(int Tests)
{ 
	int PositionNumber = 0;
	struct GeneralPlayer PlayersMassive[10];
	if (!Tests)
	system("reset");
	int PlayersAmount = SortTable(PlayersMassive);
	if (PlayersAmount == -1)
	{
		if (!Tests)
		{
			printf("There were no games\n\n");
			printf("Press enter to continue\n");
			getchar(); //blank use in order to not skip pause
			getchar();
		}
		return 0;
	}
	else
	{
		if (!Tests)
		{
			printf("Position number    Score        Name\n");
			for(; PositionNumber < PlayersAmount; PositionNumber++)
			printf("\n   %3d         %5d        %s", PositionNumber + 1,
			PlayersMassive[PositionNumber].StructScore, PlayersMassive[PositionNumber].StructNickname);
			printf("\n\n");
			printf("Press enter to continue\n");
			getchar(); //blank use in order to not skip pause
			getchar();
		}
	return 1;
	}
}

int SortTable(struct GeneralPlayer *PlayersMassive)
{
	FILE *Table = fopen("Table.dat","rb");
	if (!Table)
	return -1;
	int PlayersAmount = 0, MaxPlayers = 0;
	fread(&Player, sizeof(Player), 1, Table);
	while (!feof(Table))
	{ 
		PlayersMassive[PlayersAmount] = Player;
		fread(&Player, sizeof(Player), 1, Table);
		PlayersAmount++;
		if (PlayersAmount == 10)
		{
			PlayersAmount = 0;
			MaxPlayers = 1;
		}
	}
	if (MaxPlayers)
	PlayersAmount = 10;
	struct GeneralPlayer CurrentPlayer;
	int j, i = 1; // Variables for cycle
	for (; i < PlayersAmount; i++) //Insertsort
	{
		CurrentPlayer = PlayersMassive[i]; 
		j = i - 1;
		while ((j >= 0) && (CurrentPlayer.StructScore > PlayersMassive[j].StructScore))
		{
			PlayersMassive[j + 1] = PlayersMassive[j];
			j = j - 1;
		}
		PlayersMassive[j + 1] = CurrentPlayer;
	}
	fclose(Table);
	return PlayersAmount;
}
