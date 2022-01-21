int    tolower(char *str)
{
    int i;

    i = 0;

        while(str[i] != "\0")
        { 
            if (str[i] >= 65 && str[i] <= 90)
            {
                str[i] = str[i] + 32;
            }
        return(str);
    }
   
}