#include "lists.h"

/**
 * free_listint - set the bird free
 * @head: the head of the bird
 * Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
