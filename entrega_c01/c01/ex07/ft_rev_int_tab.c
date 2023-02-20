/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:14:38 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/09 17:35:29 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int a)
{
	char	c;

	if (a >= 10)
		ft_putnbr(a / 10);
	c = a % 10 + '0';
	write (1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int l)
{
	int	a;
	int	i;

	a = 0;
	i = 0;
	while (i < l)
	{
		i++;
		a++;
	}
	i = 1;
	while (i <= l)
	{
		ft_putnbr(tab[a - i]);
		i++;
	}
}
/*
int main(void)
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
    reverse_array(tab, 8);
	return(0);
}
*/
