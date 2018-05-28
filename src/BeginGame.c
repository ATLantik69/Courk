
#include <time.h>
#include <string.h> 
#include "Functions.h"

void BeginGame(int LeftTime, int TimeBonus, int AmountInputVerbs, int StandardGameMode)
{
   int Answer = -1; // слово ещё не введено
   float BeginTimeNote, EndTimeNote;
   char Nickname[20];
   int Score = 0; 
   int CurrentVerb; // для циклов
   char InputVerbs[3][30], GeneratedVerbs[3][4][30];
   if (!StandardGameMode)
   {
      while(LeftTime > 0)
      {
         Score += AddScore(Answer, Score);
         LeftTime += AddTimeLeft(Answer, LeftTime, TimeBonus);
         GenerateIrregularVerb(GeneratedVerbs[0]);
         ShowPanel(GeneratedVerbs[0], Score, LeftTime, Answer);
         BeginTimeNote = clock();
         for (CurrentVerb = 0; CurrentVerb < 3; CurrentVerb++)
         scanf("%s", InputVerbs[CurrentVerb]);
         EndTimeNote = (clock() - BeginTimeNote)/1000;
         LeftTime -= (int) EndTimeNote;
         Answer = CheckVerb(GeneratedVerbs[0], InputVerbs);
      }
      printf("Время вышло!\nВведите ваше имя: ");
      MarkEnterNickname:
      scanf("%s",Nickname);
      if (strlen(Nickname) > 20)
      {
         printf("Имя не должно превышать 20 символов\n");
         goto MarkEnterNickname;
      }
      AddNicknameToTable(Nickname, Score); 
   }
   /*else
   {
      while(Answer != 0)
      {
         for (CurrentVerb = 0; CurrentVerb < AmountInputVerbs; CurrentVerb++)
         GenerateIrregularVerb(GeneratedVerbs[CurrentVerb], AmountInputVerbs);
         ShowPanelForStandartMode(GeneratedVerbs);
         for (CurrentVerb = 0; CurrentVerb < AmountInputVerbs; CurrentVerb++)
         scanf("%s", InputVerbs[CurrentVerb]);
         for (CurrentVerb = 0; CurrentVerb < AmountInputVerbs; CurrentVerb++)
         {
		    Answer = CheckVerb(GeneratedVerbs[CurrentVerb], InputVerbs[CurrentVerb]);
      }
   printf("Вы ошиблись\n\n");
   system("PAUSE");
   }*/
}
