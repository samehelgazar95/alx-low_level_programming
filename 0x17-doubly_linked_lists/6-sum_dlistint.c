#include "lists.h"

/**
 * sum_dlistint- return the sum
 * @head: the head
 * Return: the sum or 0
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
