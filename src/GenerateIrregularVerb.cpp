#include <stdio.h>
#include <time.h>
#include <stdlib.h>

GenerateIrregularVerb(char GeneratedWord[4][30])
{
   srand(time(0));
   int GeneratedString = rand()%5, StringNumber = 0, WordNumber = 0;
   int LetterNumber = 0;
   char ch;
   for (int i = 0; i < 4; i++)
   {
   	  for (int j = 0; j < 30; j++)
   	  GeneratedWord[i][j] = ' ';
   }
   FILE *SearchVerb;
   SearchVerb=fopen("IrregularVerbs.txt","r");
   while(1)
   {
   	  while(StringNumber != GeneratedString)
      {
       	 ch = getc(SearchVerb);
         if (ch == '\n')
         StringNumber++;
      }
      while(WordNumber != 3)
      {
         ch = getc(SearchVerb);
         if (ch == ' ')
         {
         	GeneratedWord[WordNumber][LetterNumber] = '\0';
            WordNumber++;
            LetterNumber = 0;
		 }
		 else
		 {
		    GeneratedWord[WordNumber][LetterNumber] = ch;
		    LetterNumber++;
		 }
	  }
	  LetterNumber = 0;
	  while(ch != '\n')
	  {
	     ch = getc(SearchVerb);
		 GeneratedWord[WordNumber][LetterNumber] = ch;
		 LetterNumber++;
	  }
	break;
	}
   fclose(SearchVerb);
}
