#include "hash_tables.h"

/**
 * hash_table_delete - a function to cycle through a hashtable
 * and free / delete everything
 * @ht: a hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *mover, *tmp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			mover = ht->array[i];
			while (mover != NULL)
			{
				tmp = mover->next;
				free(mover->key);
				free(mover->value);
				free(mover);
				mover = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
