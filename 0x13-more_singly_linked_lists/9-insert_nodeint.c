#include "lists.h"

/**
 * insert_nodeint_at_index- inserts a new node at a given position
 * @head: the linkedlist head
 * @idx: the index to add at
 * @n: the value of the new node
 * Return: the new node or 0
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	temp = *head;

	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;

	if (!new_node)
		return (NULL);
	else
		return (new_node);
}
