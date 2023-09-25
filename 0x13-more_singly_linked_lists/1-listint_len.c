#include "lists.h"

/**
 * listint_len - print integers of nodes
 * @h: the node
 * Return: the length of the list
*/

size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}
