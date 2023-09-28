#include "main.h"

/**
 * set_bit- sets the value of a bit to 1 at a given index
 * @n: the number
 * @index: the index
 * Return: 1 succes or -1 if failed
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	*n = *n | (1UL << index);

	return (1);
}
