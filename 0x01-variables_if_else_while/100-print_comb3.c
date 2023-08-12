#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints all possible different combinations of two digits
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char q[] = "0123456789";	
	for (int i = 0; i < strlen(q); i++)
	{
		for (int j = i + 1; j < strlen(q); j++)
		{
			putchar(q[i]);
			putchar(q[j]);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
