#include "main.h"

/**
 * print_sign - prints the sign of a number.
 *
 * @n: Params to check for.
 *
 * Return: (1) if Even n, (0) if 0 n, (-1) if Odd
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
