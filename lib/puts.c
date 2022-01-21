#include<unistd.h>
void	fputc (char ch)
{
	write(1, &ch, 1);
}

void	fputs(char *str)
{
	int	i;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}