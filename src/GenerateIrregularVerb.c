#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void GenerateIrregularVerb(char GeneratedVerbs[4][60], int Tests, int ChosenVerb)
{
	int i, j; // Variables for cycle
	int GeneratedString, StringNumber = 0, WordNumber = 0;
	if (!Tests)
	GeneratedString = rand()%293; // 293 - amount of verbs in .txt file + 1
	else 
	GeneratedString = ChosenVerb;
	int LetterNumber = 0;
	char CurrentLetter;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 30; j++)
		GeneratedVerbs[i][j] = ' ';
	}
	FILE *SearchVerb;
	SearchVerb = fopen("IrregularVerbs.txt","r");
	while (1)
	{
		while(StringNumber != GeneratedString)
		{
			CurrentLetter = getc(SearchVerb);
			if (CurrentLetter == '\n')
			StringNumber++;
		}
		while (WordNumber != 3)
		{
			CurrentLetter = getc(SearchVerb);
			if (CurrentLetter == ' ')
			{
				GeneratedVerbs[WordNumber][LetterNumber] = '\0';
				WordNumber++;
				LetterNumber = 0;
			}
			else
			{
				GeneratedVerbs[WordNumber][LetterNumber] = CurrentLetter;
				LetterNumber++;
			}
		}
		LetterNumber = 0;
		while (CurrentLetter != '\n')
		{
			CurrentLetter = getc(SearchVerb);
			GeneratedVerbs[WordNumber][LetterNumber] = CurrentLetter;
			LetterNumber++;
		}
		GeneratedVerbs[WordNumber][LetterNumber] = '\0';
		break;
	}
	fclose(SearchVerb);
}
