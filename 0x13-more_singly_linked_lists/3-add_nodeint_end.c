#include "lists.h"

/**
 * add_nodeint_end -  a function to add a new node at the
 * tail of a singly linked list.
 * @head: a double pointer to the head of our list
 * @n: an integer to be put in newtial->n
 * Return: a pointer to the new struct at the tail of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = (*head);
	listint_t *newtail = malloc(sizeof(listint_t));

	if (newtail == NULL)
		return (NULL);
	newtail->n = n;
	newtail->next = NULL;

	if (*head == NULL)
	{
		(*head) = newtail;
		return (*head);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newtail;
	return (newtail);
}
