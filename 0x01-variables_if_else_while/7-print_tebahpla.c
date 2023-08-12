#include <stdio.h>
/**
 * main - entry point
 *
 * description: print alphabet in rev
 *
 * Return: Always (0) Success
*/

int main(void)
{
	int c = 122;

	while (c <= 97)
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
