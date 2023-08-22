#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 *
 * Return: Reversed string
*/

void rev_string(char *s)
{
	char temp;
	int len = strlen(s) - 1, i = 0;
	
	while (len > i)
	{
		temp = s[len];
		s[len] = s[i];
		s[i] = s[len];
		len--;
		i++;
	}
}
