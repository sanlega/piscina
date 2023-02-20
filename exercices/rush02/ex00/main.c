/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 10:06:28 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/19 23:19:11 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_read_file(char *name, int **mem, int **ini, int *nlines);
void	ft_write(int start, char *file);
void	rec_ft_numb(char *str, int **mem, char *file, int n);
char	input_ex(char *str);
void	free_all(char **file, int **arr1, int **arr2);

int	main(int argc, char *argv[])
{
	char	*file;
	int		*memory[2];
	int		nlines;
	int		n;

	if (argc > 2)
	{
		file = ft_read_file(argv[1], &memory[1], &memory[0], &nlines);
		if (file == NULL)
			return (1);
		n = 2;
	}
	else
	{
		file = ft_read_file("numbers.dict", &memory[1], &memory[0], &nlines);
		if (file == NULL)
			return (1);
		n = 1;
	}
	if (input_ex(argv[n]))
		return (1);
	rec_ft_numb(argv[n], memory, file, nlines);
	free_all(&file, &memory[0], &memory[1]);
	return (0);
}

void	free_all(char **file, int **arr1, int **arr2)
{
	free(*file);
	free(*arr1);
	free(*arr2);
}
