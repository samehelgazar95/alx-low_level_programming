#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Fizz Buzz Program
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	putchar('\n');
	return (0);
}
