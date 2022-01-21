int    islower(char *str)
{
    int i;

    i = 0;
	while (str[i] != "\0")
	{
		if (str[i] >= 97 && str[i] <= 122)
    	{
            return (1);
    	}
    	else 
        	return (0);
	}
}