#include<unistd.h>
void	fputc(char c)
	{
	 write(1, &c, 1);
}