#include <stdio.h>

/**
 * main - entry point.
 * Return: 0 (Success).
*/

int main(void)
{
	int three = 0, five = 0, sum, i;

	for (i = 0; i < 1024; i += 3)
	{
		three += i;
	}

	for (i = 0; i < 1024; i += 5)
	{
		five += i;
	}

	sum = three + five;
	printf("%d\n", sum);

	return (0);
}
