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
   int PositionNumber = 0;
   struct GeneralPlayer PlayersMassive[10];
   system("CLS");
   int PlayersAmount = SortTable(PlayersMassive);
   printf("����� �������    ����        ���\n");
   for(; PositionNumber < PlayersAmount; PositionNumber++)
   printf("\n   %3d         %5d        %s",PositionNumber + 1 , PlayersMassive[PositionNumber].StructScore, PlayersMassive[PositionNumber].StructNickname);
   printf("\n\n");
   system("PAUSE");
}

int SortTable(struct GeneralPlayer PlayersMassive[10])
{
   FILE *Table = fopen("Table.dat","rb");
   int PlayersAmount = 0;
   fread(&Player, sizeof(Player), 1, Table);
   while (!feof(Table) && PlayersAmount < 10)
   { 
      PlayersMassive[PlayersAmount] = Player;
      fread(&Player, sizeof(Player), 1, Table);
      PlayersAmount++;
   }
   struct GeneralPlayer CurrentPlayer;
   int j, i = 1; // ���������� ��� �����
   for (; i < PlayersAmount; i++) //Insert �����������
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
