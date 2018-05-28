#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "Functions.h"

int main()
{
   int Escape = 0, PressedKey, StandardGameMode = 0;
   int LeftTime = 15, TimeBonus = 6, AmountInputVerbs = 1;
   setlocale(LC_ALL, "ru_RU.utf8");
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
         case 1: BeginGame(LeftTime, TimeBonus, AmountInputVerbs, StandardGameMode);
                 break;
         case 2: ShowTable();
                 break;
         case 3: ShowOptions(&LeftTime, &TimeBonus, &StandardGameMode, &AmountInputVerbs);
                 break;
         case 4: Escape = 1;
                 break;
         default: printf("Неверная команда\n");
                  goto SkipRewritingMenu;
	  }
   }
   return 1;
}
