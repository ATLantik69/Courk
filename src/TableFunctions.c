#include <stdio.h>

struct GeneralPlayer {char StructNickname[20]; int StructScore;} Player;

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
   int i = 1;
   system("CLS");
   FILE *Table = fopen("Table.dat","rb");
   fread(&Player, sizeof(Player), 1, Table);
   printf("номер позиции    Очки        Имя\n");
   while (!feof(Table) && i < 11)
   { 
      printf("\n   %3d         %5d        %s",i , Player.StructScore, Player.StructNickname);
      fread(&Player, sizeof(Player), 1, Table);
      i++;
   }
   printf("\n\n");
   system("PAUSE");
}

