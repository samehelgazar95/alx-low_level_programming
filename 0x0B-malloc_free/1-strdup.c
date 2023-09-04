#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup- duplicate string
 * @str: str to copy
 * Return: str or null
*/

char *_strdup(char *str)
{
	if (*str == NULL)
		return (NULL);
	char *dup;
	int size;

	for (size = 1; str[size] != '\0'; size++)
	{}

	dup = (char *)malloc(sizeof(char) * size);
	if (dup == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{
		dup[size] = str[size];
	}

	return (dup);
}
