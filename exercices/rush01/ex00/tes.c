#include <stdio.h>

/*int count_array(int **array, int i)
{
	i = 0;
	while (array[i] != '\0')
	{
		i++;
	}
	return (1);
}*/

float	absolute(float i)
{
	if (i < 0)
		i = -i;
	return i;
}

float	sqrn(float i)
{
	float guess;

	guess = 1;
	while (absolute((guess * guess) / i - 1.0) >= 0.0001)
	{
		guess = ((i / guess) + guess) / 2;
	}
	return guess;
}

int ftoi(float absolute(guess))
{
	int j;

	j = 0;
	while (guess >= 1)
	{
		j++;
		guess--;
	}
	return result;
}

int	main(void)
{
	printf("%f\n", ftoi(81));
	printf("%f\n", ftoi(16));
	return (0);
}
