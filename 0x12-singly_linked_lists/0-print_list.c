#include "lists.h"

/**
 * print_list - a function to print out a singly linked list
 * as well as the number of nodes in said list.
 * @h: the pointer to the head of the list
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		if ((h->len) == 0)
			printf("[0] ");
		else
			printf("[%d] ", h->len);
		if ((h->str) == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
