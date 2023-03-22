#include "lists.h"

/**
 * print_dlistint_backward - prints all the elements
 * of a dlistint_t list backward
 *
 * @h: const dlistint_t *, head of list
 *
 * Return: the number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t a = 0;
	const dlistint_t *node = h;

	while (node->next != NULL)
	{ node = node->next; }

	while (node != NULL)
	{
		printf("%d\n", node->n);

		a++;
		node = node->prev;
	}

	return (a);
}
