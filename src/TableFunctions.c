#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Functions.h"

void AddNicknameToTable(char Nickname[20], int Score)
{
   strcpy(Player.StructNickname, Nickname);
   Player.StructScore = Score;
   FILE *Table = fopen("Table.dat","ab");
   fwrite(&Player, sizeof(Player), 1, Table);
   fclose(Table);
}

void ShowTable()
{ 
   int PositionNumber = 0;
   struct GeneralPlayer PlayersMassive[10];
   system("CLS");
   int PlayersAmount = SortTable(PlayersMassive);
   if (PlayersAmount == -1)
   printf("Ещё не было ни одной игры\n\n");
   else
   {
      printf("номер позиции    Очки        Имя\n");
      for(; PositionNumber < PlayersAmount; PositionNumber++)
      printf("\n   %3d         %5d        %s",PositionNumber + 1 , PlayersMassive[PositionNumber].StructScore, PlayersMassive[PositionNumber].StructNickname);
      printf("\n\n");
   }
   system("PAUSE");
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
   int j, i = 1; // переменные для цикла
   for (; i < PlayersAmount; i++) //Insert сортрировка
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

