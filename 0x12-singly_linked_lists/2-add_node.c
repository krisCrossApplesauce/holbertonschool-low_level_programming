#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: list_t double pointer, pointer to head of list
 * @str: str for new null
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int sl = 0;
	char *s = strdup(str);
	list_t *new = (list_t *) malloc(sizeof(list_t));

	while (s[sl])
	{ sl++; }

	new->str = s;
	new->len = sl;
	new->next = (*head);

	(*head) = new;

	if (!(*head))
	{
		free(new->str);
		free(s);
		free(new->next);
		free(new);
		return (NULL);
	}

	return (*head);
}
