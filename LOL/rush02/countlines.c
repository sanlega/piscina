/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countlines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:21:41 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/19 23:15:52 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_chars(char *str);

int	countlines(char *str, int **memory)
{
	int	i;
	int	l;
	int	j;

	i = 0;
	j = 0;
	l = count_chars(str);
	*memory = malloc(l * 4);
	i = 0;
	while (j < l)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if ((i == 0) || (str[i - 1] == '\n'))
			{
				(*memory)[j] = i;
				j++;
			}
		}
		i++;
	}
	return (l);
}

int	count_chars(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			if ((i == 0) || (str[i - 1] == '\n'))
				++l;
		}
		i++;
	}
	return (l);
}
