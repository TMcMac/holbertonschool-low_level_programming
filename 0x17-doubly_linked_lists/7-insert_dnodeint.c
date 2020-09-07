#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *list, unsigned int index);

/**
 * insert_dnodeint_at_index - function to insert a new node at a specific index
 * @h: the head of the list
 * @idx: the index to insert the node at
 * @n: an int to put in the new node
 * Return: The address to the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *position_node = get_dnodeint_at_index(*h, idx);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		exit(1);
	else
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
	}

	if (idx == 0)
	{
		new_node->next = (*h);
		(*h) = new_node;
		return (new_node);
	}
	if (position_node == NULL)
		return (NULL);

	new_node->next = position_node;
	new_node->prev = position_node->prev;
	position_node->prev->next = new_node;
	position_node->prev = new_node;

	return (new_node);
}

/**
 * get_dnodeint_at_index - function for finding a node at a certain index
 * @list: the head of the list
 * @index: an index to look for
 * Return: A node or Null if out of bounds
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *list, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *mover;

	mover = list;
	while (count < index && mover != NULL)
	{
		mover = mover->next;
		count++;
	}
	if (count == index)
		return (mover);
	else
		return (NULL);
}
