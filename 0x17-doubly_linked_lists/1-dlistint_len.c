#include "lists.h"

/**
 * dlistint_len - a function to get the length of a list
 * @h: the head node of the lest
 * Return: a count of the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *mover = h->next;
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	node_count++;
	while (mover != NULL)
	{
		node_count++;
		mover = mover->next;
	}
	return (node_count);
}
