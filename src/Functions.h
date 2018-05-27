#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int BeginGame();
int AddScore(int Answer, int Score);
int AddTimeLeft(int Answer,int LeftTime);
int CheckVerb(char GeneratedWord[4][30], char InputVerbs[3][30]);
void IdentifyVerbs(char InputString[90], char InputVerb[3][30]);
void ShowPanel(char GeneratedWord[4][30], char InputVerbs[3][30], int Score, int LeftTime, int Answer);
void AddNicknameToTable(char Nickname[20],int Score);

#endif
