
void ShowOptions(int *LeftTime, int *TimeBonus)
{
   int Escape = 0, PressedKey;
   while(!Escape)
   {
      system("cls");
      printf("��������, ��� �� ������ ��������\n");
      printf("1. �����\n");
      printf("2. ����� �� ���� ������� %d\n",*LeftTime);
      printf("3. ����� ������� �� ���������� ����� %d\n",*TimeBonus);
      printf("4. ��������� � ����\n");
      SkipRewritingOptions:
      scanf("%d",&PressedKey);
      switch(PressedKey)
      {
         case 1: //BeginGame();
                 break;
         case 2: ChooseTime(LeftTime);
                 break;
         case 3: ChooseBonusTime(TimeBonus);
                 break;
         case 4: Escape = 1;
                 break;
         default: printf("�������� �������\n");
                  goto SkipRewritingOptions;
	  }
   }
}

void ChooseTime(int *LeftTime)
{
   system("cls");
   printf("�������� �����\n");
   printf("1. 10\n");
   printf("2. 15\n");
   printf("3. 25\n");
   printf("4. ����� � �����");
   int PressedKey;
   SkipRewritingOptionsForLeftTime:
   scanf("%d",&PressedKey);
   switch(PressedKey)
   {
      case 1: *LeftTime = 10;
              break;
      case 2: *LeftTime = 15;
              break;
      case 3: *LeftTime = 25;
              break;
      case 4: break;
      default: printf("�������� �������\n");
               goto SkipRewritingOptionsForLeftTime;
	  }
}

void ChooseBonusTime(int *TimeBonus)
{
   system("cls");
   printf("�������� �������� �����\n");
   printf("1. 2\n");
   printf("2. 4\n");
   printf("3. 6\n");
   printf("4. ����� � �����");
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
      default: printf("�������� �������\n");
               goto SkipRewritingOptionsForBonusTime;
	  }
}
