#include<unistd.h>
void	ft_rev_int_tab (int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = size - 1;
	c = 0;
	while (tab[a] < tab[b])
	{
		c = tab[b];
		tab[b] = tab[a];
		tab[a] = c;
		a++;
		b--;
	}
}