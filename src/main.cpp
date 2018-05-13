#include "ScanWindow.cpp"
#include "GenerateIrregularVerb.cpp"
#include "CheckVerb.cpp"

int main()
{
    initwindow(800,600);
    int Ox = 0, Oy = 0, Answer;
    char InputVerbs[3][30], GeneratedWord[4][30];
    while(1)
    {
       GenerateIrregularVerb(GeneratedWord);
       ScanWindow(Ox, Oy, InputVerbs);
       Answer = CheckVerb(GeneratedWord, InputVerbs);
    }
    system("PAUSE");
    return 1;    
}
