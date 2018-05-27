
int BeginGame()
{
    int Answer = -1; // слово ещё не введено
    float BeginTimeNote, EndTimeNote;
    char Nickname[20];
    int Score = 0;
    int LeftTime = 15; 
    char InputString[90];
    gets(InputString); // холостое срабатываение
    char InputVerbs[3][30], GeneratedWord[4][30];
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
    printf("Время вышло!\nВведите ваше имя: ");
    GotoMarkEnterNickname:
    scanf("%s",Nickname);
    if (strlen(Nickname) > 20)
    {
       printf("Имя не должно превышать 20 символов\n");
       goto GotoMarkEnterNickname;
	}
    printf("%s",Nickname);
    system("PAUSE");
    return 1;    
}
