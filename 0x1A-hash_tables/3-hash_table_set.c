#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key, cannot be an empty string
 * @value: the value associated with the key
 * ^must be duplicated, can be an empty string
 *
 * Return: 1 if success, otherwise, 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new = (hash_node_t *) malloc(sizeof(hash_node_t));

	if (!ht || !key || !new)
	{
		free(new);
		return (0);
	}

	idx = key_index((const unsigned char *) key, ht->size);

	new->key = strdup(key);
	new->value = strdup(value);

	if (ht->array[idx] == NULL)
	{
		new->next = NULL;
		ht->array[idx] = new;
	}
	else
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}

	return (1);
}
