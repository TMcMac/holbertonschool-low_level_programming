#include "lists.h"

/**
 * sum_dlistint -a function to get the sum of all ints in a dbl linked list
 * @head: the head of the list
 * Return: and int sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *mover = head;

<<<<<<< HEAD
    if (head == NULL)
      return (0);

    while (mover != NULL)
    {
        sum += mover->n;
        mover = mover->next;
    }
    return (sum);
=======
	if (head == NULL)
		return 0;

	while (mover != NULL)
	{
		sum += mover->n;
		mover = mover->next;
	}
	return (sum);
>>>>>>> 9e5f90c5b5a38483d8a906bf815019738b70c0c9
}
