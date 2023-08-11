#include <stdio.h>
/*
 * main - entry point
 *
 * description: Print alphabet except q and e.
 *
 * Return: Always (0) Success
*/

int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		if (c[i] != 'e' || c[i] != 'q')
		{
			putchar(c[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
