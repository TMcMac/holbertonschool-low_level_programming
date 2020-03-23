#include "lists.h"

/**
 * print_listint -  a function to print every int in a
 * singly linked list of ints.
 * @h: a pointer to the head of our list
 * Return: the number of nodes in total
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
