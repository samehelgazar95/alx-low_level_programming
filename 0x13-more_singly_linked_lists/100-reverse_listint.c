#include "lists.h"

/**
 * reverse_listint- reversing linked list
 * @head: the head
 * Return: pointer to head or NULL
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL;
	listint_t *temp2 = NULL;

	temp1 = *head;
	*head = NULL;
	while (temp1)
	{
		temp2 = temp1->next;
		temp1->next = *head;
		*head = temp1;
		temp1 = temp2;
	}

	return (*head);
}
