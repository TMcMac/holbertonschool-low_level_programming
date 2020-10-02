#include "hash_tables.h"

/**
 * key_index - a function to take in string, hash it with
 * djb2 and then return the position that the key would
 * go into a hash table.
 * @key: a string input
 * @size: the size of the hash table
 * Return: the position in the hashtable
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int new_hash = hash_djb2(key);

	return (new_hash % size);
}
