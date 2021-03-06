#include "lists.h"

/**
 * add_dnodeint_end - a function to add a node to the end of a list
 * @head: a pointer to the head of the list
 * @n: an int to be put in the new node
 * Return: Address to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *mover;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		mover = *head;
		while (mover->next != NULL)
			mover = mover->next;

		mover->next = new_node;
		new_node->prev = mover;
	}
	return (new_node);
}
