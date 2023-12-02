#include "hash_tables.h"

/**
 * key_index- gives the index of the key
 * @key: the key
 * @size: the size of the array
 * Return: index of array to store at
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
