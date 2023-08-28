#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: string to check in
 * @c: char to check for
 *
 * Return: Pointer for the first occurrence in s for c
 * or NULL if not found
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return NULL;
}
