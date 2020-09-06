#include "lists.h"

/**
 * add_dnodeint_end - a function to add a node to the end of a list
 * @head: a pointer to the head of the list
 * @n: an int to be put in the new node
 * Return: Address to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
<<<<<<< HEAD
	dlistint_t *mover;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	
	new_node->n = n;
	new_node->next = NULL;
=======
    dlistint_t *mover;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        new_node->prev = NULL;
        return (new_node);
    }
    mover = *head;
    while (mover->next != NULL)
        mover = mover->next;
>>>>>>> d29e33b56f7cbe6b590a9a8e327c6aa6187d2eaa

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		return (new_node);
	}
	mover = *head;
	while (mover->next != NULL)
		mover = mover->next;

	mover->next = new_node;
	new_node->prev = mover;
	return (new_node);
}
