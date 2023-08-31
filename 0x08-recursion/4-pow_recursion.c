#include "main.h"

/**
 * _pow_recursion- calc the value of x raised to the power of y
 * @x: the main number
 * @y: number that powered to
 *
 * Return: result for the power or -1 or 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (_pow_recursion(x, y - 1) * x);
}
