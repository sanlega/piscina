/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testMain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:06:28 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/19 20:07:09 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_read_file(char *name, int **mem, int **ini, int *nlines);
void	ft_write(int start, char *file);

int	main(void)
{
	char	*file;
	int		*starts;
	int		*numbers;
	int		nlines;

	file = ft_read_file("numbers.dict", &numbers, &starts, &nlines);
	printf("Num lineas: %d\n", nlines);
	printf("Archivo:\n%s", file);
	for(int i = 0; i < nlines; i++)
	{
		printf("Inicio de cadena %d en %d \n%d se escribe\n", i, starts[i], numbers[i]);
		ft_write(starts[i], file);
		printf("\n");
	}
}
