
int CheckVerb(char GeneratedWord[4][30], char InputVerbs[3][30])
{
   for (int i = 0; i < 3; i++)
   {  int j = 0;
      while (InputVerbs[i][j] != '\0')
      {
         if (InputVerbs[i][j] != GeneratedWord[i][j])
         {
           outtextxy(0,150,"Неверно");
           bar(0, 0, 130, 600);
		   return 0;
		 }
		j++;
	  }
   }
   outtextxy(0,150,"Правильно");
   bar(0, 0, 800, 600);
   return 1;
}
