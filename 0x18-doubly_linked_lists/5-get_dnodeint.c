#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: dlistint_t pointer, head of list
 * @index: unsigned int, position of node
 *
 * Return: dlistint_t *, the nth node
 * return NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	if (!(head))
	{ return (NULL); }

	node = head;

	for (i = 0; i < index && node != NULL; i++)
	{ node = node->next; }

	if (node == NULL)
	{ return (NULL); }

	return (node);
}
