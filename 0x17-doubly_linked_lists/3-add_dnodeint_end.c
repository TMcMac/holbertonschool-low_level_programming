#include "lists.h"

/**
 * add_dnodeint_end - a function to add a new node on
 * the end of a doubly linked list.
 * @head: a double pointer to the head of the list
 * @n: an int to insert into the new node
 * Return: a pointer to the new node once it is in the
 * list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *mover = (*head);
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if ((*head) == NULL)
	{
		newnode->prev = NULL;
		(*head) = newnode;
		return (newnode);
	}
	while (mover->next != NULL)
		mover = mover->next;
	mover->next = newnode;
	newnode->prev = mover;
	return (newnode);
}
