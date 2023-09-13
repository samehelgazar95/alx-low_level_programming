#include "function_pointers.h"

/**
 * int_index- searches for an integer.
 * @array: the array holding numbers
 * @size: the size of the arr
 * @cmp: the compate function
 * Return: index or -1 or 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res = -1;

	if (size <= 0)
		return (res);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				res = i;
				break;
			}
		}
	}

	return (res);
}
