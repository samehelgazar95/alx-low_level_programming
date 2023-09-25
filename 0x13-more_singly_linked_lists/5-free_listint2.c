#include "lists.h"

/**
 * free_listint2 - set the bird free and the box too
 * @head: the bird's head
 * Return: Nothing
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}

	*head = NULL;
}
