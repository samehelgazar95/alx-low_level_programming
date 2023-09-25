#include "lists.h"

/**
 * sum_listint- return the sum of all the data
 * @head: the linked list head
 * Return: the sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
