/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:57:07 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/19 23:10:58 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_write(int start, char *file)
{
	while (file[start] != '\n')
	{
		write(1, &file[start], 1);
		start++;
	}
	return (0);
}
