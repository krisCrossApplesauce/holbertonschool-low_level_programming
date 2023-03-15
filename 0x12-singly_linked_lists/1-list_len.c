#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: const list_t, head of list of elements
 *
 * Return: size_t, number of elements in link (a = amount)
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		a++;
		node = node->next;
	}

	return (a);
}
