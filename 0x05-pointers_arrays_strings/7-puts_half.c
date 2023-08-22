#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of the string
 * str: the string to be printed
 * Return: Half of the string
*/

void puts_half(char *str)
{
	int len = strlen(str);

	if (len % 2 != 0)
	{
		len--;
	}

	int mid = len / 2;

	while (str[mid])
	{
		_putchar('str[mid]');
		mid++;
	}
}
