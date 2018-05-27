#include <graphics.h>

int CheckVerb(char GeneratedWord[4][30], char InputVerbs[3][30])
{
   for (int i = 0; i < 3; i++)
   {  int j = 0;
      while (InputVerbs[i][j] != '\0')
      {
         if (InputVerbs[i][j] != GeneratedWord[i][j])
         {
           bar(0,0,800,120);
           setcolor(WHITE);
		   return 0;
		 }
		j++;
	  }
   }
   return 1;
}
