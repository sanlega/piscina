/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base_cases.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegaris <slegaris@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 23:01:08 by slegaris          #+#    #+#             */
/*   Updated: 2023/02/19 23:01:10 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	find_dic(int tofind, int **mem, char *file, int n);
void	write_hundreds(int nb, int **mem, char *file, int n);
void	write_decs(int nb, int **mem, char *file, int n);
void	write_units(int nb, int **mem, char *file, int n);
int		ft_atoi(char *str);

void	ft_base_cases(char *str, int **mem, char *file, int n)
{
	int	nb;

	nb = ft_atoi(str);
	write(1, " ", 1);
	if (nb > 99)
		write_hundreds(nb, mem, file, n);
	else if (nb > 9)
		write_decs(nb, mem, file, n);
	else
		write_units(nb, mem, file, n);
}

void	write_hundreds(int nb, int **mem, char *file, int n)
{
	if (nb / 100 > 0)
		find_dic(nb / 100, mem, file, n);
	write(1, " ", 1);
	find_dic(100, mem, file, n);
	write(1, " ", 1);
	nb = nb % 100;
	if (nb > 9)
		write_decs(nb, mem, file, n);
	else if (nb > 0)
		write_decs(nb, mem, file, n);
}

void	write_decs(int nb, int **mem, char *file, int n)
{
	int	temp;

	temp = nb - (nb % 10);
	if (temp <= 10)
	{
		find_dic(nb, mem, file, n);
		write(1, " ", 1);
		return ;
	}
	else
		find_dic(temp, mem, file, n);
	write(1, " ", 1);
	nb = nb % 10;
	if (nb > 0)
		write_units(nb, mem, file, n);
}

void	write_units(int nb, int **mem, char *file, int n)
{
	find_dic(nb, mem, file, n);
	write(1, " ", 1);
}
