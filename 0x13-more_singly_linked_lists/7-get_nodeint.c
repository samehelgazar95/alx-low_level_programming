#include "lists.h"

/**
 * get_nodeint_at_index- returns the nth node of a listint_t
 * @head: the list head
 * @index: the index
 * Return: the node or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}

	if (!temp)
	{
		return (NULL);
	}
	else
	{
		return (temp);
	}
}
