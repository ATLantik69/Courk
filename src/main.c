#include "GenerateIrregularVerb.c"
#include "CheckVerb.c"
#include "ShowPanel.c"
#include "IdentifyVerbs.c"
#include "ChangeVariables.c"
#include <locale.h>

int Score = 0;
int LeftTime = 1; 
    
int main()
{
    int Answer = -1; // ����� ��� �� �������
    float BeginTimeNote, EndTimeNote;
    char InputString[90];
    char Nickname[20];
    char InputVerbs[3][30], GeneratedWord[4][30];
    setlocale(LC_ALL, "Rus");
    while(LeftTime > 0)
    {
       Score += AddScore(Answer, Score);
       LeftTime += AddTimeLeft(Answer, LeftTime);
       GenerateIrregularVerb(GeneratedWord);
       ShowPanel(GeneratedWord, InputVerbs, Score, LeftTime, Answer);
       BeginTimeNote = clock();
       gets(InputString);
       EndTimeNote = (clock() - BeginTimeNote)/1000;
       LeftTime -= (int) EndTimeNote;
       IdentifyVerbs(InputString,InputVerbs);
       Answer = CheckVerb(GeneratedWord, InputVerbs);
    }
    printf("����� �����!\n������� ���� ���: ");
    GotoMarkEnterNickname:
    scanf("%s",Nickname);
    if strlen(Nickname) > 20
    {
       printf("��� �� ������ ��������� 20 ��������\n");
       goto GotoMarkEnterNickname;
	}
    printf("%s",Nickname);
    system("PAUSE");
    return 1;    
}
