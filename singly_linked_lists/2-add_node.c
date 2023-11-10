#include "lists.h"

/**
 * add_node - adds a new node at the beginning of the given singly linked list
 *
 * @head: list_t **, head of singly linked list
 * @str: string for new node of list
 *
 * Return: list_t, new head of singly linked list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (head == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = strlen(str);

	if (head == NULL)
	{
		new_node->next = NULL;
		return (new_node);
	}

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
