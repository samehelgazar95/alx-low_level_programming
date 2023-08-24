#include "main.h"

/**
 * *string_toupper - lower to upper
 * @str: string to convert
 *
 * Return: string of the converted
*/

char *string_toupper(char *str)
{
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
		}
		str++;
	}

	return (str);
}
