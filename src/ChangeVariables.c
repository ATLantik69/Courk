
void ScroreCount(int Answer,int *Score)
{
	int temp = *Score;
	if (Answer == 1)
	temp += 50;
	if (Answer == 0)
	temp -= 350;
	*Score = temp;
}

void TimeLeftCount(int Answer,int *TimeLeft)
{
	int temp = *TimeLeft;
	if (Answer == 1)
	temp += 6;
	*TimeLeft = temp;
}
