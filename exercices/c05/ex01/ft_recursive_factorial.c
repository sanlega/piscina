/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:51:47 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/19 18:04:13 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;

	i = 0;
	while (i <= nb)
	{	
		if (nb == 0)
			return (1);
		return (nb * ft_recursive_factorial(nb - 1));
		i++;
	}
	return (0);
}
