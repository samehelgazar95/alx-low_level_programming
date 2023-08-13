#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints all possible combinations of two two-digit numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n1 = 0, n2;

	while (n1 <= 99)
	{
		n2 = n1;
		while (n2 <= 99)
		{
			if (n1 != n2)
			{
				putchar(n1 / 10 + 48);
				putchar(n1 % 10 + 48);
				putchar(' ');
				putchar(n2 / 10 + 48);
				putchar(n2 % 10 + 48);
				if (n1 != 98 && n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	return (0);
}
