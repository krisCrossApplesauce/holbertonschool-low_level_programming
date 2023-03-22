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
	hash_node_t **hn = (hash_node_t **) malloc (sizeof(hash_node_t));

	if (ht == NULL)
	{
		free(ht);
		free(hn);
		return (NULL);
	}

	ht->size = size;

	for (i = 0; i <= size; i++)
	{
		add_hash_node_end(hn, i, i);
	}

	ht->array = hn;

	return (ht);
}


/**
 * add_hash_node_end - adds a new hash node at the end of the list/array
 *
 * @head: hash_node_t double pointer, head of list
 * @k: int, key for new hash node
 * @v: int, value (corresponding to the key) for new hash node
 *
 * Return: void
 */
void add_hash_node_end(hash_node_t **head, const int k, const int v)
{
	hash_node_t *node = *head;
	hash_node_t *new = (hash_node_t *) malloc(sizeof(hash_node_t));

	if (!(new))
	{
		free(new);
		return;
	}

	new->key = k;
	new->value = v;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return;
	}

	while (node->next != NULL)
	{ node = node->next; }

	node->next = new;
}
