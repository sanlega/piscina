/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:34:11 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/15 20:40:03 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	char srt[] = "Acc";

	printf("%i", t_str_is_uppercase(srt));

	return (0);
}
*/
