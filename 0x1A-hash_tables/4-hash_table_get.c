#include "hash_tables.h"

/**
 * hash_table_get - a function to return the value at a given
 * position based on the hash value of a key.
 * @ht: a hash table
 * @key: a key value to be hashed and searched for
 * Return: the associated value if found, NULL if not found
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int position;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	position = key_index((unsigned char *)key, ht->size);
	if (ht->array[position] == NULL)
		return (NULL);
	if (strcmp(ht->array[position]->key, key) == 0)
		return (ht->array[position]->value);
	if (ht->array[position]->next != NULL)
		for (tmp = ht->array[position]->next; tmp != NULL; tmp = tmp->next)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
		}
	return (NULL);
}
