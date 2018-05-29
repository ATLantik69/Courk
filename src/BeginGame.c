#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h> 
#include "Functions.h"

int BeginGame(int LeftTime, int TimeBonus, int AmountInputVerbs, int StandardGameMode, int Tests, char InputVerbs[3][3][60], char Nickname[40])
{
	int Answer = -1; // Word haven't been entered
	srand(time(0));
	float BeginTimeNote, EndTimeNote;
	int Score = 0; 
	int ChosenVerb = 0; // Required for tests
	int CurrentVerb; // For cycles, Verb is for three forms of verbs
	int CurrentWord; // For cycles, Word is for one verb
	char GeneratedVerbs[3][4][60];
	if (!StandardGameMode)
	{
		while(LeftTime > 0)
		{
			Score += AddScore(Answer);
			LeftTime += AddTimeLeft(Answer, TimeBonus);
			GenerateIrregularVerb(GeneratedVerbs[0], Tests, ChosenVerb);
			if (!Tests)
			ShowPanelForTimeMode(GeneratedVerbs[0], Score, LeftTime, Answer);
			BeginTimeNote = clock();
			for (CurrentVerb = 0; CurrentVerb < 3; CurrentVerb++)
			{
				if (!Tests)
				scanf("%s", InputVerbs[0][CurrentVerb]);
				if (!(strcmp(InputVerbs[0][0],"esc")))
				{
					if (Tests)
					return 2;
					goto BackToMenu; // Mark is in the end of function
				}
			}		 
			EndTimeNote = (clock() - BeginTimeNote)/1000; //for Linux 10, for Windows 1000
			LeftTime -= (int) EndTimeNote;
			Answer = CheckVerb(GeneratedVerbs[0], InputVerbs[0]);
		}
		if (Tests)
		return 1;
		printf("Time is up!\nEnter your name: \n\n");
		while (!EnterNickname(Nickname, Tests))
		printf("Your nickname suppose to be less than 20 symbols\n");
		AddNicknameToTable(Nickname, Score); 
	}
	else
	{
		while(Answer != 0)
		{
			for (CurrentVerb = 0; CurrentVerb < AmountInputVerbs; CurrentVerb++)
			GenerateIrregularVerb(GeneratedVerbs[CurrentVerb], Tests, ChosenVerb);
			if (!Tests)
			ShowPanelForStandardMode(GeneratedVerbs, AmountInputVerbs);
			for (CurrentVerb = 0; CurrentVerb < AmountInputVerbs; CurrentVerb++)
			{
				if (!Tests)
				{
					for (CurrentWord = 0; CurrentWord < 3; CurrentWord++)
					scanf("%s", InputVerbs[CurrentVerb][CurrentWord]);
				}
				if (!(strcmp(InputVerbs[0][0],"esc")))
				{
					if (Tests)
					return 2;
					goto BackToMenu; // Mark is in the end of function
				}
			}
			for (CurrentVerb = 0; CurrentVerb < AmountInputVerbs; CurrentVerb++)
			{
				Answer = CheckVerb(GeneratedVerbs[CurrentVerb], InputVerbs[CurrentVerb]);
				if (Answer == 0) break;
			}
		}
		if (!Tests)
		printf("You mistook\n\n");
	}
	BackToMenu:
	if (!Tests)
	{
		printf("Back to menu\n\n");
		printf("Press enter to continue\n");
		getchar(); //blank use in order to not skip pause
		getchar();
	}
}

int EnterNickname(char Nickname[40], int Tests)
{
	if (!Tests)
	scanf("%s",Nickname);
	if (strlen(Nickname) > 20) // In linux 1 symbol requires 2 bytes, char Nickname[40]/2 = 20
	return 0;
	return 1;
}
