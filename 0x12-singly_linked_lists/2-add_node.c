#include "lists.h"

/**
 * add_node - adding node at the begining
 * @head: the head node
 * @str: the string
 * Return: return the head with new position
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	temp->str = strdup(str);
	temp->len = strlen(str);

	temp->next = *head;

	*head = temp;
	return (temp);
}
