#include "lists.h"

/**
 * listint_len - a function to return how many nodes
 * are in a linked list.
 * @h: a pointer to the head of the list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
