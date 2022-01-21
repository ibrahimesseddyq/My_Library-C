int factorial(int nb)
{
    int i;
    int num;

    num = 1;
    i = 1;
    while (i <= nb)
    {
        num = num * i;
        i++;
    }
    return (num);
}