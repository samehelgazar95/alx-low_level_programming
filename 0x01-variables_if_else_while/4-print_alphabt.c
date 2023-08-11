#include <stdio.h>
/*
 * main - entry point
 *
 * descripton: Print alphabet except q and e
 *
 * Return: Always (0) Success
*/

int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	
	while (i < 26)
	{
		if(c[i] == 'q' || c[i] == [e])
			continue;

		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
