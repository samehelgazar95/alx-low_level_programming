#include "hash_tables.h"

/**
 * hash_table_create- Creating the hash table struct and array
 * @size: size of the array
 * Return: Ptr to hash table or null
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = (hash_table_t *)(malloc(sizeof(hash_table_t)));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t **)(calloc(table->size, sizeof(hash_node_t *)));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
