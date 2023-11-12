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

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		free(new_node);
		return (add_dnodeint(h, n));
	}

	new_node->n = n;

	while (idx != 1 && temp)
	{
		temp = temp->next;
		idx--;
	}

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}

	if (temp->next == NULL)
	{
		free(temp);
		return (add_dnodeint_end(h, n));
	}

	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
