#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

void ShowOptions(int *LeftTime, int *TimeBonus, int *StandardGameMode, int *AmountInputVerbs)
{
   int Escape = 0, PressedKey;
   while(!Escape)
   {
      system("reset");
      printf("Choose, what you would like to change\n");
      printf("1. Mode ");
      if (*StandardGameMode)
      {
         printf("Standard\n");
         printf("2. Amount of output verbs %d\n", *AmountInputVerbs);
         printf("3. Back to menu\n");
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
            default: printf("Incorrect command\n");
                     goto SkipRewritingOptionsForStandardMode;
	     }
      }
      else
      {
         printf("for time\n");
         printf("2. Time to input asnwer %d\n" ,*LeftTime);
         printf("3. Bonus time for correct answer %d\n", *TimeBonus);
         printf("4. Back to menu\n");
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
            default: printf("Incorrect command\n");
                     goto SkipRewritingOptionsForTimeMode;
	     }
      }
   }
}

int ChooseTime(int *LeftTime)
{
   system("reset");
   printf("Choose time\n");
   printf("1. 10\n");
   printf("2. 15\n");
   printf("3. 25\n");
   printf("4. Back to options\n");
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
      default: printf("Incorrect command\n");
               goto SkipRewritingOptionsForLeftTime;
	}
	return 1;
}

int ChooseBonusTime(int *TimeBonus)
{
   system("reset");
   printf("Choose bonus time\n");
   printf("1. 2\n");
   printf("2. 4\n");
   printf("3. 6\n");
   printf("4. Back to options\n");
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
      default: printf("Incorrect command\n");
               goto SkipRewritingOptionsForBonusTime;
	}
	return 1;  
}

int ChooseAmountInputVerbs(int *AmountInputVerbs)
{
   system("reset");
   printf("Choose amount of output verbs\n");
   printf("1. 1\n");
   printf("2. 2\n");
   printf("3. 3\n");
   printf("4. Back to options\n");
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
      default: printf("Incorrect command\n");
               goto SkipRewritingOptionsForChooseAmountInputVerbs;
	}
	return 1; 
}
