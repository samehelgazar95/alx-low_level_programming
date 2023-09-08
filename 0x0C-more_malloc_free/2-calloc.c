#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc- allocates memory for an array
 * @nmemb: length of array
 * @size: size of type
 * Return: return ptr or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	res = malloc(nmemb * size);
	if (res == NULL)
	{
		return (NULL);
	}

	memset(res, 0, nmemb * size);

	return (res);
}
