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
           outtextxy(0,150,"Неверно");
		   return 0;
		 }
		j++;
	  }
   }
   bar(0,0,800,120);
   outtextxy(0,150,"Правильно");
   return 1;
}
