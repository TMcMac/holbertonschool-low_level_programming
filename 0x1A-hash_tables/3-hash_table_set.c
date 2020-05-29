#include "hash_tables.h"

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
		node = malloc(sizeof(hash_node_t) * 1);
		node->key = malloc(strlen(key) + 1);
		node->value = malloc(strlen(value) + 1);
		strcpy(node->key, key);
		strcpy(node->value, value);
		node->next = NULL;
		ht->array[position] = node;
	}
	else if (strcmp((ht->array[position]->key), key) == 0)
		ht->array[position]->value = (char *)value;
	else
	{
		tmp = ht->array[position];
		node = malloc(sizeof(hash_node_t) * 1);
		node->key = malloc(strlen(key) + 1);
		node->value = malloc(strlen(value) + 1);
		strcpy(node->key, key);
		strcpy(node->value, value);
		node->next = tmp;
		ht->array[position] = node;
	}

	return (1);
}
