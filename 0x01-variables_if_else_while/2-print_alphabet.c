#include <stdio.h>
/**
 * main - entry point
 *
 * description: Print alphabt
 *
 * Return: Always 0 Success
*/
int main(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	while (i < 26)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
