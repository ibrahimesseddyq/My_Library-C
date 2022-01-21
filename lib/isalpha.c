int	isalpha(char *str)
{
	int alpha;

	alpha = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 65 || str[i] <= 121 )
		{
			return(1);
		}
		else if (str[i] < 65 || str[i] > 121)
		{
			return(0);
		i++;
		}

	}
}