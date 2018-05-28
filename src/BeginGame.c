#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h> 
#include "Functions.h"

void BeginGame(int LeftTime, int TimeBonus, int AmountInputVerbs, int StandardGameMode)
{
    int Answer = -1; // ����� ��� �� �������
    float BeginTimeNote, EndTimeNote;
    char Nickname[20];
    int Score = 0; 
    int CurrentVerb; // ��� �����
    char InputVerbs[3][30], GeneratedVerbs[4][30];
    while(LeftTime > 0)
    {
       Score += AddScore(Answer, Score);
       LeftTime += AddTimeLeft(Answer, LeftTime, TimeBonus);
       GenerateIrregularVerb(GeneratedVerbs);
       ShowPanel(GeneratedVerbs, Score, LeftTime, Answer);
       BeginTimeNote = clock();
       for (CurrentVerb = 0; CurrentVerb < 3; CurrentVerb++)
       scanf("%s",InputVerbs[CurrentVerb]);
       EndTimeNote = (clock() - BeginTimeNote)/1000;
       LeftTime -= (int) EndTimeNote;
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
}
