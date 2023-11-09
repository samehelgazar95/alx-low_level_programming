#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint- printing the elements
 * @h: the head node
 * Return: numbers of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		count++;
		temp = temp->next;
	}

	return (count);
}
