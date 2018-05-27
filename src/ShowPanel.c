
void ShowPanel(char GeneratedWord[4][30], char InputVerbs[3][30], int Score, int LeftTime, int Answer)
{
	system("cls");
	printf(" Очки   Осталось времени   Последнее слово было\n");
	printf("%5.0d          %2.0d               ",Score,LeftTime);
	if (Answer == 1) printf("Правильным\n");
	if (Answer == 0) printf("Неправильным\n");
	printf("\n%s\n",GeneratedWord[3]);
}
