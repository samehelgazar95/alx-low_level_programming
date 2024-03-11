#include "search_algos.h"

/**
 * linear_search - Linear Search Algo Implementation
 * @array: The array
 * @size: the length of the arr
 * @value: the value to search for
 * Return: the idx where value found
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[{%ld}] = [{%d}]", i, array[i]);
        if (array[i] == value)
        {
            printf("Found {%d} at index : {%ld}", array[i], i);
            return (value);
        }
    }

    return (-1);
}
