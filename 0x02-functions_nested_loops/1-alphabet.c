#include "main.h"

/**
 * print_alphabet - util to print alphabets in lower case
 *
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
