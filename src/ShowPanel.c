#include <stdlib.h>
#include <stdio.h>

void ShowPanelForTimeMode(char GeneratedVerbs[4][60], int Score, int LeftTime, int Answer)
{
	system("cls");
	printf(" Очки   Осталось времени   Последнее слово было\n");
	printf("%5.0d          %2.0d               ",Score,LeftTime);
	if (Answer == 1) printf("Правильным\n");
	if (Answer == 0) printf("Неправильным\n");
	printf("\n%s\n",GeneratedVerbs[3]);
}

/*void ShowPanelForTimeMode(char GeneratedVerbs[3][4][30])
{
	system("cls");
	printf("%s\n",GeneratedVerbs[3]);
}*/
