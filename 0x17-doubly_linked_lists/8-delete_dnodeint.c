#include "lists.h"

/**
 * delete_dnodeint_at_index- delete node at index
 * @head: the head
 * @index: the index
 * Return: 1 for succeeded, -1 for failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
        dlistint_t *temp = *head;
        unsigned int i = 0;

        while (i <= index && temp != NULL)
        {
                temp = temp->next;
                i++;
        }

        if (i == index)
        {
                temp->next->prev = temp->prev;
                temp->prev->next = temp->next;
		free(temp);
                return (1);
        }
        else
                return (-1);

}
