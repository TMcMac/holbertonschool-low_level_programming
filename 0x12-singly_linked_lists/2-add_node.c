#include "lists.h"

/**
 * add_node - a function that adds a node at the head
 * of a linked list.
 * @head: the pointer to the head of the list
 * @str: a string to be copied into our new nodea
 * Return: a pointer to our new ndoe
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = (list_t *)malloc(sizeof(list_t));

	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = _strlen(str);
	new_head->next = *head;
	*head = new_head;

	return (new_head);
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
