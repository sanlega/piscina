/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 20:52:59 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/08 22:46:18 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char src[] = "Hello";
	char dest[] = "World1";
	char dest1[] = "World2";
	printf("%s", ft_strncpy(dest, src, 3));

	printf("\n%s", ft_strncpy(dest, src, 5));

	printf("\n%s", ft_strncpy(dest, src, 7));

	return (0);
}
*/
