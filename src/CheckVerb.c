
int CheckVerb(char GeneratedWord[4][60], char InputVerbs[3][60])
{
	int i, j; // Variables for cycle
	for (i = 0; i < 3; i++)
	{  
		j = 0;
		while (InputVerbs[i][j] != '\0')
		{
			if (InputVerbs[i][j] != GeneratedWord[i][j])
			return 0;
			j++;
		}
		if (j == 0)
		return 0;
	}
	return 1;
}
