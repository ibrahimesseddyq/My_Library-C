int    isupper(char *str)
{
    int i;

    i = 0;
	while (str[i] != "\0")
	{
		if (str[i] >= 65 && str[i] <= 90)
    	{
			return (1);    
    	}
		else 
			return (0);
	}
}