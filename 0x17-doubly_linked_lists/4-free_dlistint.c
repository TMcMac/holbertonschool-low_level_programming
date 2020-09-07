#include "lists.h"

/**
 * free_dlistint - A function to free a linked list
 * @head: a pointer to the head of the list
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *mover;

	if (head == NULL || (head->next == NULL && head->prev == NULL))
	{
		free(head);
	}
	else
	{
		mover = head;
		while (mover->next != NULL)
		{
			mover = mover->next;
			free(mover->prev);
		}
		free(mover);
	}
}
