char	**strtabdup(char **tab)
{
	char	**new;
	int		i;

	new = (char**)malloc(sizeof(char*) * (ft_strtablen(tab) + 1));
	i = 0;
	while (*tab)
	{
		new[i++] = ft_strdup(*tab);
		tab++;
	}
	new[i] = NULL;
	return (new);
}