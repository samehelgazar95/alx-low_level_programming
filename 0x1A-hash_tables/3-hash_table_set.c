#include "hash_tables.h"

/**
 * hash_node_create- Creating new node
 * @key: the key
 * @val: the value
 * Return: new node for success, Null for fail
*/
hash_node_t *hash_node_create(const char *key, const char *val)
{
	hash_node_t *new = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (NULL);
	}

	new->value = strdup(val);
	if (new->value == NULL)
	{
		free(new);
		free(new->key);
		return (NULL);
	}

	return (new);
}

/**
 * hash_table_set- Adding elements to hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: 1 for success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *new_val;
	hash_node_t *current, *new_node;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			new_val = strdup(value);
			free(current->value);
			current->value = strdup(new_val);
			return (1);
		}

		current = current->next;
	}
	new_node = hash_node_create(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
