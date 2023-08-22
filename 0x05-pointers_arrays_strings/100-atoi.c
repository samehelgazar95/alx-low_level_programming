#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: string to convert
 *
 * Return: return signed int
*/

int _atoi(char *s)
{
	int my_int = 0, sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= 48 && *s <= 57)
			my_int = (my_int * 10) + (*s - '0');
		else if (my_int > 0)
			break;

	} while (*s++);

	return (my_int * sign);
}
