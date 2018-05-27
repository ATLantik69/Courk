#include "GenerateIrregularVerb.c"
#include "CheckVerb.c"
#include "ShowPanel.c"
#include "IdentifyVerbs.c"
#include "ChangeVariables.c"
#include <locale.h>

int Score = 0;
int LeftTime = 60; 
    
int main()
{
    int Answer = 1; // слово ещё не введено
    float BeginTimeNote, EndTimeNote;
    char InputString[90];
    char InputVerbs[3][30], GeneratedWord[4][30];
    setlocale(LC_ALL, "Rus");
    while(1)
    {
       GenerateIrregularVerb(GeneratedWord);
       ShowPanel(GeneratedWord, InputVerbs, Score, LeftTime, Answer);
       BeginTimeNote = clock();
       gets(InputString);
       EndTimeNote = clock() - BeginTimeNote;
       IdentifyVerbs(InputString,InputVerbs);
       Answer = CheckVerb(GeneratedWord, InputVerbs);
       Score += AddScore(Answer, Score);
       LeftTime += AddTimeLeft(Answer, LeftTime);
    }
    system("PAUSE");
    return 1;    
}
