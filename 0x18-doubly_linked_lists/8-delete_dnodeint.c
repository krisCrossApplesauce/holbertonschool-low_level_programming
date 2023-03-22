#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the index, index,
 * of a dlistint_t linked list
 *
 * @head: dlistint_t **, head of list
 * @index: unsigned int, placement of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	if (*head == NULL)
	{ return (-1); }

	node = (*head);

	for (i = 0; i < index && node != NULL; i++)
	{ node = node->next; }

	if (node == NULL)
	{ return (-1); }

	if (node->prev == NULL)
	{
		node->next->prev = NULL;
		*head = node->next;
	}
	else if (node->next == NULL)
	{
		node->prev->next = NULL;
	}
	else
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}

	free(node);
	return (1);
}
