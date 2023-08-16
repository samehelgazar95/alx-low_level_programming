#include <stdio.h>

/**
 * main - entry point.
 *
 * Description: prints the first 50 Fibonacci numbers
 * Return: 0 (Success)
*/

int main(void)
{
	unsigned long n1 = 0, n2 = 1, n3;
	int i;

	for (i = 0; i < 50; i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		printf("%lu", n3);
		if (i == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
