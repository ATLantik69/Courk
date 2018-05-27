#include <stdio.h>

void AddNicknameToTable(char Nickname[20],int Score)
{
   struct GeneralPlayer {char StructNickname[20]; int StructScore;} Player;
   strcpy(Player.StructNickname, Nickname);
   Player.StructScore = Score;
   FILE *Table = fopen("Table.dat","ab");
   fwrite(&Player,sizeof(Player),1,Table);
   fclose(Table);
}
