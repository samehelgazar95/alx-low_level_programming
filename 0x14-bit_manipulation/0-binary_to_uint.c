#include "main.h"

/**
 * _strlen - Calc the str len
 * @str: the string
 * Return: the length
*/

int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * twoPow - Calc the power val
 * @powVal: the powered to val
 * Return: the powered value
*/

unsigned int twoPow(int powVal)
{
	unsigned int sum = 1;

	if (powVal < 0)
		return (0);

	while (powVal > 0)
	{
		sum *= 2;
		powVal--;
	}

	return (sum);
}

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
