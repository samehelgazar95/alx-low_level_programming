#include "main.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: numbers from 0 - 9
*/

void print_numbers(void)
{
	int c = 48;

	while (c <= 57)
	{
		_putchar(c++);
	}
	_putchar('\n');
}
