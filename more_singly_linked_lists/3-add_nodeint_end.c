#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of the singly linked list
 *
 * @head: listint_t **, head of singly linked list
 * @n: int
 *
 * Return: listint_t *, head of singly linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!(new_node))
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (node->next)
	{ node = node->next; }

	node->next = new_node;

	return (*head);
}
