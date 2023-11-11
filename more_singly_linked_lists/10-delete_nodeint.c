#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at the given index
 * of a singly linked list
 *
 * @head: listint_t **, head node of the singly linked list
 * @index: unsigned int, index of the node to be deleted
 *
 * Return: int, 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node = *head;
	listint_t *del;
	unsigned int i = 0;

	if (head == NULL)
	{ return (-1); }

	if (index == 0)
	{
		del = node;

		if (node->next != NULL)
		{ *head = node->next; }
		else
		{ *head = NULL; }
	}
	else
	{
		while (i < (index - 1) && node != NULL)
		{
			node = node->next;
			i++;
		}

		if (node == NULL || node->next == NULL)
		{ return (-1); }

		del = node->next;
		node->next = del->next;
	}

	del->n = 0;
	free(del);

	return (1);
}
