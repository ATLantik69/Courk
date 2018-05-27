#include "GenerateIrregularVerb.c"
#include "CheckVerb.c"
#include "ShowPanel.c"
#include "IdentifyVerbs.c"
#include "ChangeVariables.c"
#include <locale.h>

int main()
{
    int Answer = 1; // слово ещё не введено
    int Score = 0, TimeLeft = 60;
    char InputString[90];
    char InputVerbs[3][30], GeneratedWord[4][30];
    setlocale(LC_ALL, "Rus");
    while(1)
    {
       GenerateIrregularVerb(GeneratedWord);
       ShowPanel(GeneratedWord, InputVerbs, Score, 1, Answer);
       gets(InputString);
       IdentifyVerbs(InputString,InputVerbs);
       Answer = CheckVerb(GeneratedWord, InputVerbs);
       ScroreCount(Answer, &Score);
       
    }
    system("PAUSE");
    return 1;    
}
