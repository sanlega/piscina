/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:06:28 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/19 21:06:39 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_read_file(char *name, int **mem, int **ini, int *nlines);
void	ft_write(int start, char *file);
/*int		check_param(char *param);*/
void	rec_ft_numb(char *str, int **mem, char *file, int n);

int	main(void)
{
	char	*file;
	int		*memory[2];
	int		nlines;
/*int		n;*/
/*if (argc > 2){
file = ft_read_file(argv[1], &memory[0], &memory[1], &nlines);
n = 2;
}
else
{ 
file = ft_read_file("numbers.dict", &memory[0], &memory[1], &nlines);
n = 1;
}*/
	file = ft_read_file("numbers.dict", &memory[1], &memory[0], &nlines);
/*printf("Num lineas: %d\n", nlines);
printf("Archivo:\n%s", file);*/
/*for(int i = 0; i < nlines; i++)
{
printf("Inicio de la cadena %d en %d \n%d se escribe de la forma\n", i,
memory[0][i], memory[1][i]);
ft_write(memory[0][i], file);
printf("\n");
}*/
	rec_ft_numb("2544144", memory, file, nlines);
/*if(/check_param(argv[n])1)*/
/*ft_print_number_rush("400", memory, file, nlines);*/
/*free_all();*/
	return (0);
}
