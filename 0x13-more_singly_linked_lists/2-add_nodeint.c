#include "lists.h"

/**
 * add_nodeint - print integers of nodes
 * @head: the node node
 * @n: value of new node
 * Return: the addr of new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
