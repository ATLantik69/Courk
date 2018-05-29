#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h> 
#include "Functions.h"

void BeginGame(int LeftTime, int TimeBonus, int AmountInputVerbs, int StandardGameMode)
{
   int Answer = -1; // Word haven't been entered
   float BeginTimeNote, EndTimeNote;
   char Nickname[40];
   int Score = 0; 
   int CurrentVerb; // For cycles, Verb is for three forms of verbs
   int CurrentWord; // For cycles, Word is for one verb
   char InputVerbs[3][3][60], GeneratedVerbs[3][4][60];
   if (!StandardGameMode)
   {
      while(LeftTime > 0)
      {
         Score += AddScore(Answer, Score);
         LeftTime += AddTimeLeft(Answer, LeftTime, TimeBonus);
         GenerateIrregularVerb(GeneratedVerbs[0]);
         ShowPanelForTimeMode(GeneratedVerbs[0], Score, LeftTime, Answer);
         BeginTimeNote = clock();
         for (CurrentVerb = 0; CurrentVerb < 3; CurrentVerb++)
         {
            scanf("%s", InputVerbs[0][CurrentVerb]);
            if (!(strcmp(InputVerbs[0][0],"esc")))
	     	goto BackToMenu;
		 }
         EndTimeNote = (clock() - BeginTimeNote)/1000;
         LeftTime -= (int) EndTimeNote;
         Answer = CheckVerb(GeneratedVerbs[0], InputVerbs[0]);
      }
      printf("Time is up!\nEnter your name: ");
      MarkEnterNickname:
      scanf("%s",Nickname);
      if (strlen(Nickname) > 20)
      {
         printf("Your nickname suppose to be less than 20 symbols\n");
         goto MarkEnterNickname;
      }
      AddNicknameToTable(Nickname, Score); 
   }
   else
   {
      while(Answer != 0)
      {
         for (CurrentVerb = 0; CurrentVerb < AmountInputVerbs; CurrentVerb++)
         GenerateIrregularVerb(GeneratedVerbs[CurrentVerb]);
         ShowPanelForStandardMode(GeneratedVerbs, AmountInputVerbs);
         for (CurrentVerb = 0; CurrentVerb < AmountInputVerbs; CurrentVerb++)
         {
		    for (CurrentWord = 0; CurrentWord < 3; CurrentWord++)
            scanf("%s", InputVerbs[CurrentVerb][CurrentWord]);
            if (!(strcmp(InputVerbs[0][0],"esc")))
	     	goto BackToMenu;
     	 }
         for (CurrentVerb = 0; CurrentVerb < AmountInputVerbs; CurrentVerb++)
         {
		    Answer = CheckVerb(GeneratedVerbs[CurrentVerb], InputVerbs[CurrentVerb]);
		    if (Answer == 0) break;
         }
      }
      printf("You mistook\n\n");
      system("PAUSE");
   }
   BackToMenu:
   printf("Back to menu\n\n");
   system("PAUSE");
}
