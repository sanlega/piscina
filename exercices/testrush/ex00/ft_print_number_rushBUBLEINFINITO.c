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
#include <stdlib.h>
#include <stdio.h>
void 	ft_write(int start, char *file);
int	    ft_atoi(char *str);
int     mult10(int n);
int	getstr(char **dest, char *str, int len);
void	find_dic(/*int tofind, int **mem, char *file, int n*/);
int mult10(int n);
int	ft_strlen(char *str);

void rec_ft_numb(char *str, int **mem, char *file, int n)
{
	int nb;
	int i;
	int len; 
	char *aux;

	len = ft_strlen(str);
	printf("he entrado %d\n", len);
	if(len > 3)
	{		
		i = getstr(&aux, str, len);
		printf("Cadena encontrada%s\n", aux);
		/*str += i;*/
		/*printf("String catado%s de len %d\n", str, ft_strlen(str));*/
		rec_ft_numb(aux, mem, file, n);
		free(aux);
		nb = mult10((len - 1) / 3);
		printf("BUSCOOOO%d\n", nb);
		find_dic(nb, mem, file, n);
		rec_ft_numb(&str[i -1], mem, file, n);
	}
	else{ 
		/*printf("String %s de len %d\n", str, ft_strlen(str));*/
		nb = ft_atoi(str);
		printf("Estoy aqui %d\n", nb);
		/*printf("num devuelto: %d - n %d\n", nb, n);
		printf("hola");*/
		find_dic(nb, mem, file, n);
		printf("he salido");
		return;
	}
}

void	find_dic(int tofind, int **mem, char *file, int n)
{
	int i;

	i = 0;
	/*printf("hola");*/
	while(i < n)
	{
		if(mem[1][i] == tofind){
			ft_write(mem[0][i], file);
			printf("voy a salir");
			return;
		}
		i++;
	}
}

int	getstr(char **dest, char *str, int len)
{
	int idx;
	int i;

	*dest = malloc(4);
	idx = (len % 3);
	if((idx == 0) && len >= 3)
		idx = 3;
	i = 0;
	while( i < idx)
	{
		(*dest)[i] = str[i];
		i++;
	}
	(*dest)[i] = '\0';
	return (idx);
}

int mult10(int n)
{
	int i;
	int nb;

	i = 0;
	nb = 1;
	while (i < n)
	{
		nb = nb * 1000;
	}
	return (nb);
}