#include "GenerateIrregularVerb.cpp"
#include "CheckVerb.cpp"

int main()
{
    int Answer;
    char InputVerbs[3][30], GeneratedWord[4][30];
    while(1)
    {
       GenerateIrregularVerb(GeneratedWord);
       Answer = CheckVerb(GeneratedWord, InputVerbs);
    }
    system("PAUSE");
    return 1;    
}
