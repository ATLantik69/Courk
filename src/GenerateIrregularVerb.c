#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void GenerateIrregularVerb(char GeneratedVerbs[4][30])
{
   int i, j; // переменные для циклов
   srand(time(0));
   int GeneratedString = rand()%5, StringNumber = 0, WordNumber = 0;
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
