
void BeginGame(int LeftTime, int TimeBonus, int AmountInputVerbs, int StandardGameMode)
{
    int Answer = -1; // ����� ��� �� �������
    float BeginTimeNote, EndTimeNote;
    char Nickname[20];
    int Score = 0; 
    char InputString[90];
    gets(InputString); // �������� �������������, ����� ����� �� ���� �� ����������� �� InputString
    char InputVerbs[3][30], GeneratedVerbs[4][30];
    while(LeftTime > 0)
    {
       Score += AddScore(Answer, Score);
       LeftTime += AddTimeLeft(Answer, LeftTime, TimeBonus);
       GenerateIrregularVerb(GeneratedVerbs);
       ShowPanel(GeneratedVerbs, InputVerbs, Score, LeftTime, Answer);
       BeginTimeNote = clock();
       gets(InputString);
       EndTimeNote = (clock() - BeginTimeNote)/1000;
       LeftTime -= (int) EndTimeNote;
       IdentifyVerbs(InputString,InputVerbs);
       Answer = CheckVerb(GeneratedVerbs, InputVerbs);
    }
    printf("����� �����!\n������� ���� ���: ");
    MarkEnterNickname:
    scanf("%s",Nickname);
    if (strlen(Nickname) > 20)
    {
       printf("��� �� ������ ��������� 20 ��������\n");
       goto MarkEnterNickname;
	}
    AddNicknameToTable(Nickname, Score);
	gets(InputString); // �������� �������������, ����� ����� �� ���� �� ����������� �� ������� � ����    
}
