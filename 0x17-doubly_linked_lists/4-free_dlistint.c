#include "lists.h"

/**
 * free_dlistint- free the linked list
 * @head: the head
 * Return: Nothing
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
