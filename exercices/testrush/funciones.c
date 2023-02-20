	




//if (len > 3)

int	pico3(char *str, int **mem, char *file, int n)
{
	int index;


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
	while (i < (len - index))
	{
		ten = ten * 10;
		i++;
	}
	find_dic(ten, mem, file, n);
	write (1, " ", 1);
	rec_ft_numb(str + index, mem, file, n);
}+
