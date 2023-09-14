#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings.
 * @separator: the separator
 * @n: size of arguments
 * Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	if (!n)
	{
		printf("\n");
		exit(1);
	}

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		printf("%s", str ? str : "(nil)");

		if (i < n - 1)
		{
			printf("%s", separator ? separator : "");
		}
	}
	va_end(list);
	printf("\n");
}
