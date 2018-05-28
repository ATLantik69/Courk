#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct GeneralPlayer {char StructNickname[20]; int StructScore;} Player;
void GenerateIrregularVerb(char GeneratedVerbs[4][30]);
void BeginGame(int LeftTime, int TimeBonus, int AmountInputVerbs, int StandardGameMode);
int AddScore(int Answer, int Score);
int AddTimeLeft(int Answer,int LeftTime, int TimeBonus);
int CheckVerb(char GeneratedWord[4][30], char InputVerbs[3][30]);
void ShowPanel(char GeneratedWord[4][30], int Score, int LeftTime, int Answer);
void AddNicknameToTable(char Nickname[20],int Score);
void ShowTable();
int SortTable(struct GeneralPlayer *PlayersMassive);
void ShowOptions(int *LeftTime, int *TimeBonus, int *StandardGameMode, int *AmountInputVerbs);
int ChooseBonusTime(int *TimeBonus);
int ChooseTime(int *LeftTime);
int ChooseAmountInputVerbs(int *AmountInputVerbs);

#endif
