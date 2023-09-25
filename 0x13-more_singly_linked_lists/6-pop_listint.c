#include "lists.h"

/**
 * pop_listint -  deletes the head node
 * @head: the linked list
 * Return: the head node, OR 0 if empty
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!*head)
		return (0);

	temp = *head;
	num = temp->n;
	*head = (*head)->next;

	free(temp);

	return (num);
}
