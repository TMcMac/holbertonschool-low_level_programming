#include "lists.h"

/**
 * add_node_end - a function that adds a node at the end
 * of a linked list.
 * @head: the pointer to the head of the list
 * @str: a string to be copied into our new nodea
 * Return: a pointer to our new ndoe
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = (*head);
	list_t *new_tail = (list_t *)malloc(sizeof(list_t));

	if (new_tail == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	new_tail->str = strdup(str);
	new_tail->len = _strlen(str);
	new_tail->next = NULL;

	if (*head == NULL)
	{
		(*head) = new_tail;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_tail;
	return (new_tail);
}

/**
 * _strlen - a function to return the length of a string
 * @s: a char pointer passed from main
 * Return: returns an int
 */

int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
