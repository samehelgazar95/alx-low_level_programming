#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: result
*/

void more_numbers(void)
{
	int i, j, num;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			num = j;
			if (j > 9)
			{
				_putchar((num / 10) + 48);
			}
			_putchar((num % 10) + 48);
		}
		_putchar('\n');
	}
}
