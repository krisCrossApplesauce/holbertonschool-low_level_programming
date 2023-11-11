#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a singly linked list
 *
 * @head: listint_t **, head of singly linked list
 * @n: int
 *
 * Return: listint_t *, head of singly linked list (new node)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (!(new_node))
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;

	if (head == NULL)
	{
		new_node->next = NULL;
		return (new_node);
	}

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
