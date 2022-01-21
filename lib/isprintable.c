int    isprint(char *str)
{
    int i;

    i = 0;
	while (str[i] != "\0")
	{
    	if (str[i] >= 32 && str[i] <= 126)
    	{
            return (1);    
    	}
    	else 
        	return (0);
	}
}