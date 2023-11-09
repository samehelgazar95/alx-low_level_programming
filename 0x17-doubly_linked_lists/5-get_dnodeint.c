#include "lists.h"

/**
 * get_dnodeint_at_index- get the node
 * @head: the head
 * @index: the index
 * Return: the nth node of a dlistint_t linked list
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	while (i < index && temp != NULL)
	{
		temp = temp->next;
		i++;
	}

	return (temp);
}
