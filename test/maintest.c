#define CTEST_MAIN

#include <string.h>
#include <stdio.h> 
#include "Functions.h"
#include "ctest.h"

int Tests = 1, PressedKey = 4, StandardGameMode = 0;
int LeftTime = 17, TimeBonus = 13, AmountInputVerbs = 7;
int result, expecting;

CTEST (OptionsGameMode, ChangeMod) //Check game mode changing
{
	PressedKey = 1;
	ShowOptions(&LeftTime, &TimeBonus, &StandardGameMode, &AmountInputVerbs, Tests, PressedKey);
	result = StandardGameMode;
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	ShowOptions(&LeftTime, &TimeBonus, &StandardGameMode, &AmountInputVerbs, Tests, PressedKey);
	expecting = 0;
	result = StandardGameMode;
	ASSERT_EQUAL(expecting, result);
}

CTEST (EscapeOptionsMenu, Escape) //Check Escape from menu
{
	PressedKey = 3;
	result = ShowOptions(&LeftTime, &TimeBonus, &StandardGameMode, &AmountInputVerbs, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 4;
	result = ShowOptions(&LeftTime, &TimeBonus, &StandardGameMode, &AmountInputVerbs, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsOtherCommand, IncorrectCommand) //Check unstated commands
{
	PressedKey = -1;
	result = ShowOptions(&LeftTime, &TimeBonus, &StandardGameMode, &AmountInputVerbs, Tests, PressedKey);
	expecting = 0;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 0;
	result = ShowOptions(&LeftTime, &TimeBonus, &StandardGameMode, &AmountInputVerbs, Tests, PressedKey);
	expecting = 0;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 5;
	result = ShowOptions(&LeftTime, &TimeBonus, &StandardGameMode, &AmountInputVerbs, Tests, PressedKey);
	expecting = 0;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 200;
	result = ShowOptions(&LeftTime, &TimeBonus, &StandardGameMode, &AmountInputVerbs, Tests, PressedKey);
	expecting = 0;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsLeftTime, StatedCommand) //Check change of time in Time mode
{
	PressedKey = 1;
	ChooseTime(&LeftTime, Tests, PressedKey);
	result = LeftTime;
	expecting = 10;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 2;
	ChooseTime(&LeftTime, Tests, PressedKey);
	result = LeftTime;
	expecting = 15;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 3;
	ChooseTime(&LeftTime, Tests, PressedKey);
	result = LeftTime;
	expecting = 25;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsLeftTime, RewritingCommand) //Check rewriting command if unstated was input in Timeleft menu
{
	PressedKey = 5;
	result = ChooseTime(&LeftTime, Tests, PressedKey);
	expecting = 0;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsLeftTime, EscapeCommand) //Check escape from choosing TimeLeft options command 
{
	PressedKey = 4;
	result = ChooseTime(&LeftTime, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 3;
	result = ChooseTime(&LeftTime, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 2;
	result = ChooseTime(&LeftTime, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 1;
	result = ChooseTime(&LeftTime, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsLeftTime, UnStatedCommand) //Check unstated commands for changing left time
{
	PressedKey = -1;
	ChooseTime(&LeftTime, Tests, PressedKey);
	result = LeftTime;
	expecting = LeftTime;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 0;
	ChooseTime(&LeftTime, Tests, PressedKey);
	result = LeftTime;
	expecting = LeftTime;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 5;
	ChooseTime(&LeftTime, Tests, PressedKey);
	result = LeftTime;
	expecting = LeftTime;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 200;
	ChooseTime(&LeftTime, Tests, PressedKey);
	result = LeftTime;
	expecting = LeftTime;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsBonusTime, StatedCommand) //Check change of bonus time
{
	PressedKey = 1;
	ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	result = TimeBonus;
	expecting = 2;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 2;
	ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	result = TimeBonus;
	expecting = 4;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 3;
	ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	result = TimeBonus;
	expecting = 6;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsBonusTime, RewritingCommand) //Check rewriting command if unstated was input in BonusTime menu
{
	PressedKey = 5;
	result = ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	expecting = 0;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsBonusTime, EscapeCommand) //Check escape from choosing Bonustime options command 
{
	PressedKey = 4;
	result = ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 3;
	result = ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 2;
	result = ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 1;
	result = ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsBonusTime, UnStatedCommand) //Check unstated commands for changing bonus time
{
	PressedKey = -1;
	ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	result = TimeBonus;
	expecting = TimeBonus;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 0;
	ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	result = TimeBonus;
	expecting = TimeBonus;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 5;
	ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	result = TimeBonus;
	expecting = TimeBonus;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 200;
	ChooseBonusTime(&TimeBonus, Tests, PressedKey);
	result = TimeBonus;
	expecting = TimeBonus;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsAmountInputVerbs, StatedCommand) //Check change of Amount Input Verbs
{
	PressedKey = 1;
	ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	result = AmountInputVerbs;
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 2;
	ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	result = AmountInputVerbs;
	expecting = 2;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 3;
	ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	result = AmountInputVerbs;
	expecting = 3;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsAmountInputVerbs, RewritingCommand) //Check rewriting command if unstated was input in Amount Input Verbs menu
{
	PressedKey = 5;
	result = ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	expecting = 0;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsAmountInputVerbs, EscapeCommand) //Check escape from choosing Amount Input Verbs options command 
{
	PressedKey = 4;
	result = ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 3;
	result = ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 2;
	result = ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 1;
	result = ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	expecting = 1;
	ASSERT_EQUAL(expecting, result);
}

CTEST (OptionsAmountInputVerbs, UnStatedCommand) //Check unstated commands for changing Amount Input Verbs
{
	PressedKey = -1;
	ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	result = AmountInputVerbs;
	expecting = AmountInputVerbs;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 0;
	ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	result = AmountInputVerbs;
	expecting = AmountInputVerbs;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 5;
	ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	result = AmountInputVerbs;
	expecting = AmountInputVerbs;
	ASSERT_EQUAL(expecting, result);
	PressedKey = 200;
	ChooseAmountInputVerbs(&AmountInputVerbs, Tests, PressedKey);
	result = AmountInputVerbs;
	expecting = AmountInputVerbs;
	ASSERT_EQUAL(expecting, result);
}

CTEST (LeadersTable, CheckNotCreatedTable) //Check return statement then table isn't created
{
	remove("Table.dat");
	struct GeneralPlayer PlayersMassive[10];
	result = SortTable(PlayersMassive);
	expecting = -1;
	ASSERT_EQUAL(expecting,result);
}

CTEST (LeadersTable, CheckTableSort) //Check players sorting and taking last ten players
{
	remove("Table.dat");
	struct GeneralPlayer PlayersMassive[10];
	char Nickname[40];
	int Score;
	strcpy(Nickname, "AAA");
	Score = 2000;
	AddNicknameToTable(Nickname, Score);
	strcpy(Nickname, "BBB");
	Score = -2000;
	AddNicknameToTable(Nickname, Score);
	strcpy(Nickname, "CCC");
	Score = 1200;
	AddNicknameToTable(Nickname, Score);
	strcpy(Nickname, "DDD");
	Score = 1400;
	AddNicknameToTable(Nickname, Score);
	strcpy(Nickname, "EEE");
	Score = 1600;
	AddNicknameToTable(Nickname, Score);
	strcpy(Nickname, "FFF");
	Score = 1000;
	AddNicknameToTable(Nickname, Score);
	strcpy(Nickname, "GGG");
	Score = 500;
	AddNicknameToTable(Nickname, Score);
	strcpy(Nickname, "HHH");
	Score = -1000;
	AddNicknameToTable(Nickname, Score);
	strcpy(Nickname, "III");
	Score = -200;
	AddNicknameToTable(Nickname, Score);
	strcpy(Nickname, "JJJ");
	Score = 0;
	AddNicknameToTable(Nickname, Score);
	strcpy(Nickname, "KKK");
	Score = 100;
	AddNicknameToTable(Nickname, Score);
	strcpy(Nickname, "LLL");
	Score = -500;
	AddNicknameToTable(Nickname, Score);
	SortTable(PlayersMassive);
	result = PlayersMassive[0].StructScore;
	expecting = 1600;
	ASSERT_EQUAL(expecting,result);
	result = PlayersMassive[9].StructScore;
	expecting = -1000;
	ASSERT_EQUAL(expecting, result);
	char ExpectingForChar[40];
	char ResultForChar[40];
	strcpy(ResultForChar, PlayersMassive[0].StructNickname);
	strcpy(ExpectingForChar, "EEE");
	ASSERT_STR(ExpectingForChar, ResultForChar);
	strcpy(ResultForChar, PlayersMassive[9].StructNickname);
	strcpy(ExpectingForChar, "HHH");
	ASSERT_STR(ExpectingForChar, ResultForChar);
}

CTEST (GenerateVerb, CheckGeneration) //Check return statement then table isn't created
{
	char ExpectingForChar[4][60];
	char ResultForChar[4][60];
	int ChosenVerb = 0;
	int i; // for cycle
	GenerateIrregularVerb(ResultForChar, Tests, ChosenVerb);
	strcpy(ExpectingForChar[0], "abide");
	strcpy(ExpectingForChar[1], "abode/abided");
	strcpy(ExpectingForChar[2], "abode/abided");
	strcpy(ExpectingForChar[3], "prebivat'\n");
	for (i = 0; i < 4; i++)
	ASSERT_STR(ExpectingForChar[i],ResultForChar[i]);
	ChosenVerb = 292;
	GenerateIrregularVerb(ResultForChar, Tests, ChosenVerb);
	strcpy(ExpectingForChar[0], "write");
	strcpy(ExpectingForChar[1], "wrote");
	strcpy(ExpectingForChar[2], "written");
	strcpy(ExpectingForChar[3], "pisat'\n");
	for (i = 0; i < 4; i++)
	ASSERT_STR(ExpectingForChar[i],ResultForChar[i]);
	ChosenVerb = 282;
	GenerateIrregularVerb(ResultForChar, Tests, ChosenVerb);
	strcpy(ExpectingForChar[0], "wed");
	strcpy(ExpectingForChar[1], "wed/wedded");
	strcpy(ExpectingForChar[2], "wed/wedded");
	strcpy(ExpectingForChar[3], "vidavat'_zamuj\n");
	for (i = 0; i < 4; i++)
	ASSERT_STR(ExpectingForChar[i],ResultForChar[i]);
}

CTEST (EnterNickname, IncorrectInput) //Check return of EnterNickname in case there were too much symbols
{
	char TestNickname[40];
	strcpy(TestNickname, "012345678901234567890");
	result = EnterNickname(TestNickname, Tests);
	expecting = 0;
	ASSERT_EQUAL(expecting,result);
}

CTEST (EnterNickname, CorrectInput) //Check return of EnterNickname in case input was correct
{
	char TestNickname[40];
	strcpy(TestNickname, "0123456789");
	result = EnterNickname(TestNickname, Tests);
	expecting = 1;
	ASSERT_EQUAL(expecting,result);
}

CTEST (BeginGame, EscapeFromTimeMode) //Check command escape from different mods
{
	StandardGameMode = 0;
	char InputVerbs[3][3][60];
	strcpy(InputVerbs[0][0], "esc");
	expecting = 2;
	result = BeginGame(LeftTime, TimeBonus, AmountInputVerbs, StandardGameMode, Tests, InputVerbs, 0);
	ASSERT_EQUAL(expecting,result);
	StandardGameMode = 1;
	result = BeginGame(LeftTime, TimeBonus, AmountInputVerbs, StandardGameMode, Tests, InputVerbs, 0);
	ASSERT_EQUAL(expecting,result);
}

CTEST (BeginGame, TimeIsUp) //Check end after time is up
{
	StandardGameMode = 0;
	LeftTime = 0;
	expecting = 1;
	result = BeginGame(LeftTime, TimeBonus, AmountInputVerbs, StandardGameMode, Tests, 0, 0);
	ASSERT_EQUAL(expecting,result);
}

CTEST (CheckVerb, CorrectVerb) //Check return then verb is correct
{
	char GeneratedWord[4][60];
	char InputVerbs[3][60];
	int i; //for cycle
	for (i = 0; i < 3; i++)
	{
		strcpy(InputVerbs[i], "aaa");
		strcpy(GeneratedWord[i], "aaa");
	}
	result = CheckVerb(GeneratedWord, InputVerbs);
	expecting = 1;
	ASSERT_EQUAL(expecting,result);
}

CTEST (CheckVerb, InCorrectVerb) //Check return then verb is not correct
{
	char GeneratedWord[4][60];
	char InputVerbs[3][60];
	int i; //for cycle
	for (i = 0; i < 3; i++)
	{
		strcpy(InputVerbs[i], "aaa");
		strcpy(GeneratedWord[i], "aaa");
	}
	InputVerbs[2][1] = 'k';
	result = CheckVerb(GeneratedWord, InputVerbs);
	expecting = 0;
	ASSERT_EQUAL(expecting,result);
}

CTEST (ChangeVariables, CorrectChange) //Check return Value from functions in ChangeVariables
{
	int Answer;
	TimeBonus = 10;
	Answer = 1;
	result = AddScore(Answer);
	expecting = 50;
	ASSERT_EQUAL(expecting,result);
	result = AddTimeLeft(Answer, TimeBonus);
	expecting = TimeBonus;
	ASSERT_EQUAL(expecting,result);
	Answer = 0;
	result = AddScore(Answer);
	expecting = -350;
	ASSERT_EQUAL(expecting,result);
	result = AddTimeLeft(Answer, TimeBonus);
	expecting = 0;
	ASSERT_EQUAL(expecting,result);
	Answer = -1;
	result = AddScore(Answer);
	expecting = 0;
	ASSERT_EQUAL(expecting,result);
}

int main(int argc, const char** argv) 
{
	int test_res = ctest_main(argc, argv);
	return test_res;
}
