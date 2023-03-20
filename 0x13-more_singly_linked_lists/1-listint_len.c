#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: head of linked listint_t list
 *
 * Return: size_t, number of elements in list (a = amount)
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		a++;
		node = node->next;
	}

	return (a);
}
