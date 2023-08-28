#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: string to fill
 * @b: char to replace with
 * @n: number of looping
 *
 * Return: new edited string
*/

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *res = s;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (res);
}
