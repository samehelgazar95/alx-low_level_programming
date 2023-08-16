#include "main.h"

/**
 * positive_or_negative - Prints out postivie, negative or zero
 *
 * Description: C program to check if a number is positive, negative or zero.
 *
 * Return: Always (0) Success
*/

int positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
