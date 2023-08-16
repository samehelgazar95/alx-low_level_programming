#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int fib(int n)
	{
		if (n == 0)
		{
			return (1);
		}
		else if (n == 1)
		{
			return (2);
		}
		else
		{
			return (fib(n - 1) + fib(n - 2));
		}
	}

	int i;

	for (i = 0; i < 50; i++)
	{
		printf("%d, \n", fib(i));
	}

	return (0);
}
