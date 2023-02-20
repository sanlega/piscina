/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 18:59:38 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/17 10:59:22 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(int a)
{
	write (1, &a, 1);
}

void	ft_putnbr(int nb, int basnum)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb < basnum)
	{
		ft_putchar(nb + basnum);
		return ;
	}
	else
		ft_putnbr(nb / basnum);
	ft_putnbr(nb % basnum);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int i;

	i = 0;
	while (base != '\0')
		i++;
		ft_putnbr(nbr, i);
		ft_putchar(nb);
}

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
