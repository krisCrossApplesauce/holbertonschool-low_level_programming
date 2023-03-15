#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 *
 * @h: const list_t, head of list of elements to be printed
 *
 * Return: the number of nodes (a = amount (of nodes))
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		if (node->str == NULL)
		{ printf("[0] (nil)\n"); }
		else
		{ printf("[%u] %s\n", node->len, node->str); }

		a++;
		node = node->next;
	}

	return (a);
}
