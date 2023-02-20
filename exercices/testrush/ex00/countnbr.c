/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:24:26 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/19 19:24:58 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	calculate_number(int nb, char *number, int counter)
{
	int	divider;

	divider = 1000000000;
	while (nb < divider)
		divider = divider / 10;
	while (divider > 0)
	{
		number[counter] = (nb / divider) + '0';
		nb = nb - ((nb / divider) * divider);
		counter++;
		divider = divider / 10;
	}
	return (counter);
}
