void	isnegative(int n)
	{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else if (n < 0)
		write(1, "N", 1);
}