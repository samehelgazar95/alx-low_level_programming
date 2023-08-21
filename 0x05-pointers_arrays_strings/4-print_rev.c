#include "main.h"
#include <string.h>

/**
 * print_rev - print string in a reversed
 * @s: string to print
 *
 * Return: reversed string
*/

void print_rev(char *s)
{
	int len = strlen(s) - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
