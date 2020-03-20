#include "lists.h"

/**
 * free_list - a function that frees a linked list.
 * @head: the pointer to the head of the list
 * Return: void, no return
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		temp = head;
		free(temp->str);
		free(temp);
		head = head->next;
	}
}
