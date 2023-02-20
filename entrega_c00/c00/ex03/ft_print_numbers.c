/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:40:44 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/03 12:42:12 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	n;

	n = '0';
	while (n <= '9')
	{
		write (1, &n, 1);
		n++;
	}
}
/*
int	main()
{
    ft_print_numbers();
    return(0);
}
*/
