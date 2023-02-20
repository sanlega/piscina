/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:33:15 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/15 18:26:10 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i])
	{
		if (str[i] >= 48 && str[i] <= 87)
			alpha = 1;
		else
			return (0);
		i++;
	}
	return (alpha);
}
/*
int	main()
{
	char srt[] = "c";

	printf("%i", ft_str_is_numeric(srt));

	return (0);
}
*/
