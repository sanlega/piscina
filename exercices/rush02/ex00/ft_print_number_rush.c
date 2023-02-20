/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number_rush.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:27:26 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/19 19:48:18 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_write(int start, char *file);
int		ft_atoi(char *str);
int		mult10(int n);
int		getstr(char **dest, char *str, int len);
void	find_dic(int tofind, int **mem, char *file, int n);
int		mult10(int n);
int		ft_strlen(char *str);
void	write_hundreds(int nb, int **mem, char *file, int n);
void	write_decs(int nb, int **mem, char *file, int n);
void	write_units(int nb, int **mem, char *file, int n);
int		calculate_base_ten(int n);
void	ft_base_cases(char *str, int **mem, char *file, int n);

void	rec_ft_numb(char *str, int **mem, char *file, int n)
{
	int		len;
	int		index;
	int		i;
	char	*aux;

	len = ft_strlen(str);
	i = 0;
	if (len > 3)
	{
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
		find_dic(calculate_base_ten(len - index), mem, file, n);
		rec_ft_numb(str + index, mem, file, n);
	}
	else if (! ((len != 1) && (ft_atoi(str) == 0)))
		ft_base_cases(str, mem, file, n);
}

void	find_dic(int tofind, int **mem, char *file, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (mem[1][i] == tofind)
		{
			ft_write(mem[0][i], file);
			return ;
		}
		i++;
	}
}

int	calculate_base_ten(int n)
{
	int	i;
	int	ten;

	ten = 10;
	i = 1;
	while (i < n)
	{
		ten = ten * 10;
		i++;
	}
	return (ten);
}
