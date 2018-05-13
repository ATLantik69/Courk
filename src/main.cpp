#include "ScanWindow.cpp"
#include "GenerateIrregularVerb.cpp"

int main()
{
    initwindow(800,600);
    int Ox = 0, Oy = 0;
    char InputVerbs[3][30], GeneratedWord[4][30];
    GenerateIrregularVerb(GeneratedWord);
    ScanWindow(Ox, Oy, InputVerbs);
    closegraph();
    system("PAUSE");
    return 1;    
}
