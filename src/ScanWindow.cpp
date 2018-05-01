#include <graphics.h>

int main()
{
    int Ox = 0, Oy = 0;
    char key;
    initwindow(800,600);
    moveto(0,0);
    setfillstyle ( 1, 0 ); 
    while(1){
    if (kbhit())
    {
       char key = getch();
       switch(key)
       {
          case 97:  bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"A"); Ox+=14; break;
          case 98:  bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"B"); Ox+=14; break;
          case 99:  bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"C"); Ox+=14; break;
          case 100: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"D"); Ox+=14; break;
          case 101: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"E"); Ox+=14; break;
          case 102: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"F"); Ox+=14; break;
          case 103: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"G"); Ox+=14; break;
          case 104: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"H"); Ox+=14; break;
          case 105: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"I"); Ox+=14; break;
          case 106: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"J"); Ox+=14; break;
          case 107: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"K"); Ox+=14; break;
          case 108: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"L"); Ox+=14; break;
          case 109: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"M"); Ox+=14; break;
          case 110: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"N"); Ox+=14; break;
          case 111: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"O"); Ox+=14; break;
          case 112: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"P"); Ox+=14; break;
          case 113: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"Q"); Ox+=14; break;
          case 114: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"R"); Ox+=14; break;
          case 115: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"S"); Ox+=14; break;
          case 116: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"T"); Ox+=14; break;
          case 117: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"U"); Ox+=14; break;
          case 118: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"V"); Ox+=14; break;
          case 119: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"W"); Ox+=14; break;
          case 120: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"X"); Ox+=14; break;
          case 121: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"Y"); Ox+=14; break;
          case 122: bar(Ox, Oy, Ox+14, Oy+14); setcolor(WHITE); outtextxy(Ox,Oy,"Z"); Ox+=14; break;
          case 0: key = getch();
                  if (key == 72) {Oy-=20; moveto(Ox,Oy); break;}
                  if (key == 80) {Oy+=20; moveto(Ox,Oy); break;}
                  if (key == 77) {Ox+=14; moveto(Ox,Oy); break;}
                  if (key == 75) {Ox-=14; moveto(Ox,Oy); break;}
          case 8: bar(Ox-14, Oy, Ox, Oy+14); Ox-=14; moveto(Ox,Oy); break;
          //case 13: 
       }
    }
}
}
