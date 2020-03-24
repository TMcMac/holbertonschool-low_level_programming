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
	listint_t *tmp;
	listint_t *hold;

	if (*head == NULL)
		return (-1);

	tmp = (*head);

	if (index == 0)
	{
		(*head) = tmp->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	hold = tmp->next;
	tmp->next = hold->next;
	free(hold);
	return (1);
}
