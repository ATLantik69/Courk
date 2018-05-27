#include "GenerateIrregularVerb.c"
#include "CheckVerb.c"
#include "ShowPanel.c"
#include "IdentifyVerbs.c"
#include <locale.h>

int main()
{
    int Answer = 1; // слово ещё не введено
    char InputString[90];
    char InputVerbs[3][30], GeneratedWord[4][30];
    setlocale(LC_ALL, "Rus");
    while(1)
    {
       GenerateIrregularVerb(GeneratedWord);
       ShowPanel(GeneratedWord, InputVerbs, 0, 1, Answer);
       gets(InputString);
       IdentifyVerbs(InputString,InputVerbs);
       Answer = CheckVerb(GeneratedWord, InputVerbs);
    }
    system("PAUSE");
    return 1;    
}
