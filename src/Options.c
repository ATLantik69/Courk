#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"

int ShowOptions(int *LeftTime, int *TimeBonus, int *StandardGameMode, int *AmountInputVerbs, int Tests, int PressedKey)
{
	int Escape = 0;
	while(!Escape)
	{
		if (!Tests)
		{
			system("reset");
			printf("Choose, what you would like to change\n");
			printf("1. Mode ");
		}
		if (*StandardGameMode)
		{
			if (!Tests)
			{
				printf("Standard\n");
				printf("2. Amount of output verbs %d\n", *AmountInputVerbs);
				printf("3. Back to menu\n");
				SkipRewritingOptionsForStandardMode:
				scanf("%d", &PressedKey);
			}
			switch(PressedKey)
			{
				case 1: *StandardGameMode = 0;
						break;
				case 2: ChooseAmountInputVerbs(AmountInputVerbs, Tests, PressedKey);
						break;
				case 3: Escape = 1;
						break;
				default: if (!Tests)
						printf("Incorrect command\n");
						if (Tests)
						return 0;
						goto SkipRewritingOptionsForStandardMode;
			}
		}
		else
		{
			if (!Tests)
			{
				printf("for time\n");
				printf("2. Time to input asnwer %d\n" ,*LeftTime, PressedKey);
				printf("3. Bonus time for correct answer %d\n", *TimeBonus, PressedKey);
				printf("4. Back to menu\n");
				SkipRewritingOptionsForTimeMode:
				scanf("%d", &PressedKey);
			}
			switch(PressedKey)
			{
				case 1: *StandardGameMode = 1;
						break;
				case 2: ChooseTime(LeftTime, Tests, PressedKey);
						break;
				case 3: ChooseBonusTime(TimeBonus, Tests, PressedKey);
						break;
				case 4: Escape = 1;
						break;
				default: if (!Tests)
						printf("Incorrect command\n");
						if (Tests)
						return 0;
						goto SkipRewritingOptionsForTimeMode;
			}
		}
	}
	return 1;
}

int ChooseTime(int *LeftTime, int Tests, int PressedKey)
{
	if (!Tests)
	{
		system("reset");
		printf("Choose time\n");
		printf("1. 10\n");
		printf("2. 15\n");
		printf("3. 25\n");
		printf("4. Back to options\n");
		SkipRewritingOptionsForLeftTime:
		scanf("%d", &PressedKey);
	}
	switch(PressedKey)
	{
		case 1: *LeftTime = 10;
				break;
		case 2: *LeftTime = 15;
				break;
		case 3: *LeftTime = 25;
				break;
		case 4: break;
		default: if (!Tests)
				printf("Incorrect command\n");
				if (Tests)
				return 0;
				goto SkipRewritingOptionsForLeftTime;
	}
	return 1;
}

int ChooseBonusTime(int *TimeBonus, int Tests, int PressedKey)
{
	if (!Tests)
	{
		system("reset");
		printf("Choose bonus time\n");
		printf("1. 2\n");
		printf("2. 4\n");
		printf("3. 6\n");
		printf("4. Back to options\n");
		SkipRewritingOptionsForBonusTime:
		scanf("%d", &PressedKey);
	}
	switch(PressedKey)
	{
		case 1: *TimeBonus = 2;
				break;
		case 2: *TimeBonus = 4;
				break;
		case 3: *TimeBonus = 6;
				break;
		case 4: break;
		default: if (!Tests)
				printf("Incorrect command\n");
				if (Tests)
				return 0;
				goto SkipRewritingOptionsForBonusTime;
	}
	return 1;  
}

int ChooseAmountInputVerbs(int *AmountInputVerbs, int Tests, int PressedKey)
{
	if (!Tests)
	{
		system("reset");
		printf("Choose amount of output verbs\n");
		printf("1. 1\n");
		printf("2. 2\n");
		printf("3. 3\n");
		printf("4. Back to options\n");
		SkipRewritingOptionsForChooseAmountInputVerbs:
		scanf("%d", &PressedKey);
	}
	switch(PressedKey)
	{
		case 1: *AmountInputVerbs = 1;
				break;
		case 2: *AmountInputVerbs = 2;
				break;
		case 3: *AmountInputVerbs = 3;
				break;
		case 4: break;
		default: if (!Tests)
				printf("Incorrect command\n");
				if (Tests)
				return 0;
				goto SkipRewritingOptionsForChooseAmountInputVerbs;
	}
	return 1; 
}
