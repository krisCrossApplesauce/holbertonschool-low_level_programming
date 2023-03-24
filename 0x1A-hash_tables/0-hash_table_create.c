#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size: unsigned long int, size of the array
 *
 * Return: hash_table_t *, pointer to the newly created hash table
 * return NULL if anything goes wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (ht == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;

	for (i = 0; i <= size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
