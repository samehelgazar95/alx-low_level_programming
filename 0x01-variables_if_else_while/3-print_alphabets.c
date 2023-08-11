#include <stdio.h>
/**
 * main - entry point
 *
 * description: print alphapet upped and lower case
 *
 * Return: Always (0) Success
*/

int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	char C[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i = 0;
	
	while (i < 26)
	{
		putchar(c[i]);
		i++;
	}
	i = 0;

	while (i < 26)
	{
		putchar(C[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
