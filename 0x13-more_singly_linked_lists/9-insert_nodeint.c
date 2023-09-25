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
	listint_t *temp, *new_node = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	for (; i < idx; i++, temp = temp->next)
		;

	new_node->next = temp->next;
	temp->next = new_node;

	if (new_node->next == NULL)
	{
		free(new_node);
		return (NULL);
	}
	else
	{
		return (new_node);
	}
}
