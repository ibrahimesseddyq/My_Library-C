int sqroot(int nb)
{
    int i;
    int res;

    i = 1;
    while (nb > 1)
    {
        res = i*i;
        if (res == nb)
            break;
        i++;
    }
    return(i);
    
}