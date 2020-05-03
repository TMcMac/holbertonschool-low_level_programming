#include "lists.h"

/**
 * get_dnodeint_at_index - a function to return the nth
 * node in a doubly linked list.
 * @head: the head node
 * @index: the number of the node requested
 * Return: a pointer to the nth node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *mover;

	if (head == NULL)
		return (NULL);
	mover = head;
	while (count < index && mover != NULL)
	{
		count++;
		mover = mover->next;
	}
	return (mover);
}
