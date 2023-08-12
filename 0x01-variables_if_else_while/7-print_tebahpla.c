#include <stdio.h>
/**
 * main - entry point
 *
 * description: print Hexa Numbers
 *
 * Return: Always (0) Success
*/

int main(void)
{
	int i = 48;
	while (i < 102)
	{
		putchar(i);
		if(i == 57)
		{
			i = 96;
		}
		
		i++;
	}
	return (0);
}
