#include "main.h"
#include <stdlib.h>

/**
 * create_array- creates an array of chars
 * @size: size of the array
 * @c: the char to be filled with
 * Return: return Dynamic string or NULL
*/

char *create_array(unsigned int size, __attribute__((unused)) char c)
{
	char *res;
	int i;

	res = (char *)malloc(sizeof(char) * size);
	if (res == NULL || size == 0)
	{
		return (NULL);
	}

	i = 0;
	while (size)
	{
		res[i] = c;
		size--;
		i++;
	}

	return (res);
}
