#include "lists.h"

/**
 * delete_nodeint_at_index - a function to delete a node
 * at the nth node position in a singly linked list.
 * @head: a double pointer to the head of the linked list
 * @index: the position where we want to delete a node
 * Return: 0 is success -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = (*head);
	listint_t *hold = NULL;

	if ((*head) == NULL)
		return (0);

	if (index < 1)
	{
		(*head) = (*head)->next;
		free(tmp);
		return (0);
	}

	while (tmp != NULL && i < index)
	{
		hold = tmp;
		tmp = tmp->next;
		i++;
	}
	if (i == index)
	{
		hold->next = tmp->next;
		free(tmp);
		return (0);
	}
	return (-1);
}
