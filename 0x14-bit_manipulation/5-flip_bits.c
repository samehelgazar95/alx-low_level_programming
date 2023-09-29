#include "main.h"

/**
 * flip_bits- returns the number of bits you would need to flip
 * @n: the first number
 * @m: the second number
 * Return: 1 or -1
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result > 0)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
