#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: the value associated with the element
 * if the key couldn't be found, return NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i, x = 0, sl = 0;
	unsigned long int idx;
	hash_node_t *node;

	if (!ht || !key)
	{ return (NULL); }

	idx = key_index((const unsigned char *) key, ht->size);
	node = ht->array[idx];

	while (key[sl])
	{ sl++; }

	while (x == 0)
	{
		for (i = 0; i <= sl && i == x; i++)
		{
			if (node->key[i] == key[i])
			{ x++; }
			else
			{ x = 0; }
		}

		if (x == 0)
		{
			if (node->next != NULL)
			{ node = node->next; }
			else
			{ return (NULL); }
		}
	}

	return (node->value);
}
