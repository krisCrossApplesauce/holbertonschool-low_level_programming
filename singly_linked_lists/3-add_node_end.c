#include "lists.h"

/**
 * add_node_end - adds a new node to the end of the given singly linked list
 *
 * @head: list_t **, head of singly linked list
 * @str: string for new node of list
 *
 * Return: list_t, new head of singly linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *n = *head;
	int x = 0;

	if (head == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	while (x == 0)
	{
		if (n->next)
		{
			n = n->next;
		}
		else
		{
			x = 1;
		}
	}

	n->next = new_node;

	return (*head);
}
