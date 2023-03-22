#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: dlistint_t, head of list
 *
 * Return: size_t, the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t a = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);

		a++;
		node = node->next;
	}

	return (a);
}
