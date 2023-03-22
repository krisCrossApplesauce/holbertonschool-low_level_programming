#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked list
 *
 * @head: dlistintn_t pointer, head of list
 *
 * Return: int, sum of all data
 * return 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int i = 0, n = 0;
	dlistint_t *node;

	if (!(head))
	{ return (1); }

	node = head;

	while (node != NULL)
	{
		n = node->n;
		i = i + n;
		node = node->next;
	}

	return (i);
}
