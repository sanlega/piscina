/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:46:52 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/09 02:00:18 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char srt[] = "\n aasgas";

	printf("%i", ft_str_is_printable(srt));

	return (0);
}
*/
