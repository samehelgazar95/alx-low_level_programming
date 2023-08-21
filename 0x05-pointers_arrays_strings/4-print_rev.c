#include "main.h"

/**
 * print_rev - print string in a reversed
 * @s: string to print
 *
 * Return: reversed string
*/

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len <= 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}
