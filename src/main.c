#include <locale.h>
#include <time.h>
#include "Functions.h"

int main()
{
   int Escape = 0, PressedKey;
   int LeftTime = 15, TimeBonus = 6;
   setlocale(LC_ALL, "Rus");
   while(!Escape)
   {
      system("cls");
      printf("1. ������ ��������\n");
      printf("2. ������� �������\n");
      printf("3. �����\n");
      printf("4. �����\n");
      SkipRewritingMenu:
      scanf("%d",&PressedKey);
      switch(PressedKey)
      {
         case 1: BeginGame(LeftTime, TimeBonus);
                 break;
         case 2: ShowTable();
                 break;
         case 3: ShowOptions(&LeftTime, &TimeBonus);
                 break;
         case 4: Escape = 1;
                 break;
         default: printf("�������� �������\n");
                  goto SkipRewritingMenu;
	  }
   }
}
