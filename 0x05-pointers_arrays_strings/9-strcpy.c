#include "main.h"
#include <string.h>

/***/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	src[i] = '\0';

	return (src);
}
