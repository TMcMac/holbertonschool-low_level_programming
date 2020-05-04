#include "lists.h"

/**
 * print_dlistint - a function to print out the data
 * from a linked list.
 * @h: A pointer to the head of the list
 * Return: a count of the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *mover;
	size_t node_count = 0;

	if (h == NULL)
		return (0);
	mover = h;
	while (mover != NULL)
	{
		printf("%d\n", mover->n);
		node_count++;
		mover = mover->next;
	}
	return (node_count);
}
