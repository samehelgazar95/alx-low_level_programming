#include "hash_tables.h"

/**
 * hash_table_delete- deleting the table
 * @ht: the hash table
 * Return: Nothing
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
