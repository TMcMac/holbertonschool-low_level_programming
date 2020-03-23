#include "lists.h"

/**
 * free_listint - a function to free up a singly linked
 * list.
 * @head: a pointer to the head of our list
 * Return: void, no return
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	if (tmp == NULL)
	{
		free(head);
		return;
	}

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
