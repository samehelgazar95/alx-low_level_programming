#include "lists.h"

/**
 * delete_dnodeint_at_index- delete node at index
 * @head: the head
 * @index: the index
 * Return: 1 for succeeded, -1 for failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	while (index != 0 && temp)
	{
		if (temp == NULL)
			return (-1);

		temp = temp->next;
		index--;
	}

	if (temp == *head)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
