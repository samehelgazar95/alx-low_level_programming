#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked- returns ptr to MAlloced or 98
 * @b: the size to allocate
 * Return: Nothing
*/

void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
	{
		exit(98);
	}

	return (c);
}
