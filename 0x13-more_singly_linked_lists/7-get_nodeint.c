#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 *
 * @head: listint_t pointer, head of list
 * @index: int, the index of the node, starting at 0
 *
 * Return: listint_t *, NULL if the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	if (!(head))
	{ return (NULL); }

	node = head;

	for (i = 0; i < index && node != NULL; i++)
	{
		node = node->next;
	}

	if (node == NULL)
	{ return (NULL); }

	return (node);
}
