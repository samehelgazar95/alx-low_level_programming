#include "lists.h"

/**
 * dlistint_len- return the length
 * @h: the head
 * Return: the length
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);

}
