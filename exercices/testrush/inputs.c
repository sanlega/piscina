/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inputs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:30:42 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/19 22:13:44 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	input_ex(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			write(1, "Error\n", 5);
		return (1);
		i++;
	}
	return (0);
}