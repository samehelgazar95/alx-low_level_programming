#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator- execute function given as a parameter on each element of an array.
 * @array: the given array
 * @size: size of the array
 * @action: the callback function
 * Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
