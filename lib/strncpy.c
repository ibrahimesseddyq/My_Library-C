char	*strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	while(src[i] && i< n)
	{
		dest[i] = src[i];
		i++
	}
	return(dest);
}