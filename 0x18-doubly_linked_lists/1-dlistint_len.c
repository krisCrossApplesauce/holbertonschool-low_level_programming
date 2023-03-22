#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @h: dlistint, head of list
 *
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t a = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		a++;
		node = node->next;
	}

	return (a);
}
