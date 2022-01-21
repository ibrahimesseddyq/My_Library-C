int fibonacci(int nb)
{
    if (nb < 0)
        return (-1);
    if (nb == 0)
        return (0);
    if (nb == 1 || nb == 2)
        return(1);
    return(fibonacci(nb -1) + fibonacci(nb -2));
}