/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 09:45:58 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/19 19:54:34 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str);

int	readline(int *start, char *memory)
{
	int		i;
	char	temp[12];
	int		nbr;

	i = *start;
	while (memory[i] != ':')
	{
//pendiente de mejorar para cualquier caso de error
		temp[i - *start] = memory[i];
		i++;
	}
	temp [i - *start] = '\0';
	i += 2;
//pendiente de revision, me salto el espacio y empiezo en la palabra
	nbr = ft_atoi(temp);
	*start = i;
	return (nbr);
}
