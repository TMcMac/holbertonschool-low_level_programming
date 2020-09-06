#include "lists.h"

/**
 * add_dnodeint - a function to add a node at the head of a linked list
 * @head: a double pointer to the head of the list
 * @n: an int to be put in the new node
 * Return: the address to the new head od the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
<<<<<<< HEAD
    dlistint_t *mover;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    new_node->n = n;
    new_node->prev = NULL;
=======
	dlistint_t *mover;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	
	new_node->n = n;
	new_node->prev = NULL;
>>>>>>> 9e5f90c5b5a38483d8a906bf815019738b70c0c9

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	mover = *head;
	new_node->next = mover;
	mover->prev = new_node;
	*head = new_node;
	return (new_node);
}
