#include "lists.h"

/**
 * get_dnodeint_at_index - function for finding a node at a certain index
 * @head: the head of the list
 * @index: an index to look for
 * Return: A node or Null if out of bounds
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *mover;

    if (head == NULL)
<<<<<<< HEAD
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
=======
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
>>>>>>> 9e5f90c5b5a38483d8a906bf815019738b70c0c9
}
