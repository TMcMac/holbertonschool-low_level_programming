#include "lists.h"

/**
 * get_nodeint_at_index - a function to return the nth node
 * in a singly linked list.
 * @head: a pointer to the head of the list
 * @index: an int to tell us what node to return.
 * Return: a pointer to the nth node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;

	if (tmp == NULL)
		return (NULL);

	while (tmp != NULL && i < index)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == index)
		return (tmp);
	else
		return (NULL);
}
