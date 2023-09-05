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

	res = malloc(sizeof(*res) * height);
	if (width <= 0 || height <= 0 || res == 0)
	{
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		res[i] = malloc(sizeof(**res) * width);
		if (res[i] == 0)
		{
			while (i--)
			{
				free(res[i]);
			}
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
