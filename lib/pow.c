int power(int nb, int power)
{
    int result;
    if (power < 0)
        return (0);
    else if(power == 0)
        return (1);
    else if (power == 1)
        result = nb;
    result = nb;
    while (power > 1)
    {
        result *= nb;
        power--;
    }
    return (result);
}
