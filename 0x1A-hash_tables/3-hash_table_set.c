#include "hash_tables.h"

/**
 * hash_table_set- Adding elements to hash table
 * @ht: the hash table
 * @key: the key
 * @value the value
 * Return: 1 for success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index = key_index(key, ht->size);
	

}
