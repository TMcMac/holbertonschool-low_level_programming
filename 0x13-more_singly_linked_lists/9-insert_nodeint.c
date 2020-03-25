#include "lists.h"

/**
 * insert_nodeint_at_index - a function to insert a new node at
 * the nth node position.
 * @head: a pointer to the head of the linked list
 * @idx: the position where we want to insert a new node
 * @n: an int to be placed in our new node
 * Return: a pointer to our new node or NULL if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *tmp;
	listint_t *newnode;

	if (head == NULL || *head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = (*head);
		(*head) = newnode;
		return (newnode);
	}
	tmp = (*head);
	while (i < idx)
	{
		if (tmp == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
		i++;
	}

	newnode->next = tmp->next;
	tmp->next = newnode;
	return (newnode);
}
