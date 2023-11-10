#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: head node of a linked list
 *
 * Return: size_t, number of nodes in a linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *n = h;
	int x = 0;
	size_t c = 0;

	if (h == NULL)
	{
		return (c);
	}

	while (x == 0)
	{
		if (n->next)
		{
			n = n->next;
		}
		else
		{
			x = 1;
		}

		c++;
	}

	return (c);
}
