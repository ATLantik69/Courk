
void ShowPanel(char GeneratedWord[4][30], char InputVerbs[3][30], int Score, int LeftTime, int Answer)
{
	system("cls");
	printf(" ����   �������� �������   ��������� ����� ����\n");
	printf("%5.0d          %2.0d               ",Score,LeftTime);
	if (Answer == 1) printf("����������\n");
	if (Answer == 0) printf("������������\n");
	printf("\n%s\n",GeneratedWord[3]);
}
