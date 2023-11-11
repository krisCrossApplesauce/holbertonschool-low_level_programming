#include "lists.h"

/**
 * print_listint - prints all elements in a singly linked list
 *
 * @h: listint_t *, head of singly linked list
 *
 * Return: size_t, number of nodes in singly linked list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *n = h;
	size_t c = 0;

	while (n != NULL)
	{
		printf("%d\n", n->n);
		n = n->next;
		c++;
	}

	return (c);
}
