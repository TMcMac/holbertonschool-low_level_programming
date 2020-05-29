#include "hash_tables.h"

hash_node_t *make_node(const char *key, const char *value);

/**
 * hash_table_set - a function to take in a hash table,
 * get the hash of a key which is then stored at the
 * position of key mod table size.
 * @ht: the hash table built by main/0-hash_table
 * @key: the key string to be hashed by djb2
 * @value: the value to be stored at the position
 * Return: 1 for success or 0 for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int size = ht->size;
	unsigned long int position = key_index((unsigned char *)key, size);
	hash_node_t *node, *tmp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);

	if (ht->array[position] == NULL)
	{
		node = make_node(key, value);
		ht->array[position] = node;
	}
	else
	{
		if (strcmp((ht->array[position]->key), key) == 0)
		{
			free(ht->array[position]->value);
			ht->array[position]->value = strdup(value);
			return (1);
		}
		for (tmp = ht->array[position]; tmp != NULL; tmp = tmp->next)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
                                tmp->value = strdup(value);
                                return (1);
                        }
		}
		tmp = ht->array[position];
		node = make_node(key, value);
		node->next = tmp;
		ht->array[position] = node;
	}
	return (1);
}

/**
 * make_node - a function to make a new node for our hashtable
 * @key: the key
 * @value: value matched to the key
 * Return: a pointer to our new node
 */

hash_node_t *make_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t) * 1);
	new_node->key = malloc(strlen(key) + 1);
	new_node->value = malloc(strlen(value) + 1);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	return (new_node);
}
