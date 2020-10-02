#include "hash_tables.h"

/**
 * hash_table_create - A function to create a hashtable
 * @size: the needed size of the hash table
 * Return: A pointer to a hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	/*First we need to create a hashtable according to our struct*/
	hash_table_t *new_table = malloc(sizeof(hash_table_t) * 1);
	/*If it fails to malloc then we exit*/
	if (new_table == NULL)
		return (NULL);
	/*If it is successful first we will add the size from inputs*/
	new_table->size = size;
	/**
	 * Next we are going to malloc an array of the correct
	 * number of pointers for nodes
	 */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		/*If our array malloc failed we need to free new_table*/
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		/*If both mallocs are successful lets fill our array with null*/
		new_table->array[i] = NULL;
	}
	return (new_table);
}
