#include "search_algos.h"

/**
 * linear_search - Linear Search Algo Implementation
 * @array: The array
 * @size: the length of the arr
 * @value: the value to search for
 * Return: the idx where value found or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

