#include "lists.h"

/**
 * free_list- free the linked list
 * @head: the heeader
 * Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
