/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 13:07:03 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/21 23:16:28 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strlen(char *str)
{
	int	l;
	int	i;

	l = 0;
	i = 0;
	while (str[i] != '\0')
	{
		i++;
		l++;
	}
	return (l);
}

int	main(int argc, char *argv[])
{
	int	i;

	(void) argc;
	i = 1;
	while (argv[i] != 0)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
