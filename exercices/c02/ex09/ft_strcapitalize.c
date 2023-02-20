/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 16:21:34 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/16 23:04:25 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	alpha(char *c)
{
	if ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'))
		return (1);
	else
		return (0);
}

char	upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		if (alpha(&str[i]))
		{
			if (w)
				str[i] = lower(str[i]);
			else
				str[i] = upper(str[i]);
			w = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			w = 1;
		else
			w = 0;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char srt[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(srt));

	return (0);
}
*/
