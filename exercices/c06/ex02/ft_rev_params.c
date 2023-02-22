/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:01:36 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/21 19:16:59 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	len;

	i = 1;
	j = argc - 1;
	while (j > 0)
	{
		len = ft_strlen(argv[j]);
		write(1, argv[j], len);
		write(1, "\n", 1);
		j--;
	}
	return (0);
}
