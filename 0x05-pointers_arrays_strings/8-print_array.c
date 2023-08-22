#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be print
 * @n: number of elements
 * Return: printed elements
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}
