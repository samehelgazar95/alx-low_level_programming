#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program prints all possible different combinations of two digits
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int num1 = 0, num2;

	while (num1 < 10)
	{
		num2 = num1 + 1;
		while (num2 < 10)
		{
			putchar(num1 + 48);
			putchar(num2 + 48);
			if (num1 + num2 != 17)
			{
			putchar(',');
			putchar(' ');
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
