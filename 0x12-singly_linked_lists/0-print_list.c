#include "lists.h"

/**
 * print_list- printing signle linked list
 * @h: the head
 * Return: the length
*/

size_t print_list(const list_t *h)
{
	size_t len = 0;
	const listint_t *temp = h;
	list_t *nonConstTemp = (list_t *)temp;

	while (temp != NULL)
	{
		len++;

		if (!temp->str)
		{
			nonConstTemp->len = 0;
			nonConstTemp->str = strdup("(nil)");
		}

		printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}

	return (len);
}
