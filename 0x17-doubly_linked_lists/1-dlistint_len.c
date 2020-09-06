#include "lists.h"

/**
 * dlistint_len - a function to get the length of a list
 * @h: a pointer to the head node
 * Return: A count of the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *mover = h;

	if (h == NULL)
		return (0);
	while (mover != NULL)
	{
		count++;
		mover = mover->next;
	}
	return (count);
}
