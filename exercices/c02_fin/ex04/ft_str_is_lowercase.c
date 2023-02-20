/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:40:24 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/15 20:43:40 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
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
