#include "lists.h"

/**
 * list_len - a function return the number of elements
 * in a node of a linked list.
 * @h: the pointer to the head of the list
 * Return: number of nodes in the list
 */

size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
