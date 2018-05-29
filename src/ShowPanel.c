#include <stdlib.h>
#include <stdio.h>

void ShowPanelForTimeMode(char GeneratedVerbs[4][60], int Score, int LeftTime, int Answer)
{
	system("reset");
	printf(" Score   Time left   Status of last word\n");
	printf("%5.0d       %2.0d             ",Score,LeftTime);
	if (Answer == 1) printf("Correct\n");
	if (Answer == 0) printf("Incorrect\n");
	printf("\n%s\n",GeneratedVerbs[3]);
}

void ShowPanelForStandardMode(char GeneratedVerbs[3][4][60], int AmountInputVerbs)
{
	system("reset");
	int CurrentVerb = 0;
	for (; CurrentVerb < AmountInputVerbs; CurrentVerb++)
	printf("%s\n",GeneratedVerbs[CurrentVerb][3]);
	printf("\n\n");
}
