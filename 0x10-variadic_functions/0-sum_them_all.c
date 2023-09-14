#include <stdarg.h>

/**
 * sum_them_all - sum 'em all
 * @n: size of nums to sum
 * Return: Sum of all
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (!n)
		return (0);

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		int num = va_arg(list, int);

		sum += num;
	}

	va_end(list);

	return (sum);
}
