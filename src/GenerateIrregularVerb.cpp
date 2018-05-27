#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void GenerateIrregularVerb(char GeneratedWord[4][30])
{
   srand(time(0));
   int GeneratedString = rand()%5, StringNumber = 0, WordNumber = 0;
   int LetterNumber = 0;
   char CurrentLetter;
   for (int i = 0; i < 4; i++)
   {
   	  for (int j = 0; j < 30; j++)
   	  GeneratedWord[i][j] = ' ';
   }
   FILE *SearchVerb;
   SearchVerb=fopen("IrregularVerbs.txt","r");
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
         	GeneratedWord[WordNumber][LetterNumber] = '\0';
            WordNumber++;
            LetterNumber = 0;
		 }
		 else
		 {
		    GeneratedWord[WordNumber][LetterNumber] = CurrentLetter;
		    LetterNumber++;
		 }
	  }
	  LetterNumber = 0;
	  while (CurrentLetter != '\n')
	  {
	     CurrentLetter = getc(SearchVerb);
		 GeneratedWord[WordNumber][LetterNumber] = CurrentLetter;
		 LetterNumber++;
	  }
	break;
	}
   fclose(SearchVerb);
}
