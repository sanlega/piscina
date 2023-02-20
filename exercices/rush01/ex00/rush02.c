int	rush01(int **tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (tab[i] < 4)
	{
		while (tab[j] < 4)
		{
			write(1, tab[i][j], 1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int	main(void)
{
	rush01([][]);
	return (0);
}
