#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table to be printed
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int x = 0;
	hash_node_t *node;

	if (!ht)
	{ return; }

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (x != 0)
			{ printf(", "); }

			x = 1;

			node = ht->array[i];

			printf("'%s': '%s'", node->key, node->value);

			while (node->next != NULL)
			{
				node = node->next;
				printf(", '%s': '%s'", node->key, node->value);
			}
		}
	}

	printf("}\n");
}
