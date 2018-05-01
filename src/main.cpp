#include "ScanWindow.cpp"

int main()
{
    initwindow(800,600);
    int Ox = 0, Oy = 0;
    char InputVerbs[3][30];
    ScanWindow(Ox, Oy, InputVerbs);
    closegraph();
    puts(InputVerbs[0]);
    puts(InputVerbs[1]);
    puts(InputVerbs[2]);
    system("PAUSE");
    return 1;    
}
