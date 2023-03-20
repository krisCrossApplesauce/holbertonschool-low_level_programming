#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: list_t double pointer, pointer to head of list
 * @str: str for new null
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = *head;
	list_t *new = (list_t *) malloc(sizeof(list_t));

	if (!(new))
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (node->next != NULL)
	{ node = node->next; }

	node->next = new;
	return (new);
}