#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert a new node at a specific index
 * @h: the head of the list
 * @idx: the index to insert the node at
 * @n: an int to put in the new node
 * Return: The address to the new node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *position_node = get_dnodeint_at_index(*h, idx);


    if (position_node == NULL)
    	return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    new_node->n = n;
    new_node->next = position_node;
    new_node->prev = position_node->prev;
    position_node->prev->next = new_node;
    position_node->prev = new_node;

    return (new_node);
}


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *mover;

    if (head == NULL)
    	return (NULL);
    mover = head;
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
