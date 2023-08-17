#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: number of the times to print
*/

void print_diagonal(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j)
			{
				_putchar(92);
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
