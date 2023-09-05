#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid- returns a pointer to a 2 dimensional array of integers.
 * @width: widht Of 2d array
 * @height: height of 2d array
 * Return: 2d Array or null
*/

int **alloc_grid(int width, int height)
{
	int **res;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	res = (int **)malloc(sizeof(int *) * height);
	if (res == NULL)
		return (0);

	for (i = 0; i < width; i++)
	{
		res[i] = (int *)malloc(sizeof(int) * height);
		if (res[i] == NULL)
		{
			while (i--)
				free(res[i]);
			
			free(res);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			res[i][j] = 0;
		}
	}

	return (res);
}
