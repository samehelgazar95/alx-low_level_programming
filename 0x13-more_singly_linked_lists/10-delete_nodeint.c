#include "lists.h"

/**
 * delete_nodeint_at_index- deletes the node at index
 * @head: the linked list head
 * @index: the index to delete at
 * Return: 1 for succeed, -1 for fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	while (temp)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			free(temp);
			return (1);
		}

		if (i == index)
		{
			prev->next = temp->next;
			free(temp);
			return (1);
		}

		prev = temp;
		temp = temp->next;
		i++;
	}

	return (-1);
}
