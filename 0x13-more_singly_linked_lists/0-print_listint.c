#include "lists.h"

/**
 * print_listint - print integers of nodes
 * @h: the node
 * Return: the length of the list
*/

size_t print_listint(const listint_t *h)
{
	size_t len = 0;
	const listint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		len++;
		temp = temp->next;
	}

	return (len);
}
