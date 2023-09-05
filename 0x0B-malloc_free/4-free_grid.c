#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid- freeing the malloc
 * @grid: the 2d array
 * @height: the height
 * Return: Nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
