#include <stdio.h>

/**
 * main - entry point
 *
 * description: 
 *
 * Return: Always (0) Success
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
