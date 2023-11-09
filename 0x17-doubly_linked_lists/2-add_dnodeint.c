#include "lists.h"

/**
 * add_dnodeint- adding node at the beg
 * @head: the head
 * @n: the value of new node
 * Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	temp->prev = NULL;

	if (*head != NULL)
		(*head)->prev = temp;

	*head = temp;

	return (*head);
}
