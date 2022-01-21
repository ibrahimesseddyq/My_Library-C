int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*strcat(char *dest, char *src)
{
	int	i;
	int	b;

	b = 0;
	i = strlen(dest);
	while (src[b])
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}