#include <stdio.h>
/**
 * main - entry point
 *
 * description: print digit numbers 0..1
 *
 * Return: Always (0) Success
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
