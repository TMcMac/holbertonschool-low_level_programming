#include "lists.h"

/**
 * free_dlistint - a function to free a dbl linked list
 * @head: a pointer to the head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
	{
		free(head);
		exit(1);
	}
	current = head;
	while (current != NULL)
	{
		head = head->next;
		free(current);
		current = head
	}
}
