#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct GeneralPlayer {char StructNickname[40]; int StructScore;} Player;
void GenerateIrregularVerb(char GeneratedVerbs[4][60]);
void BeginGame(int LeftTime, int TimeBonus, int AmountInputVerbs, int StandardGameMode);
int AddScore(int Answer, int Score);
int AddTimeLeft(int Answer,int LeftTime, int TimeBonus);
int CheckVerb(char GeneratedWord[4][60], char InputVerbs[3][60]);
void ShowPanelForTimeMode(char GeneratedWord[4][60], int Score, int LeftTime, int Answer);
void AddNicknameToTable(char Nickname[20],int Score);
void ShowTable();
int SortTable(struct GeneralPlayer *PlayersMassive);
void ShowOptions(int *LeftTime, int *TimeBonus, int *StandardGameMode, int *AmountInputVerbs);
int ChooseBonusTime(int *TimeBonus);
int ChooseTime(int *LeftTime);
int ChooseAmountInputVerbs(int *AmountInputVerbs);

#endif
