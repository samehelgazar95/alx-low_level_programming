#include "main.h"

/**
 * print_rev -
 * @s: 
 *
*/

void print_rev(char *s)
{
	int len = _strlen(s);

	while (len <= 0)
	{
		len--;
		_putchar(s[i]);
	}
	_putchar('\n');
}
