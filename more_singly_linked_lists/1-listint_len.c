#include "lists.h"

/**
 * listint_len - returns the number of nodes in a linked list
 *
 * @h: listint_t *, head of the singly linked list
 *
 * Return: size_t, number of nodes in singly linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *n = h;
	size_t c = 0;

	while (n != NULL)
	{
		n = n->next;
		c++;
	}

	return (c);
}
