#include <stdlib.h>
#include <stdio.h>

/**
 * array_range- creates an array of integers.
 * @min: min num
 * @max: max num
 * Return: ptr to array of int
*/

int *array_range(int min, int max)
{
	int size, i;
	int *arr = NULL;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
