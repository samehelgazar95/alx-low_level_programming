#include "lists.h"

/**
 * print_listint - print integers of nodes
 * @h: the node
 * Return: the length of the list
*/

size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		len++;
		ptr = ptr->next;
	}

	return (len);
}
