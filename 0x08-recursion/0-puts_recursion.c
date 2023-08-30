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

	_putchar(*ptr);
	ptr++;
	if (*ptr != '\0')
	{
		_puts_recursion(ptr);
	}

	if (*ptr == '\0')
	{
		_putchar('\n');
	}
}
