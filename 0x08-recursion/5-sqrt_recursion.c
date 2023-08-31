#include "main.h"

/**
 * sqrt_helper- function that help with recursion
 * @num: squared number
 * @val: checking value
 * Return: square root number or -1
*/

int sqrt_helper(int num, int val)
{
	if (val * val == num)
		return (val);
	else if (val * val < num)
		return (sqrt_helper(num, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion- returns the natural square root of a number.
 * @n: squared number
 * Return: Square root number or 0 or 1 or -1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);
	return (sqrt_helper(n, 1));
}
