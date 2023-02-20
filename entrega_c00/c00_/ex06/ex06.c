/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:26:58 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/07 16:40:17 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar2(char ca, char cb)
{
	write(1, &ca, 1);
	write(1, &cb, 1);
}

void	ft_putint(int num, int max)
{
	char ch_u;
	char ch_d;
	if (num <= 9)
	{
		ch_u = num + 48;
		ft_putchar2('0', ch_u);
	}
	else if (num <= max)
	{
		ch_u = (num % 10) + 48;
		ch_d = (num / 10) + 48;
		ft_putchar2(ch_d, ch_u);
	}
}

void	ft_intdiv(int fir, int sec)
{
	ft_putint(fir, 98);
	write(1, " ", 1);
	ft_putint(sec, 99);
	if (fir != 98 || sec != 99)
		ft_putchar2(',', ' ');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = '0';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			ft_intdiv(a, b);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
