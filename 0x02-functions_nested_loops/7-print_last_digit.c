#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @r: param to check for
 *
 * Return: @r % 10
*/

int print_last_digit(int r)
{
	r = _abs(r);

	_putchar('0' + r % 10);
	return (r % 10);
}
