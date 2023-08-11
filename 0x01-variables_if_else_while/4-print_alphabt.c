#include <stdio.h>
/*
 * main - entry point.
 *
 * Description: C program that print alphabet except q and e.
 *
 * Return: Always (0) Success
*/

int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 26)
	{
		if (c[i] == 'e' || c[i] == 'q')
		{
			break;
		}
		else
		{
			putchar(c[i]);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
