#include "search_algos.h"

/**
 * binary_search - Binary Search Algo Implementation
 * @array: the array
 * @size: the array length
 * @value: the value
 * Return: the idx of value of -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left = 0, right = size - 1, idx;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array:");
		for (idx = left; idx <= right; idx++)
		{
			if (idx == right)
				printf(" %d\n", array[idx]);
			else if (idx != right)
				printf(" %d,", array[idx]);
		}

		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}
