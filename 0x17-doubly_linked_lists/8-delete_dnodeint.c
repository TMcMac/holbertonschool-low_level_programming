#include "lists.h"

/**
 * delete_dnodeint_at_index - a function to delete the node at the
 * nth index of a doubly linked list.
 * @head: a double pointer to the head node
 * @index: the nth position to be deleted
 * Return: 1 if success or -1 if failure.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count = 0;

	if ((*head) == NULL)
		return (-1);
	current = (*head);
	if (index == 0)
	{
		(*head) = (*head)->next;
		free(current);
		return (1);
	}
	while (count < index && current != NULL)
	{
		count++;
		current = current->next;
	}
	if (current != NULL)
	{
		current->prev->next = current->next;
		current->next->prev = current->prev;
		free(current);
		return (1);
	}
	return (-1);
}
