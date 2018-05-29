#ifndef FUNCTIONS_H
#define FUNCTIONS_H

struct GeneralPlayer {char StructNickname[40]; int StructScore;} Player;
void GenerateIrregularVerb(char GeneratedVerbs[4][60]);
void BeginGame(int LeftTime, int TimeBonus, int AmountInputVerbs, int StandardGameMode, int Tests, char InputVerbs[3][3][60], char Nickname[40]);
int AddScore(int Answer, int Score);
int AddTimeLeft(int Answer,int LeftTime, int TimeBonus);
int CheckVerb(char GeneratedWord[4][60], char InputVerbs[3][60]);
void ShowPanelForTimeMode(char GeneratedWord[4][60], int Score, int LeftTime, int Answer);
void ShowPanelForStandardMode(char GeneratedVerbs[3][4][60], int AmountInputVerbs);
void AddNicknameToTable(char Nickname[40],int Score);
int ShowTable(int Tests);
int SortTable(struct GeneralPlayer *PlayersMassive);
int ShowOptions(int *LeftTime, int *TimeBonus, int *StandardGameMode, int *AmountInputVerbs, int Tests, int PressedKey);
int ChooseBonusTime(int *TimeBonus, int Tests, int PressedKey);
int ChooseTime(int *LeftTime, int Tests, int PressedKey);
int ChooseAmountInputVerbs(int *AmountInputVerbs, int Tests, int PressedKey);
int EnterNickname(char Nickname[40]);

#endif
