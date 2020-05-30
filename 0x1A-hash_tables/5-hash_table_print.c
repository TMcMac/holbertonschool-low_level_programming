#include "hash_tables.h"

/**
 * hash_table_print - a function to cycle through a hashtable
 * and print all valid key:value pairs
 * @ht: a hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, punct = 0;
	hash_node_t *mover;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (punct)
				printf(", ");
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			punct = 1;
			if (ht->array[i]->next != NULL)
			{
				mover = ht->array[i]->next;
				while (mover != NULL)
				{
					printf("'%s': '%s'", mover->key, mover->value);
					printf(", ");
					mover = mover->next;
				}
			}
		}
	}
	printf("}\n");
}
