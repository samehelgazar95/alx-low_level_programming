#include "main.h"

/**
 * print_most_numbers -  prints most numbers, from 0 to 9
 *
 * Return: Most Numbers
*/

void print_most_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		if (c == 50 || c == 52)
		{
			c++;
		}
		else
		{
			_putchar(c++);
		}
	}
	_putchar('\n');
}
