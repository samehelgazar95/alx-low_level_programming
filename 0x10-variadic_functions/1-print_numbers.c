#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_numbers -  prints numbers, followed by a new line.
 * @separator: separator between args
 * @n: size of the args
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
		exit(1);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		int arg = va_arg(list, int);

		printf("%d", arg);

		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
