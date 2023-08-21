#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string to put
 *
 * Return: string printed
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		_putchar('\n');
		i++;
	}
}
