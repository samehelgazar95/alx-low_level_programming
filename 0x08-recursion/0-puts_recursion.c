#include "main.h"

/**
 * _puts_recursion- function that prints a string, followed by a new line.
 * @s: string to put
 *
 * Return: Nothing
*/

void _puts_recursion(char *s)
{
	char *ptr = s;

	if (*ptr != '\0')
	{
		_putchar(*ptr);
		ptr++;
		_puts_recursion(ptr);
	}
	else
	{
		_putchar('\n');
	}
}
