
void IdentifyVerbs(char InputString[90], char InputVerb[3][30])
{
   int WordNumber = 0, LetterNumberForVerb = 0;
   int LetterNumberForString = 0;
   for (; WordNumber < 3; WordNumber++)
   {
      while (InputString[LetterNumberForString] != ' ')
      {
         InputVerb[WordNumber][LetterNumberForVerb] = InputString[LetterNumberForString];
         LetterNumberForString++;
         LetterNumberForVerb++;
	  }
	  InputVerb[WordNumber][LetterNumberForVerb] = '\0';
	  while (InputString[LetterNumberForString] == ' ')
      {
         LetterNumberForString++;
	  }
	  LetterNumberForVerb = 0;
   }
}
