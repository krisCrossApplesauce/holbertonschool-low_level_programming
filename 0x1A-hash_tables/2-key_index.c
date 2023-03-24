#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 *
 * @key: const unsigned char *, the key
 * @size: unsigned long int, the size of the array of the hash table
 *
 * Return: unsigned long int, the index at which
 * the key/value pair should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx = (hash_djb2(key) % size);

	return (idx);
}
