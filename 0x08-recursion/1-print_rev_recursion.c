#include "main.h"

/**
 * _print_rev_recursion- prints a string in reverse.
 * @s: the string
 * Return: Nothing
*/

void _print_rev_recursion(char *s)
{
	while (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	_putchar(*s);
}
