int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static size_t	check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (base == '\0')
		return (0);
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[j] == base[i] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbrbase(int nbr, char *base)
{
	if (nbr * -1 - 1 == 2147483647 || !(check_base(base)))
		return ;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		ft_putchar('-');
	}
	if (nbr / ft_strlen(base) != 0)
		ft_putnbrbase(nbr / ft_strlen(base), base);
	ft_putchar(base[nbr % ft_strlen(base)]);
}
/*
int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n-1:", 4);
	ft_putnbr_base(-1, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\v0123456789abcdef");
}
*/
