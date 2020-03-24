#include "lists.h"

/**
 * pop_listint - a function to reassign the head pointer to node1
 * and then kill the original head of a singly linked list.
 * @head: a double pointer to the head of a list
 * Return: return the int from the original head
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp = (*head);
	int i = tmp->n;

	if (tmp == NULL)
		return (0);

	(*head) = tmp->next;
	free(tmp);

	return (i);
}
