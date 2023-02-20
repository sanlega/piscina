/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_rush.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:27:26 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/19 19:32:23 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void 	ft_write(int start, char *file);
int	    ft_atoi(char *str);
int     mult10(int n);
int	getstr(char **dest, char *str, int len);
void	find_dic(int tofind, int **mem, char *file, int n);
int mult10(int n);
int	ft_strlen(char *str);

void rec_ft_numb(char *str, int **mem, char *file, int n)
{
	int	nb;
	int	len;
	int	index;
	int	i = 0;
	char	*aux;
	int	ten = 10;
	
	len = ft_strlen(str);
	if (len > 3){
		index = len % 3;
		if (index == 0)
			index = 3;
		aux = malloc(4);
		while (i < index)
		{
			aux[i] = str[i];
			i++;
		}
		rec_ft_numb(aux, mem, file, n);
		free(aux);
		write (1, " ", 1);
		i = 1;
		while (i < (len - index)){
			ten = ten *10;
			i++;
		}
		find_dic(ten, mem, file, n);
		write (1, " ", 1);
		rec_ft_numb(str+index, mem, file, n);
	}
	else
	{
		nb = ft_atoi(str);
		if (nb > 99){
			find_dic(nb / 100, mem, file, n);
			find_dic(100, mem, file, n);
			nb = nb % 100;
			write (1, " ", 1);
			if ((nb - (nb % 10)) != 0)
		{
			find_dic(nb - (nb % 10), mem, file, n);
			write (1, "-", 1);
		}

		if((nb % 10) != 0)
			find_dic(nb % 10, mem, file, n);
	}
	else if(nb > 9)
		if((nb - (nb % 10)) != 0)
		{
			find_dic(nb - (nb % 10), mem, file, n);
			write(1, "-", 1);
		}

		if((nb % 10) != 0)
			find_dic(nb % 10, mem, file, n);
	else	
		find_dic(nb, mem, file, n);
	return;
	}
}

void	find_dic(int tofind, int **mem, char *file, int n)
{
	int i;

	i = 0;
	while(i < n)
	{
		if(mem[1][i] == tofind){
			ft_write(mem[0][i], file);
			return;
		}
		i++;
	}
}
