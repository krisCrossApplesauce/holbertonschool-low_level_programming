#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: the hash table to be deleted
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (!ht)
	{ return; }

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			node = ht->array[i];
			ht->array[i] = ht->array[i]->next;

			free(node->key);
			free(node->value);
			free(node);
		}

		free(ht->array[i]);
	}

	ht->size = 0;
	free(ht->array);
	free(ht);
}
