#include "lists.h"

/**
 * insert_dnodeint_at_index - a function to place a new node at a
 * specific index
 * @h: a pointer to the head of the dbl link list
 * @idx: the index position where the new node is to be inserted
 * @n: the int to be stored in the new node
 * Return: the address of our new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mover;
	dlistint_t *newnode;
	unsigned int count = 0;

	if ((*h) == NULL)
		return (NULL);
/* If the above is passed, the list is not empty */
	mover = (*h); /* Sets mover to the head node */
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
/* Checks for a malloc fail */
	newnode->n = n; /* sets Newnode n to supplied n  */
	while (count < idx && mover != NULL)
	{
		if (count == (idx - 1))
		{ /* If the next node is where we want to insert */
			newnode->prev = mover;
		}
		count++;
		mover = mover->next;
	}
	mover->prev->next = newnode;
	if (mover == NULL && count != idx)
	{ /* If we get through the list without hitting idx */
		free(newnode->prev);
		free(newnode);
		return (NULL);
	}
	newnode->next = mover;
	if (mover != NULL)
		mover->prev = newnode;

	return (newnode);
}
