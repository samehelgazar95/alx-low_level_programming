#include "main.h"

/**
 * print_times_table - prints the 9 times table, starting with 0.
 * @n: Param to use.
*/


void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int n1 = 0, n2 = 1, num, num2;

		for (n1 = 0; n1 <= n; n1++)
		{
			_putchar(48);
			for (n2 = 1; n2 <= n; n2++)
			{
				_putchar(',');
				_putchar(' ');
				num = n1 * n2;

				if (num <= 9 && num >= 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((num % 10) + '0');
				}
				else if (num >= 10 && num <= 99)
				{
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				}
				else
				{
					num2 = num / 10;
					_putchar((num2 / 10) + '0');
					_putchar((num2 % 10) + '0');
					_putchar((num % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
