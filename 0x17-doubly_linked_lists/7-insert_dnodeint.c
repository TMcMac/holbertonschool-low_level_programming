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
	dlistint_t *tmp;
	unsigned int count = 0;

	if ((*h) == NULL)
		return (NULL);
	mover = (*h);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	while (count < idx && mover != NULL)
	{
		if (count == (idx - 1))
			mover->next = newnode;
		count++;
		newnode->prev = mover;
		mover = mover->next;
	}
	if (mover == NULL)
	{
		free(newnode->prev);
		free(newnode);
		return (NULL);
	}
	newnode->next = mover->next;
	tmp = mover->prev;
	mover = mover->next;
/* This is where my problem is */
	mover->prev = newnode;
	printf("Mover prev set\n");

	tmp->next = newnode;
	return (newnode);
}
