
int AddScore(int Answer, int Score)
{
	if (Answer == 1)
	return 50;
	if (Answer == 0)
    return -350;
    return 0;
}

int AddTimeLeft(int Answer,int LeftTime, int TimeBonus)
{
	if (Answer == 1)
	return TimeBonus;
	return 0;
}


