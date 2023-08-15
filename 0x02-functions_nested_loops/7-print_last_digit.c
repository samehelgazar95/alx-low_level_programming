#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @r: param to check for
 *
 * Return: last digit
*/

int print_last_digit(int r)
{
	int digit;

	if (r < 0)
	{
		digit = (r % 10) * -1;
	}
	else
	{
		digit = r;
	}
	_putchar(digit + '0');
	return (digit);
}
