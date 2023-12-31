#include "main.h"

/**
 * get_bit- returns the value of a bit at a given index
 * @n: the number
 * @index: the index
 * Return: bit at index or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mod;
	unsigned int i;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	for (i = 0; i <= index; i++)
	{
		mod = n % 2;
		n /= 2;
	}

	return (mod);
}
