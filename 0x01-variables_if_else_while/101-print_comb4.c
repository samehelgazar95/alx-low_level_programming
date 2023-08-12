#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible different combinations of three digits
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int num1 = 0, num2, num3;

	while (num1 < 10)
	{
		num2 = num1 + 1;
		while (num2 < 10)
		{
			num3 = num2 + 1;
			while (num3 < 10)
			{
				putchar(num1 + 48);
				putchar(num2 + 48);
				putchar(num3 + 48);
				if (num1 + num2 + num3 != 24)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}

			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
