#include <graphics.h>
#include <time.h>

void MoveMassive(char *TemporaryMassive[3], int direction, int WordNumber, int LetterNumber)
{
     int i = 0, j;
     if(direction)
     {
        while(TemporaryMassive[WordNumber][LetterNumber + i + 1] != '\0')
        {
           if (TemporaryMassive[WordNumber][LetterNumber + i + 1] != ' ')
           {
              j = 0;
              while(TemporaryMassive[WordNumber][LetterNumber + i - j] == ' ')
              {
                 TemporaryMassive[WordNumber][LetterNumber + i - j] = TemporaryMassive[WordNumber][LetterNumber + i - j + 1];
                 TemporaryMassive[WordNumber][LetterNumber + i - j + 1] = ' ';
                 j++;
              }
           }
           i++;
        }
     }
     else
     {
        while(TemporaryMassive[WordNumber][LetterNumber + i + 1] == ' ')
        {
           TemporaryMassive[WordNumber][LetterNumber + i + 1] = TemporaryMassive[WordNumber][LetterNumber + i];
           TemporaryMassive[WordNumber][LetterNumber + i] = ' ';
           i++;
        }
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
    int MaxLetterNumber[3] = {0,0,0};
    char key;
    int size = imagesize(0, 0, 14, 420);
    void *buf = malloc (size);
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
    {  char key = getch();
       switch(key)
       {
          case 97:  if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"A");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'a';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 98: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"B");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'b';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 99:  if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);               
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"C");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'c';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 100: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"D");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'd';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 101: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"E");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'e';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 102: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"F");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'f';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 103: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"G");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'g';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 104: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"H");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'h';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 105: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"I");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'i';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 106: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"J");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'j';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 107: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"K");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'k';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 108: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"L");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'l';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 109: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"M");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'm';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 110: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"N");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'n';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 111: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"O");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'o';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 112: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"P");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'p';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 113: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"Q");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'q';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 114: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"R");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'r';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 115: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"S");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 's';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 116: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"T");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 't';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 117: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"U");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'u';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 118: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"V");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'v';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 119: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"W");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'w';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 120: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"X");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'x';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 121: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"Y");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'y';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 122: if(MaxLetterNumber[WordNumber]<29)
                    {
                       getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                       bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"Z");
                       Ox+=14; TemporaryMassive[WordNumber][LetterNumber] = 'z';
                       LetterNumber++; putimage(Ox, Oy, buf, COPY_PUT);
                       MaxLetterNumber[WordNumber]++;
                    }
                    break;
          case 0: key = getch();
                  if ((key == 72) && (WordNumber > 0)) 
                  {Oy-=20; Ox = 0; moveto(Ox,Oy); WordNumber--; LetterNumber = 0;}
                  if ((key == 80) && (WordNumber < 2)) 
                  {Oy+=20; Ox = 0; moveto(Ox,Oy); WordNumber++; LetterNumber = 0;}
                  if ((key == 77) && (LetterNumber <  MaxLetterNumber[WordNumber]))
                  {
                     Ox+=14; moveto(Ox,Oy); LetterNumber++;
                     MoveMassive(TemporaryMassive, 1, WordNumber, LetterNumber);
                  }
                  if ((key == 75) && (LetterNumber > 0)) 
                  {
                     Ox-=14; moveto(Ox,Oy); LetterNumber--;
                     MoveMassive(TemporaryMassive, 0, WordNumber, LetterNumber);
                  }
                  break;
          case 8: getimage(Ox, Oy, Ox + 420, Oy + 14, buf);
                  LetterNumber--; MaxLetterNumber[WordNumber]--;
                  TemporaryMassive[WordNumber][LetterNumber] = ' ';
                  bar(Ox-14, Oy, Ox, Oy+14); Ox-=14; moveto(Ox,Oy);
                  putimage(Ox, Oy, buf, COPY_PUT);
                  break;
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
           {InputVerbs[i][k] = TemporaryMassive[i][j]; k++;}
       }
       InputVerbs[i][k] = '\0';
    }
for (int i = 0; i < 3; i++)
delete TemporaryMassive[i];
delete TemporaryMassive;
free(buf);
}
