#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of the string
g* @str: the string to be printed
 * Return: Half of the string
*/

void puts_half(char *str)
{
	int len = strlen(str), mid;

	if (len % 2 != 0)
	{
		len++;
	}

	mid = len / 2;

	while (str[mid])
	{
		_putchar(str[mid]);
		mid++;
	}
	_putchar('\n');
}
