
void ShowOptions(int *LeftTime, int *TimeBonus, int *StandardGameMode, int *AmountInputVerbs)
{
   int Escape = 0, PressedKey;
   while(!Escape)
   {
      system("cls");
      printf("Выберите, что вы хотите изменить\n");
      printf("1. Режим ");
      if (*StandardGameMode)
      {
         printf("стандартный\n");
         printf("2. Количество выводимых на экран слов %d\n", *AmountInputVerbs);
         printf("3. Вернуться в меню\n");
         SkipRewritingOptionsForStandardMode:
         scanf("%d",&PressedKey);
         switch(PressedKey)
         {
            case 1: *StandardGameMode = 0;
                    break;
            case 2: ChooseAmountInputVerbs(AmountInputVerbs);
                    break;
            case 3: Escape = 1;
                    break;
            default: printf("Неверная команда\n");
                     goto SkipRewritingOptionsForStandardMode;
	     }
      }
      else
      {
         printf("на время\n");
         printf("2. Время на ввод ответов %d\n" ,*LeftTime);
         printf("3. Бонус времени за правильный ответ %d\n", *TimeBonus);
         printf("4. Вернуться в меню\n");
         SkipRewritingOptionsForTimeMode:
         scanf("%d",&PressedKey);
         switch(PressedKey)
         {
            case 1: *StandardGameMode = 1;
                    break;
            case 2: ChooseTime(LeftTime);
                    break;
            case 3: ChooseBonusTime(TimeBonus);
                    break;
            case 4: Escape = 1;
                    break;
            default: printf("Неверная команда\n");
                     goto SkipRewritingOptionsForTimeMode;
	     }
      }
   }
}

void ChooseTime(int *LeftTime)
{
   system("cls");
   printf("Выберите время\n");
   printf("1. 10\n");
   printf("2. 15\n");
   printf("3. 25\n");
   printf("4. Назад в опции\n");
   int PressedKey;
   SkipRewritingOptionsForLeftTime:
   scanf("%d", &PressedKey);
   switch(PressedKey)
   {
      case 1: *LeftTime = 10;
              break;
      case 2: *LeftTime = 15;
              break;
      case 3: *LeftTime = 25;
              break;
      case 4: break;
      default: printf("Неверная команда\n");
               goto SkipRewritingOptionsForLeftTime;
	  }
}

void ChooseBonusTime(int *TimeBonus)
{
   system("cls");
   printf("Выберите бонуснов время\n");
   printf("1. 2\n");
   printf("2. 4\n");
   printf("3. 6\n");
   printf("4. Назад в опции\n");
   int PressedKey;
   SkipRewritingOptionsForBonusTime:
   scanf("%d",&PressedKey);
   switch(PressedKey)
   {
      case 1: *TimeBonus = 2;
              break;
      case 2: *TimeBonus = 4;
              break;
      case 3: *TimeBonus = 6;
              break;
      case 4: break;
      default: printf("Неверная команда\n");
               goto SkipRewritingOptionsForBonusTime;
	  }
}

void ChooseAmountInputVerbs(int *AmountInputVerbs)
{
   system("cls");
   printf("Выберите количество выводимых за раз глаголов\n");
   printf("1. 1\n");
   printf("2. 2\n");
   printf("3. 3\n");
   printf("4. Назад в опции\n");
   int PressedKey;
   SkipRewritingOptionsForChooseAmountInputVerbs:
   scanf("%d", &PressedKey);
   switch(PressedKey)
   {
      case 1: *AmountInputVerbs = 1;
              break;
      case 2: *AmountInputVerbs = 2;
              break;
      case 3: *AmountInputVerbs = 3;
              break;
      case 4: break;
      default: printf("Неверная команда\n");
               goto SkipRewritingOptionsForChooseAmountInputVerbs;
	  }
}
