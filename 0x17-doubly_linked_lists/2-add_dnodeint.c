#include "lists.h"

/**
 * add_dnodeint - a function to add a new head node to a list
 * @head: a double pointer to the head of the current lsit
 * @n: an int constant to be put in our new head node
 * Return: a pointer to our new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
/*	dlistint_t *temp = (*head); */
	dlistint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->prev = NULL;
	if ((*head) == NULL)
		newnode->next = NULL;
	else
	{
		newnode->next = (*head);
		(*head)->prev = newnode;
	}
	(*head) = newnode;
	return ((*head));
}
