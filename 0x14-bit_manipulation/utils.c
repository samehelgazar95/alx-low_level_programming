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
