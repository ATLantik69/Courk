
void BeginGame(int LeftTime, int TimeBonus)
{
    int Answer = -1; // слово ещё не введено
    float BeginTimeNote, EndTimeNote;
    char Nickname[20];
    int Score = 0; 
    char InputString[90];
    gets(InputString); // холостое срабатываение, чтобы цифра из меню не принималась за InputString
    char InputVerbs[3][30], GeneratedWord[4][30];
    while(LeftTime > 0)
    {
       Score += AddScore(Answer, Score);
       LeftTime += AddTimeLeft(Answer, LeftTime, TimeBonus);
       GenerateIrregularVerb(GeneratedWord);
       ShowPanel(GeneratedWord, InputVerbs, Score, LeftTime, Answer);
       BeginTimeNote = clock();
       gets(InputString);
       EndTimeNote = (clock() - BeginTimeNote)/1000;
       LeftTime -= (int) EndTimeNote;
       IdentifyVerbs(InputString,InputVerbs);
       Answer = CheckVerb(GeneratedWord, InputVerbs);
    }
    printf("Время вышло!\nВведите ваше имя: ");
    MarkEnterNickname:
    scanf("%s",Nickname);
    if (strlen(Nickname) > 20)
    {
       printf("Имя не должно превышать 20 символов\n");
       goto MarkEnterNickname;
	}
    AddNicknameToTable(Nickname, Score);
	gets(InputString); // холостое срабатываение, чтобы цифра из ника не принималась за команду в меню    
}
