
int CheckVerb(char GeneratedWord[4][30], char InputVerbs[3][30])
{
   int i, j; // переменные для циклов
   for (i = 0; i < 3; i++)
   {  j = 0;
      while (InputVerbs[i][j] != '\0')
      {
         if (InputVerbs[i][j] != GeneratedWord[i][j])
		 return 0;
		j++;
	  }
   }
   return 1;
}
