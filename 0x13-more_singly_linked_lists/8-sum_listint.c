#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 *
 * @head: listint_t pointer, head of list to be added together
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int i = 0, n = 0;
	listint_t *node;

	if (!(head))
	{ return (i); }

	node = head;

	while (node != NULL)
	{
		n = node->n;
		i = i + n;
		node = node->next;
	}

	return (i);
}
