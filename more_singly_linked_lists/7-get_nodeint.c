#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a singly linked list
 *
 * @head: listint_t *, head node of the linked list
 * @index: unsigned int, index of the node to be returned
 *
 * Return: listint_t *, the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	if (head == NULL)
	{ return (NULL); }

	while (i < index && node != NULL)
	{
		node = node->next;
		i++;
	}

	return (node);
}
