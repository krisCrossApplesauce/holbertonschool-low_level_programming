#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: dlistint_t double pointer, head of list
 * @n: const int, for new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = *head;
	dlistint_t *new = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (!(new))
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (node->next != NULL)
	{ node = node->next; }

	node->next = new;
	new->prev = node;
	return (new);
}
