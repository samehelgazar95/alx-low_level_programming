#include "lists.h"

/**
 * list_len- return the number of nodes
 * @h: the head
 * Return: the length
*/

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	return (len);
}
