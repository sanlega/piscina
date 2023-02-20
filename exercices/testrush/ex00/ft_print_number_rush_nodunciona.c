/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_rush.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:27:26 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/19 12:27:29 by sanferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_write(int start, char *file);
int	    ft_atoi(char *str);
int     ft_str_len(char *str);
int     mult10(int n);

void ft_print_number_rush(char *str, int **mem, char *file, int n)
{
	int nb;
	int i;
	int len;
	char aux[4];
	int max;
	len = ft_str_len(str);
	if(ft_str_len(str) > 3)
	{		
		max = (n % 3);
		if((max == 0) && len >= 3)
			max = 3;
		/*else if((max == 0) && len < 3)
			max = len;*/
		i = 0;
			while( i < max)
			{
				aux[i] = str[i];
				i++;
			}
		aux[i] = '\0';
		ft_print_number_rush(aux, mem, file, n);
		nb = mult10((len - 1) / 3);

		i = 0;
		while (i < n)
		{
			if(mem[0][i] == nb)
				ft_write(mem[1][i], file);
			i++;
		}
		str += n;
		ft_print_number_rush(str, mem, file, n);
		
	}
	else{ 
	nb = ft_atoi(str);
	i = 0;
	while (i < n)
	{
		if(mem[0][i] == nb)
			ft_write(mem[1][i], file);
		i++;
	}

	}
}

int mult10(int n)
{
	int i;
	int n;

	i = 0;
	n = 1;
	while (i < n)
	{
		n = n * 1000;
	}
	return (n);
}