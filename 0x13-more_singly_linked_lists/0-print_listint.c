#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: head of list
 *
 * Return: the number of nodes (a = amount (of nodes))
 */

size_t print_listint(const listint_t *h)
{
	size_t a = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);

		a++;
		node = node->next;
	}

	return (a);
}
