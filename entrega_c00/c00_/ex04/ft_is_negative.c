/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:57:02 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/08 15:31:27 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative( int n)
{
	char	neg;
	char	pos;

	neg = 'N';
	pos = 'P';
	if (n >= 0)
	{
		write(1, &pos, 1);
	}
	else
	{
		write(1, &neg, 1);
	}
}
/*
int main()
{
	ft_is_negative(0);
	return(0);
}
*/
