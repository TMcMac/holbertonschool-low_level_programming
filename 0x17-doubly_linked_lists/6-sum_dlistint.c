#include "lists.h"

/**
 * sum_dlistint - a function to sum up a dbl linked list
 * @head: the head node
 * Return: a sum of the ints in the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *mover;

	if (head == NULL)
		return (0);
	mover = head;
	while (mover != NULL)
	{
		sum += mover->n;
		mover = mover->next;
	}
	return (sum);
}
