#include "main.h"

/**
 * _strpbrk- searches a string for any of a set of bytes._strpbrk
 * @s: the string param
 * @accept: the key pararm
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				ptr = s[i];
				return (ptr);
			}
		}
	}
	return (ptr);
}
