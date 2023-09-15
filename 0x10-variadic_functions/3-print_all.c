#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * f_char - formats char
 * @separator: the string separator
 * @args: argument pointer
*/

void f_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * f_int - formats int
 * @separator: the string separator
 * @args: argument pointer
*/

void f_int(char *separator, va_list args)
{
	printf("%s%d", separator, va_arg(args, int));
}

/**
 * f_float - formats double
 * @separator: the string separator
 * @args: argument pointer
*/

void f_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * f_string - formats string
 * @separator: the string separator
 * @args: argument pointer
*/

void f_string(char *separator, va_list args)
{
	char *str = va_arg(args, char *);

	if ((int)(!str) == 1)
		str = "(nil)";
	printf("%s%s", separator, str);
}

/**
 * print_all - prints anything
 * @format: for to use for printing
 * Return: Nothing
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list args;
	printType_t types[] = {
		{"c", f_char},
		{"i", f_int},
		{"f", f_float},
		{"s", f_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (types[j].type)
		{
			if (format[i] == types[j].type[0])
			{
				types[j].f(separator, args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);

	printf("\n");
}
