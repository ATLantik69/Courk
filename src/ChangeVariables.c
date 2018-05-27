
void ScroreCount(int Answer,int *Score)
{
	int temp = *Score;
	if (Answer == 1)
	temp += 50;
	if (Answer == 0)
	temp -= 350;
	*Score = temp;
}


