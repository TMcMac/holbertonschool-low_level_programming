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

    if (head == NULL)
        return 0;

    while (mover != NULL)
    {
        sum += mover->n;
        mover = mover->next;
    }
    return sum;
}
