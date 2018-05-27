
void IdentifyVerbs(char InputString[90], char InputVerb[3][30])
{
   int WordNumber = 0, LetterNumberForVerb = 0;
   int LetterNumberForString = 0;
   for (; WordNumber < 3; WordNumber++)
   {
      while (InputString[LetterNumberForString] != ' ' && InputString[LetterNumberForString] != '\0')
      {
         InputVerb[WordNumber][LetterNumberForVerb] = InputString[LetterNumberForString];
         LetterNumberForString++;
         LetterNumberForVerb++;
	  }
	  if (InputString[LetterNumberForString] == '\0')
	  break;
	  InputVerb[WordNumber][LetterNumberForVerb] = '\0';
	  LetterNumberForString++;
	  LetterNumberForVerb = 0;
   }
}
