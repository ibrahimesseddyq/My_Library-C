int		atoi(char *str)
{
    int i;
    int result;
    int n;

    i = 0;
    n = 1;
    
        while(str[i] == 9 || str[i] == 10 || str[i] == 32 || str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
            i++;
        while(str[i] == '+' || str[i] == '-')
        {
            if (str[i] == '-')
                n *= -1;
            i++;
        }
        while(str[i] >= 48 && str[i] <= 57)
        {
          result *= 10;
          result += str[i] - 48;
          i++;
        }
        return(result * n);
}