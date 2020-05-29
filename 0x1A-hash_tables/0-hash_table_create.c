#include "hash_tables.h"

/**
 * hash_table_create - a function to create a hash table
 * of pointers to singly linked lists
 * @size: the number of nodes in our table
 * Return: a pointer to our hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	/* first creat a new hash table */
	hash_table_t *new_table = malloc(sizeof(hash_table_t) * 1);

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	/* Now fill the array with pointers that can become nodes */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		/* If it fails we need to free our hashtable */
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		/* If we have be successful we'll set all array pointers to NULL */
		new_table->array[i] = NULL;
	}
	return (new_table);
}
