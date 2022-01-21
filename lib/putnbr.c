#include<unistd.h>
void	fputc(char c)
	{
	 write(1, &c, 1);
}

void	putnbr(int nb)
{
	if (nb < 0)
	{
		fputc('-');
		putnbr(nb * -1);
	}
	else if (nb <= 9)
	{
		fputc(nb + 48);
	}
	else
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
}