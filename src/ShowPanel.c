#include <stdlib.h>
#include <stdio.h>

void ShowPanelForTimeMode(char GeneratedVerbs[4][60], int Score, int LeftTime, int Answer)
{
	system("cls");
	printf(" ����   �������� �������   ��������� ����� ����\n");
	printf("%5.0d          %2.0d               ",Score,LeftTime);
	if (Answer == 1) printf("����������\n");
	if (Answer == 0) printf("������������\n");
	printf("\n%s\n",GeneratedVerbs[3]);
}

/*void ShowPanelForTimeMode(char GeneratedVerbs[3][4][30])
{
	system("cls");
	printf("%s\n",GeneratedVerbs[3]);
}*/
