/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:01:43 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/19 18:03:04 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 0i;
	if (nb == 0)
		return (0);
	while (i < nb)
	{
		nb = nb * (i - 1);
		i++;
	}
	return (nb);
}
