#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include "Functions.h"

int main()
{
	int Escape = 0, PressedKey, StandardGameMode = 0;
	int LeftTime = 15, TimeBonus = 6, AmountInputVerbs = 1;
	int Tests = 0;
	char InputVerbs[3][3][60];
	char Nickname[40];
	while(!Escape)
	{
		system("reset");
		printf("1. Start checking\n");
		printf("2. Leaders table\n");
		printf("3. Options\n");
		printf("4. Exit\n");
		SkipRewritingMenu:
		scanf("%d",&PressedKey);
		switch(PressedKey)
		{
			case 1: BeginGame(LeftTime, TimeBonus, AmountInputVerbs, StandardGameMode, Tests, InputVerbs, Nickname);
					break;
			case 2: ShowTable(Tests);
					break;
			case 3: ShowOptions(&LeftTime, &TimeBonus, &StandardGameMode, &AmountInputVerbs, Tests, PressedKey);
					break;
			case 4: Escape = 1;
					break;
			default: printf("Incorrect command\n");
					goto SkipRewritingMenu;
		}
	}
	return 1;
}
