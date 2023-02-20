/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:34:20 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/12 10:31:20 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include  <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s1 || *s2)
	{
		i = *s1 - *s2;
		if (i)
			return (i);
		s1++;
		s2++;
	}
	return (0);
}
/*
int main()
{
  ft_strcmp("hola", "holaa");
  return 0;
}
*/
