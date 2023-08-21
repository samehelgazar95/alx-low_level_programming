#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: array to calc it's length
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return i;
}
