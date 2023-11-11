#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * into a singly linked list at a given position
 *
 * @head: listint_t *, head node of the singly linked list
 * @idx: unsigned int, the index where the new node is to be inserted
 * @n: int, the data (n) of the new node
 *
 * Return: listint_t *, new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *node = *head;
	unsigned int i = 0;

	if (head == NULL || !(new_node))
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	while (i < (idx - 1) && node != NULL)
	{
		node = node->next;
		i++;
	}

	if (node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}
