#include "lists.h"

/**
 * sum_listint - a function to sum ints in a singly
 * linked list.
 * @head: a pointer to our head node
 * Return: a sum of all ints in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
