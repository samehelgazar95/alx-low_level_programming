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
	if (*s == '\0')
		return (NULL);

	char *ptr = NULL;

	while (*s)
	{
		if (*s == c)
		{
			ptr = &*s;
			break;
		}
		s++;
	}

	return (ptr);
}
