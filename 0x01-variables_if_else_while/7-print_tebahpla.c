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
	char c = 122;

	while (c <= 97)
	{
		putchat(c);
		c--;
	}

	putchar('\n');
	return (0);
}
