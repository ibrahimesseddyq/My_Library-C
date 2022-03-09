size_t	strlcat(char *dst, char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len_dst;
	size_t total_length;

	i = 0;
	len_dst = strlen(dst);
	j = len_dst;
	total_length = len_dst + strlen(src);
	if (j >= size)
		return (total_length - (j - size));
	while (src[i] != '\0' && (i + len_dst) < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (total_length);
}