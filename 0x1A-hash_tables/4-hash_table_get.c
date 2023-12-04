#include "hash_tables.h"

/**
 * hash_table_get- retrieves the value of the hash_node
 * @ht: the hash table
 * @key: the key of the hash_node
 * Return: the value or NUll
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *head = ht->array[index], *temp;

	if (head == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0)
		return (NULL);

	temp = head;
	while (strcmp(temp->key, key) != 0)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	return (temp->value);
}
