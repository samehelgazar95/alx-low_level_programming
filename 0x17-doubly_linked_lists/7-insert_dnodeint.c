#include "lists.h"

/**
 * insert_dnodeint_at_index- insert new node at given pos
 * @h: the head
 * @idx: the index
 * @n: the val
 * Return: the address of the new node, or NULL if it failed
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		add_dnodeint(h, n);

	while (i < idx && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
