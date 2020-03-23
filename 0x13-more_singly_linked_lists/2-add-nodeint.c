#include "lists.h"

/**
 * add_nodeint - afunction to add a new head node on
 * a singly linked list.
 * @head: a double pointer to the head of the lst
 * @n: an in that is data in the list
 * Return: a pointer to the new head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead = malloc(sizeof(listint_t));

	if (newhead == NULL)
		return (NULL);

	newhead->n = n;
	newhead->next = *head;
	*head = newhead;

	return (newhead);
}
