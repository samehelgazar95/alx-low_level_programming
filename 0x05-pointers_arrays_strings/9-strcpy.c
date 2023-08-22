#include "main.h"
#include <string.h>

/**
 * *_strcpy - copy string to another
 * @*dest: first array 
 * @*src: second array
 *
 * Return: string
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (src);
}
