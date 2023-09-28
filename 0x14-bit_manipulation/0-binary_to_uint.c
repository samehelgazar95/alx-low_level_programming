#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary string number
 * Return: the decimal number
*/

unsigned int binary_to_uint(const char *b)
{
	int length = _strlen(b), i, j;
	unsigned int current, total = 0;

	if (!b)
		return (0);

	for (i = length - 1, j = 0; i >= 0; i--, j++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			current = twoPow(j);
			total += current;
		}
	}

	return (total);
}
