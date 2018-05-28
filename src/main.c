#include <locale.h>
#include <time.h>
#include "Functions.h"

int main()
{
   int Escape = 0, PressedKey;
   setlocale(LC_ALL, "Rus");
   while(!Escape)
   {
      system("cls");
      printf("1. Начать проверку\n");
      printf("2. Таблица лидеров\n");
      printf("3. Опции\n");
      printf("4. Выход\n");
      SkipRewritingMenu:
      scanf("%d",&PressedKey);
      switch(PressedKey)
      {
         case 1: BeginGame();
                 break;
         case 2: ShowTable();
                 break;
         case 3: //ShowOptions();
                 break;
         case 4: Escape = 1;
                 break;
         default: printf("Неверная команда\n");
                  goto SkipRewritingMenu;
	  }
   }
}
