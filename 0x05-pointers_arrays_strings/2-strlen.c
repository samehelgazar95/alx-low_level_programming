#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: array to calc it's length
 * Return: length of the array
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
