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
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];
	hash_node_t *new_node = hash_node_create(key, value);

	if (new_node == NULL)
		return (0);

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
			key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	if (!current)
		ht->array[index] = new_node;
	else
	{
		if (strcmp(current->key, key) == 0)
		{
			printf("Duplicated!!!!");
			free(current->value);
			current->value = strdup(value);
		}
		else
		{
			new_node->next = current;
			current = new_node;
		}
	}

	return (1);
}
