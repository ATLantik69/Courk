#include <graphics.h>
#include <time.h>

void MoveMassive(char *TemporaryMassive[3], int direction, int WordNumber, int LetterNumber)
{
     if(direction)
     {
        
     }
}

void MarkWhereWrite(int Ox, int Oy)
{
     int c, k = 1;
     moveto(Ox,Oy);
     setcolor(WHITE);
     lineto(Ox, Oy + 14);
     moveto(Ox, Oy);
     c = clock() + 500;
     while (clock() < c && k);
     {if (kbhit()) k = 0;}
     setcolor(BLACK);
     lineto(Ox, Oy + 14);
     moveto(Ox, Oy);
     c = clock() + 500;
     while (clock() < c && k);
     {if (kbhit()) k = 0;}
}

void ScanWindow(int Ox, int Oy, char InputVerbs[3][30])
{
    int ScanningWords = 1, WordNumber = 0, LetterNumber = 0, CheckTime;
    char key;
    char** TemporaryMassive = new char*[3];
    for (int i = 0; i < 3; i++)
    {
       TemporaryMassive[i] = new char[30];
       for (int j = 0; j < 29; j++)
       TemporaryMassive[i][j] = ' ';
       TemporaryMassive[i][29] = '\0';
    }
    moveto(Ox,Oy);
    setfillstyle ( 1, 0 );
    CheckTime = clock() + 500;
    while(ScanningWords)
    {
    if (kbhit())
    {
       char key = getch();
       switch(key)
       {
          case 97:  bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"A");
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'a';
                    LetterNumber++; break;
          case 98:  bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"B");
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'b'; 
                    LetterNumber++; break;
          case 99:  bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"C"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'c'; 
                    LetterNumber++; break;
          case 100: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"D"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'd';
                    LetterNumber++; break;
          case 101: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"E"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'e'; 
                    LetterNumber++; break;
          case 102: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"F"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'f';
                    LetterNumber++; break;
          case 103: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"G"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'g'; 
                    LetterNumber++; break;
          case 104: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"H"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'h'; 
                    LetterNumber++; break;
          case 105: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"I"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'i'; 
                    LetterNumber++; break;
          case 106: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"J"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'j'; 
                    LetterNumber++; break;
          case 107: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"K"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'k'; 
                    LetterNumber++; break;
          case 108: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"L"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'l'; 
                    LetterNumber++; break;
          case 109: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"M"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'm'; 
                    LetterNumber++; break;
          case 110: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"N"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'n';
                    LetterNumber++; break;
          case 111: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"O"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'o'; 
                    LetterNumber++; break;
          case 112: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"P"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'p'; 
                    LetterNumber++; break;
          case 113: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"Q"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'q'; 
                    LetterNumber++; break;
          case 114: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"R"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'r'; 
                    LetterNumber++; break;
          case 115: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"S"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 's'; 
                    LetterNumber++; break;
          case 116: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"T"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 't'; 
                    LetterNumber++; break;
          case 117: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"U"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'u'; 
                    LetterNumber++; break;
          case 118: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"V"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'v'; 
                    LetterNumber++; break;
          case 119: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"W"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'w'; 
                    LetterNumber++; break;
          case 120: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"X"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'x'; 
                    LetterNumber++; break;
          case 121: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"Y"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'y'; 
                    LetterNumber++; break;
          case 122: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"Z"); 
                    Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'z'; 
                    LetterNumber++; break;
          case 0: key = getch();
                  if ((key == 72) && (WordNumber > 0)) 
                  {Oy-=20; Ox = 0; moveto(Ox,Oy); WordNumber--; LetterNumber = 0;}
                  if ((key == 80) && (WordNumber < 2)) 
                  {Oy+=20; Ox = 0; moveto(Ox,Oy); WordNumber++; LetterNumber = 0;}
                  if ((key == 77) && (TemporaryMassive[WordNumber][LetterNumber] != ' ')) 
                  {Ox+=14; moveto(Ox,Oy); LetterNumber++;
                  MoveMassive(TemporaryMassive, 1, WordNumber, LetterNumber);}
                  if ((key == 75) && (LetterNumber > 0)) 
                  {Ox-=14; moveto(Ox,Oy); LetterNumber--;}
                  break;
          case 8: TemporaryMassive[WordNumber][LetterNumber] = ' '; LetterNumber--; 
                  bar(Ox-14, Oy, Ox, Oy+14); Ox-=14; moveto(Ox,Oy); break;
          case 13: ScanningWords = 0; break;
       }
       CheckTime = clock() + 500;
    }
    if (CheckTime < clock())
    {MarkWhereWrite(Ox, Oy); CheckTime = clock() + 500;}
}
for (int i = 0, k; i < 3; i++)
    {k = 0;
       for (int j = 0; j < 30; j++)
       {
           int c = (int)TemporaryMassive[i][j];
           if ((c > 96) && (c < 123))
           {InputVerbs[i][j] = TemporaryMassive[i][j]; k++;}
           if (c == 32)
           break;
       }
       InputVerbs[i][k] = '\0';
    }
for (int i = 0; i < 3; i++)
delete TemporaryMassive[i];
delete TemporaryMassive;
}
