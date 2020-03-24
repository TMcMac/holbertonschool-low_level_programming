#include "lists.h"

/**
 * free_listint2 - a function to free up a singly linked
 * list.
 * @head: a pointer to the head of our list
 * Return: void, no return
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = (*head);
		*head = tmp->next;
		free(tmp);
	}
}
