#include "hash_tables.h"

/**
 * hash_table_print- printing the hash table
 * @ht: the hash table
 * Return: Nothing
*/

void hash_table_print(const hash_table_t *ht)
{
	int flag;
	unsigned long int i;
	hash_node_t *temp;

	if (ht->array == NULL || ht->size == 0 || ht == NULL)
		printf("{}");

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
