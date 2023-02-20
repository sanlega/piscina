/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   countlines.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 19:21:41 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/19 19:24:03 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	countlines(char *str, int **memory)
{
	int	i;
	int	l;
	int	j;

	i = 0;
	l = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			++l;
		i++;
	}
	*memory = malloc(l * 4);
	i = 0;
	while (j < l)
	{
		if ((i == 0) || (str[i - 1] == '\n'))
		{
			(*memory)[j] = i;
			j++;
		}
		i++;
	}
	return (l);
}
