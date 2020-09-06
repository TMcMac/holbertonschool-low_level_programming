#include "lists.h"

/**
 * print_dlistint - a function to print out the nodes of a dbl linked list
 * @h: a pointer to the head node
 * Return: the count of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    const dlistint_t *mover = h;

    if (h == NULL)
      return (0);

    while (mover != NULL)
    {
      count++;
      printf("%d\n", mover->n);
      mover = mover->next;
    }
    return (count);
}
