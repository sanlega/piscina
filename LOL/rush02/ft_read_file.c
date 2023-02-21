/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanferna <sanferna@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 02:51:22 by sanferna          #+#    #+#             */
/*   Updated: 2023/02/19 23:12:21 by slegaris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#include <stdio.h>

int		readline(int *start, char *memory);
char	*ft_file_to_str(char *str);
int		countlines(char *str, int **memory);

char	*ft_read_file(char *name, int **mem, int **ini, int *nlines)
{
	char	*file;
	int		i;

	file = ft_file_to_str(name);
	if (file == NULL)
	{
		write(1, "Dict Error\n", 11);
		return (NULL);
	}
	*nlines = countlines(file, ini);
	*mem = malloc(*nlines * 4);
	i = 0;
	while (i < *nlines)
	{
		(*mem)[i] = readline(&((*ini)[i]), file);
		i++;
	}
	return (file);
}

char	*ft_file_to_str(char *name)
{
	char	*p;
	int		i;
	int		id;
	int		ret;
	char	letter;

	i = 0;
	ret = 1;
	id = open(name, O_RDONLY);
	if (id < 0)
		return (NULL);
	while (ret > 0)
	{
		ret = read(id, &letter, 1);
		i++;
	}
	close(id);
	id = open(name, O_RDONLY);
	p = malloc((i + 1) * 1);
	read(id, p, i);
	close(id);
	p[i] = '\0';
	return (p);
}
