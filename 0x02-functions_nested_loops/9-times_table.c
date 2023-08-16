#include "main.h"

void times_table(void)
{
	for (int n1 = 0; n1 < 10; n1++)
	{
		_putchar(48);
		for (int n2 = 1; n2 <= 9; n2++)
		{
			_putchar(',');
			_putchar(' ');

			int num = n1 * n2;

			if (num <= 9)
			{
				_putchar((num % 10) + '0');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
	}
}