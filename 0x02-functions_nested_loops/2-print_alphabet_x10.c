#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets 10 times
*/

void print_alphabet_x10(void)
{
	int line = 0;

	while (line <= 10)
	{
		int c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		line++;
	}
}
