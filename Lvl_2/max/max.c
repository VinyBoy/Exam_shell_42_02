
int	max(int	*tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	if (!tab || !len)
		return (0);
	max = tab[i];
	while(i < len)
	{
		if (max <= tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

